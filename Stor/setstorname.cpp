#include "setstorname.h"
#include "ui_setstorname.h"
#include "fstream"
#include "string"
using namespace std;

setStorName::setStorName(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setStorName)
{
    ui->setupUi(this);
    connect(parent,SIGNAL(sendUser(QString)),this,SLOT(setUSername(QString)));
}

setStorName::~setStorName()
{
    delete ui;

}

void setStorName::on_saveBtn_clicked()
{

    QString name=ui->storNameLineEdit->text();
    string tmp[3];
    int counter=0;
    string  info;
    ifstream inDataBase("storname.txt",std::ios_base::in);
    if(!inDataBase)
    {
        ofstream DataBase("storname.txt",ios_base::out);
    }

    while(getline(inDataBase,tmp[counter]))
    {
        if(tmp[counter]=="#####")
        {
            if(tmp[0]!=username.toStdString())
                info+=tmp[0]+'\n'+tmp[1]+'\n'+tmp[2]+'\n';
            counter=0;
        }
        else
            counter++;

    }
    info+=username.toStdString()+'\n'+ui->storNameLineEdit->text().toStdString()+'\n'+"#####"+'\n';
    ofstream outDataBase("storname.txt",ios_base::out);
    outDataBase<<info;

    emit sendName(ui->storNameLineEdit->text());

}

void setStorName::setUSername(QString us)
{
    username=us;
}

