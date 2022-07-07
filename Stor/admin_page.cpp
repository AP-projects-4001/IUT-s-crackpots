#include "admin_page.h"
#include "ui_admin_page.h"
#include "userprofile.h"
#include "QListWidget"
#include "QMessageBox"
#include <string>
#include <fstream>
#include <vector>

using namespace std;
int Admin_Page::flag = 0;

Admin_Page::Admin_Page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Admin_Page)
{
    ui->setupUi(this);

//    QListWidgetItem* temp= new QListWidgetItem(ui->listWidget);
//    temp->setText("arash");
//    ui->listWidget->addItem(temp);
    update_vector();
    update_list();
    profile=new profileSetting(this);


}

Admin_Page::~Admin_Page()
{
    delete ui;

}


void Admin_Page::update_vector()
{

    UserProfile us;
    string tmp[11];
    int counter{0};
    int idCounter{1};
    ifstream inDataBase("database.txt",ios_base::in);

    if(inDataBase)
    {

        while(getline(inDataBase,tmp[counter]))
        {


            if(tmp[counter]=="#####")
            {
                us.setDataSpecial(tmp[0],tmp[1],tmp[2],tmp[3],tmp[4],tmp[5],tmp[6],tmp[7],tmp[8],tmp[9],idCounter);
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

void Admin_Page::on_refreshBtn_clicked()
{
    up.clear();
    update_vector();
    ui->clientListWidget->clear();
    ui->customerListWidget->clear();
    update_list();

}

void Admin_Page::update_list()
{
    for(unsigned int i=0; i<up.size(); i++){
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
        if(up[i].getRole()=="cldel")
        {
            QListWidgetItem *temp = new QListWidgetItem(ui->clientListWidget);
            temp->setText(QString::fromStdString(up[i].getUsername()));
            ui->clientListWidget->addItem(temp);
            temp->setBackground(Qt::red);
        }

        if(up[i].getRole()=="cudel")
        {
            QListWidgetItem *temp = new QListWidgetItem(ui->customerListWidget);
            temp->setText(QString::fromStdString(up[i].getUsername()));
            ui->customerListWidget->addItem(temp);
            temp->setBackground(Qt::red);
        }

    }
    if (flag == 0){
        cust = new QListWidgetItem(ui->customerListWidget);
        clie = new QListWidgetItem(ui->clientListWidget);
        flag++;
    }
}


void Admin_Page::on_showBtn_clicked()
{

    ui->showInfo->clear();
    if (ui->customerListWidget->currentItem()){
        cust = ui->customerListWidget->currentItem();
        string userName = cust->text().toStdString();
        string n = "";
        int flag = 0;
        for (unsigned int i=0  ; i<up.size(); i++){
            if(up[i].getUsername() == userName){
                n += "Username : "+up[i].getUsername()+'\n';
                n += "First name: "+up[i].getFname()+'\n';
                n += "Last name : "+up[i].getLname()+'\n';
                n += "Gender : "+up[i].getGender()+'\n';
                n += "Email : "+up[i].getEmali()+'\n';
                n += "Money : "+up[i].getMoney()+"$\n";
                n += "City : "+up[i].getCity()+'\n';
                n += "Address : "+up[i].getAdrress()+'\n';
                n += "ID : "+to_string(up[i].getId())+'\n';
                flag = 1;
            }
            if (flag == 1)
            {
                ui->showInfo->setText(QString::fromStdString(n));
                flag++;
            }

        }
    }
    if (ui->clientListWidget->currentItem()){
        clie = ui->clientListWidget->currentItem();
        string userName = clie->text().toStdString();
        string n = "";
        int flag = 0;
        for (unsigned int i=0  ; i<up.size(); i++){
            if(up[i].getUsername() == userName){
                n += "Username : "+up[i].getUsername()+'\n';
                n += "First name: "+up[i].getFname()+'\n';
                n += "Last name : "+up[i].getLname()+'\n';
                n += "Gender : "+up[i].getGender()+'\n';
                n += "Email : "+up[i].getEmali()+'\n';
                n += "Money : "+up[i].getMoney()+"$\n";
                n += "City : "+up[i].getCity()+'\n';
                n += "Address : "+up[i].getAdrress()+'\n';
                n += "ID : "+to_string(up[i].getId())+'\n';
                flag = 1;
            }
            if (flag == 1)
            {
                ui->showInfo->setText(QString::fromStdString(n));
                flag++;
            }
        }
    }

on_refreshBtn_clicked();
}



void Admin_Page::on_removeBtn_clicked()
{
    ofstream outDataBase("database.txt",ios_base::out);
    string tmp;
    if (ui->customerListWidget->currentItem()){
        cust = ui->customerListWidget->currentItem();

    string userName = cust->text().toStdString();
    for (unsigned int i = 0; i < up.size(); i++){
        if (up[i].getUsername() == userName){
            up[i].setRole("cudel");
            cust->setBackground(QColor(Qt::red));
            break;
        }
    }


    }
    if (ui->clientListWidget->currentItem()){
        clie = ui->clientListWidget->currentItem();

        string userName = clie->text().toStdString();
        for (unsigned int i = 0; i < up.size(); i++){
            if (up[i].getUsername() == userName){
                up[i].setRole("cldel");
                clie->setBackground(QColor(Qt::red));
            }
        }
    }

    for(unsigned int i=0;i<up.size();++i)
    {
        outDataBase<<up[i].getUsername()<<'\n';
        outDataBase<<up[i].getPassword()<<'\n';
        outDataBase<<up[i].getFname()<<'\n';
        outDataBase<<up[i].getLname()<<'\n';
        outDataBase<<up[i].getGender()<<'\n';
        outDataBase<<up[i].getCity()<<'\n';
        outDataBase<<up[i].getEmali()<<'\n';
        outDataBase<<up[i].getAdrress()<<'\n';
        outDataBase<<up[i].getRole()<<'\n';
        outDataBase<<up[i].getMoney()<<'\n';
        outDataBase<<up[i].getId()<<'\n';
        outDataBase<<"#####\n";

    }
    outDataBase.close();
}


void Admin_Page::on_changeBtn_clicked()
{

    if(ui->clientListWidget->currentItem())
    {
        clie=ui->clientListWidget->currentItem();
        for(unsigned int i=0;i<up.size();++i)
        {
            if(up[i].getUsername()==clie->text().toStdString())
            {
                emit sendUserInformation(QString::fromStdString(up[i].getUsername()),QString::fromStdString(up[i].getPassword()),QString::fromStdString(up[i].getFname()),QString::fromStdString(up[i].getLname()),QString::fromStdString(up[i].getGender()),QString::fromStdString(up[i].getCity()),QString::fromStdString(up[i].getEmali()),QString::fromStdString(up[i].getAdrress()),up[i].getId());
            }
        }
    }
    if(ui->customerListWidget->currentItem())
    {
        cust=ui->customerListWidget->currentItem();
        for(unsigned int i=0;i<up.size();++i)
        {
            if(up[i].getUsername()==cust->text().toStdString())
            {
                emit sendUserInformation(QString::fromStdString(up[i].getUsername()),QString::fromStdString(up[i].getPassword()),QString::fromStdString(up[i].getFname()),QString::fromStdString(up[i].getLname()),QString::fromStdString(up[i].getGender()),QString::fromStdString(up[i].getCity()),QString::fromStdString(up[i].getEmali()),QString::fromStdString(up[i].getAdrress()),up[i].getId());
            }
        }
    }
    profile->show();
}

