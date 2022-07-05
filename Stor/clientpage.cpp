#include "clientpage.h"
#include "ui_clientpage.h"
#include "fstream"

clientPage::clientPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::clientPage)
{
    ui->setupUi(this);
    shop_view=new shopView(this);
    profile=new profileSetting(this);
    connect(parent ,SIGNAL(sendUserInformation(QString,QString ,int)),this,SLOT(setInformation(QString,QString,int)));

}

clientPage::~clientPage()
{
    delete ui;
}

void clientPage::on_storBtn_clicked()
{
    shop_view->show();
}

void clientPage::setInformation(QString us, QString m , int i)
{

    username=us.toStdString();
    ui->usernameLabel->setText(us);
    ui->idLabel->setText(QString::number(i));
    ui->moneyLabel->setText(QString::number(m.toInt()));

}





void clientPage::on_profileBtn_clicked()
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
            city=tmp;
            getline(inDataBase,tmp);
            email=tmp;
            getline(inDataBase,tmp);
            address=tmp;
            getline(inDataBase,tmp);
            getline(inDataBase,tmp);
            getline(inDataBase,tmp);
            this->id=QString::fromStdString(tmp).toInt();
            getline(inDataBase,tmp);


        }
    }
    inDataBase.close();
    profile->show();
    emit sendUserInformation(QString::fromStdString(username),QString::fromStdString(password),QString::fromStdString(fName),QString::fromStdString(lName),QString::fromStdString(city),QString::fromStdString(email),QString::fromStdString(address),id);
}

