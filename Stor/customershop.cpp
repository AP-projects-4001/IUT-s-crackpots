#include "customershop.h"
#include "ui_customershop.h"
#include <iostream>
#include "fstream"
#include "QDebug"
#include "QListWidgetItem"
#include"showgoodstocustomer.h"
using namespace std;
customerShop::customerShop(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::customerShop)
{
    ui->setupUi(this);
    qDebug()<<"setshop";
    update_vector();
    qDebug()<<"setshop";
    setShops();
}

customerShop::~customerShop()
{
    delete ui;
}


void customerShop::update_vector()
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

void customerShop::setShops()
{
    for(unsigned int i=0;i<up.size();++i)
    {
        if(up[i].getRole()=="Client")
        {
            QListWidgetItem *item=new QListWidgetItem(ui->shopListWidget);
            item->setText(QString::fromStdString(up[i].getUsername()));
            ui->shopListWidget->addItem(item);
        }
    }
    //qDebug()<<"setshop";
}

void customerShop::on_openBtn_clicked()
{

    for(unsigned int i=0;i<up.size();++i)
    {
        if(up[i].getUsername()==ui->shopListWidget->currentItem()->text().toStdString())
        {

            showGoodsToCustomer * goodsOfSelectedStor=new showGoodsToCustomer(this);
            goodsOfSelectedStor->show();
             emit sendId(up[i].getId());
        }
    }
}

