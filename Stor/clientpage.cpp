#include "clientpage.h"
#include "ui_clientpage.h"
#include "fstream"
#include "QPixmap"

clientPage::clientPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::clientPage)
{
    ui->setupUi(this);

    profile=new profileSetting(this);
    setNamePage=new setStorName(this);
    connect(parent ,SIGNAL(sendUserInformation(QString,QString ,QString ,int)),this,SLOT(setInformation(QString,QString,QString ,int)));
    QPixmap storPic(":/img/img/store.png");
    QPixmap historyPic(":/img/img/history.png");
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
{   shop_view=new shopView(this);
    shop_view->show();
    emit sendId(ui->idLabel->text().toInt());
}

void clientPage::setInformation(QString us, QString m ,QString g, int i)
{

    username=us.toStdString();
    ui->usernameLabel->setText(us);
    ui->idLabel->setText(QString::number(i));
    ui->moneyLabel->setText(QString::number(m.toInt()));
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

    ifstream inDataBase("storname.txt",ios_base::in);
    string tmp[3];
    int counter=0;
    while(getline(inDataBase,tmp[counter]))
    {
        if(tmp[counter]=="#####")
        {
            if(tmp[0]==username)
            {
                ui->shopNameLabel->setText(QString::fromStdString(tmp[1]));
                break;
            }
        }
        else
            counter++;
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


void clientPage::on_nameAction_triggered()
{
    setNamePage->show();
    emit sendUser(QString::fromStdString(username));
    connect(setNamePage,SIGNAL(sendName(QString)),this,SLOT(setName(QString)));
}


void clientPage::setName(QString n)
{

    ui->shopNameLabel->setText(n);
    ofstream outClientDataBase("client.txt",ios_base::app);


}





void clientPage::on_pushButton_4_clicked()
{
    close();
}

