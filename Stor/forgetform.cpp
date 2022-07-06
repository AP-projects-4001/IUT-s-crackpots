#include "forgetform.h"
#include "ui_forgetform.h"
#include "fstream"
#include "string"
using namespace std;

forgetForm::forgetForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::forgetForm)
{
    ui->setupUi(this);
}

forgetForm::~forgetForm()
{
    delete ui;
}

void forgetForm::on_findBtn_clicked()
{
    up.clear();
    update_vector();

    for(int i=0;i<up.size();++i)
    {
        if(up[i].getEmali()==ui->emialLineEdit->text().toStdString())
        {
            ui->passwordLineEdit->setText(QString::fromStdString(up[i].getPassword()));
        }
    }


}

void forgetForm::update_vector()
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

