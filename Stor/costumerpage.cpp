#include "costumerpage.h"
#include "ui_costumerpage.h"
#include "fstream"
#include "string"
#include "QPixmap"


using namespace std;

costumerPage::costumerPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::costumerPage)
{
    ui->setupUi(this);
    QPixmap storPic(":/img/img/store.png");
    QPixmap historyPic(":/img/img/history.png");

    ui->storeBtn->setIcon(storPic);
    ui->storeBtn->setIconSize(storPic.rect().size());
    ui->historyBtn->setIcon(historyPic);
    ui->historyBtn->setIconSize(historyPic.rect().size());

    profile=new profileSetting(this);
    connect(parent ,SIGNAL(sendUserInformation(QString,QString ,QString ,int)),this,SLOT(setInformation(QString,QString,QString ,int)));
}

costumerPage::~costumerPage()
{
    delete ui;
}


void costumerPage::setInformation(QString us,QString m ,QString g,int i)
{

    username=us.toStdString();
    ui->usernameLabel->setText(QString::fromStdString(username));
    ui->idLabel->setText(QString::number(i));
    ui->moneyLabel->setText(m);
    if(g=="Male")
    {
        QPixmap profPic(":/img/img/manIcon.jpg");
        ui->profileBtn->setIcon(profPic);
        ui->profileBtn->setIconSize(profPic.size());
    }
    else if(g=="Female")
    {
        QPixmap profPic(":/img/img/womanIcon.png");
        ui->profileBtn->setIcon(profPic);
        ui->profileBtn->setIconSize(profPic.size());
    }

}




void costumerPage::on_profileBtn_clicked()
{

    ifstream inDataBase("database.txt",ios_base::in);

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
            gender=tmp;
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
    emit sendUserInformation(QString::fromStdString(username),QString::fromStdString(password),QString::fromStdString(fName),QString::fromStdString(lName),QString::fromStdString(gender),QString::fromStdString(city),QString::fromStdString(email),QString::fromStdString(address),id);



}


void costumerPage::on_addMoney_clicked()
{

    ifstream inDataBase("database.txt",ios_base::in);

    string tmp;
    string info="";
    ui->moneyLabel->setText(QString::number(ui->spinBoxMoney->value()+ui->moneyLabel->text().toInt()));

    while(getline(inDataBase,tmp))
    {
        if(tmp==username)
        {
            info+=username+'\n';
            for(int i=0;i<8;++i)
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

    ofstream outDataBase("database.txt",ios_base::out);

    outDataBase<<info;
    outDataBase.close();
}





void costumerPage::on_logoutBtn_clicked()
{
    close();
}

