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
    connect(parent ,SIGNAL(sendUserInformation(QString)),this,SLOT(setInformation(QString)));
}

costumerPage::~costumerPage()
{
    delete ui;
}


void costumerPage::setInformation(QString us)
{

    username=us.toStdString();

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
            ui->usernameLabel->setText(QString::fromStdString(username));
            ui->idLabel->setText(QString::fromStdString(tmp));
        }
    }
    inDataBase.close();
    profile->show();
    emit sendUserInformation(QString::fromStdString(username),QString::fromStdString(password),QString::fromStdString(fName),QString::fromStdString(lName),QString::fromStdString(email),QString::fromStdString(address),id);



}

