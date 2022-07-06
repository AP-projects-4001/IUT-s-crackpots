#include "admin_page.h"
#include "ui_admin_page.h"
#include "userprofile.h"
#include "QListWidget"
#include <fstream>
#include <vector>



Admin_Page::Admin_Page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Admin_Page)
{
    ui->setupUi(this);

//    QListWidgetItem* temp= new QListWidgetItem(ui->listWidget);
//    temp->setText("arash");
//    ui->listWidget->addItem(temp);
    update_vector();

    for(int i=0; i<up.size(); i++){
        if (up[i].getRole() == "Costumer"){
            QListWidgetItem *temp = new QListWidgetItem(ui->customerListWidget);
            temp->setText(QString::fromStdString(up[i].getUsername()));
            ui->customerListWidget->addItem(temp);
        }
        if(up[i].getRole() == "Client"){
            QListWidgetItem *temp = new QListWidgetItem(ui->clientListWidget);
            temp->setText(QString::fromStdString(up[i].getUsername()));
            ui->clientListWidget->addItem(temp);
        }
    }
}

Admin_Page::~Admin_Page()
{
    delete ui;
}


void Admin_Page::update_vector()
{

    UserProfile us;
    string tmp[10];
    int counter{0};
    int idCounter{1};
    ifstream inDataBase("database.txt",ios_base::in);

    if(inDataBase)
    {

        while(getline(inDataBase,tmp[counter]))
        {


            if(tmp[counter]=="#####")
            {
                us.setDataSpecial(tmp[0],tmp[1],tmp[2],tmp[3],tmp[4],tmp[5],tmp[6],tmp[7],tmp[8],idCounter);
                up.push_back(us);
                idCounter++;
                counter=0;

            }
            else
                counter++;


        }

        //qDebug()<<QString::fromStdString(up[1].getRole());
        inDataBase.close();
    }
    else
    {
        ofstream outDataBase("database.txt",ios_base::out);
        outDataBase.close();
    }

}
