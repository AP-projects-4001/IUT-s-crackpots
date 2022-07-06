#include "clientpage.h"
#include "ui_clientpage.h"
#include "fstream"
#include "QPixmap"

clientPage::clientPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::clientPage)
{
    ui->setupUi(this);
    shop_view=new shopView(this);
    profile=new profileSetting(this);
    connect(parent ,SIGNAL(sendUserInformation(QString,QString ,QString ,int)),this,SLOT(setInformation(QString,QString,QString ,int)));
    QPixmap storPic(":/Costumer and client/img/store.png");
    QPixmap historyPic(":/Costumer and client/img/history.png");
    ui->storBtn->setIcon(storPic);
    ui->storBtn->setIconSize(storPic.rect().size());
    ui->historyBtn->setIcon(historyPic);
    ui->historyBtn->setIconSize(historyPic.size());
}

clientPage::~clientPage()
{
    delete ui;
}

void clientPage::on_storBtn_clicked()
{
    shop_view->show();
}

void clientPage::setInformation(QString us, QString m ,QString g, int i)
{

    username=us.toStdString();
    ui->usernameLabel->setText(us);
    ui->idLabel->setText(QString::number(i));
    ui->moneyLabel->setText(QString::number(m.toInt()));
    if(g=="Male")
    {
        QPixmap profPic(":/Costumer and client/img/manIcon.jpg");
        ui->profileBtn->setIcon(profPic);
        ui->profileBtn->setIconSize(profPic.size());
    }
    else if(g=="Female")
    {
        QPixmap profPic(":/Costumer and client/img/womanIcon.png");
        ui->profileBtn->setIcon(profPic);
        ui->profileBtn->setIconSize(profPic.size());
    }

}





void clientPage::on_profileBtn_clicked()
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

