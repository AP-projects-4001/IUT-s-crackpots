#include "costumerpage.h"
#include "ui_costumerpage.h"
#include "fstream"
#include "string"

using namespace std;

costumerPage::costumerPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::costumerPage)
{
    ui->setupUi(this);
    profile=new profileSetting(this);
    connect(parent ,SIGNAL(sendUserInformation(QString,QString ,int)),this,SLOT(setInformation(QString,QString,int)));
}

costumerPage::~costumerPage()
{
    delete ui;
}


void costumerPage::setInformation(QString us,QString m ,int i)
{

    username=us.toStdString();
    ui->usernameLabel->setText(QString::fromStdString(username));
    ui->idLabel->setText(QString::number(i));
    ui->moneyLabel->setText(m);

}




void costumerPage::on_profileBtn_clicked()
{
    ifstream inDataBase("D:\\Alireza\\coDataBase.txt");
    string tmp;

    while(getline(inDataBase,tmp))
    {
        if(tmp==username)
        {

            getline(inDataBase,tmp);
            password=tmp;
            getline(inDataBase,tmp);
            fName=tmp;
            getline(inDataBase,tmp);
            lName=tmp;
            getline(inDataBase,tmp);
            email=tmp;
            getline(inDataBase,tmp);
            address=tmp;
            getline(inDataBase,tmp);
            getline(inDataBase,tmp);
            this->id=QString::fromStdString(tmp).toInt();
            getline(inDataBase,tmp);


        }
    }
    inDataBase.close();
    profile->show();
    emit sendUserInformation(QString::fromStdString(username),QString::fromStdString(password),QString::fromStdString(fName),QString::fromStdString(lName),QString::fromStdString(email),QString::fromStdString(address),id);



}


void costumerPage::on_addMoney_clicked()
{
    ifstream inDataBase("D:\\Alireza\\coDataBase.txt");
    string tmp;
    string info="";
    ui->moneyLabel->setText(QString::number(ui->spinBoxMoney->value()+ui->moneyLabel->text().toInt()));

    while(getline(inDataBase,tmp))
    {
        if(tmp==username)
        {
            info+=username+'\n';
            for(int i=0;i<6;++i)
            {
                getline(inDataBase,tmp);
                info+=tmp+'\n';

            }
            getline(inDataBase,tmp);
            info+=ui->moneyLabel->text().toStdString()+'\n';
            getline(inDataBase,tmp);
            info+=tmp+'\n';
        }
        else
        {
            info+=tmp+'\n';
        }
    }
    inDataBase.close();
    ofstream outDataBase("D:\\Alireza\\coDataBase.txt");
    outDataBase<<info;
    outDataBase.close();
}

