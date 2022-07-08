#include "shopview.h"
#include "ui_shopview.h"
#include "addgood.h"
#include "fstream"
#include "QListWidgetItem"

using namespace std;

shopView::shopView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::shopView)
{
    ui->setupUi(this);
    connect(parent,SIGNAL(sendId(int)),this,SLOT(setId(int)));
    ui->goodsListWidget->clear();


}

shopView::~shopView()
{
    delete ui;
}

void shopView::on_addBtn_clicked()
{
    addGood *d = new addGood(this);
    emit sendId(id);
    d->show();

}

void shopView::setId(int i)
{
    id=i;
}

void shopView::loadGoods()
{
    string tmp;
    updateVectorBook();
    updateVectorCar();
    updateVectorSuperMarket();
    updateVectorMobile();
    for(unsigned int i =0;i<books.size();++i)
    {
        if(books[i].getUsId()==id)
        {
            goodsAndID tmp;
            tmp.setName(books[i].getName());
            tmp.setCat("book");
            tmp.setId(books[i].getId());
            stuff.push_back(tmp);
            QListWidgetItem * boook=new QListWidgetItem(ui->goodsListWidget);
            boook->setText(QString::fromStdString(books[i].getName()));
        }
    }
    for(unsigned int i =0;i<cars.size();++i)
    {
        if(cars[i].getUsId()==id)
        {
            goodsAndID tmp;
            tmp.setName(cars[i].getName());
            tmp.setCat("car");
            tmp.setId(cars[i].getId());
            stuff.push_back(tmp);
            QListWidgetItem * caar=new QListWidgetItem(ui->goodsListWidget);
            caar->setText(QString::fromStdString(cars[i].getName()));
        }
    }
    for(unsigned int i =0;i<supers.size();++i)
    {
        if(supers[i].getUsId()==id)
        {
            goodsAndID tmp;
            tmp.setName(supers[i].getName());
            tmp.setCat("super");
            tmp.setId(supers[i].getId());
            stuff.push_back(tmp);
            QListWidgetItem * suuper=new QListWidgetItem(ui->goodsListWidget);
            suuper->setText(QString::fromStdString(supers[i].getName()));
        }
    }
    for(unsigned int i =0;i<supers.size();++i)
    {
        if(mobiles[i].getUsId()==id)
        {
            goodsAndID tmp;
            tmp.setName(mobiles[i].getName());
            tmp.setCat("super");
            tmp.setId(mobiles[i].getId());
            stuff.push_back(tmp);
            QListWidgetItem * moobile=new QListWidgetItem(ui->goodsListWidget);
            moobile->setText(QString::fromStdString(mobiles[i].getName()));
        }
    }



}

void shopView::updateVectorBook() {
    Book book;
    string tmp[11];
    int counter{0};
    int idCounter=1;
    ifstream inDataBase("book.txt", ios_base::in);
    while(getline(inDataBase,tmp[counter]))
    {

        if(tmp[counter]=="#####")
        {

            book.setSpecialData(stoi(tmp[0]),(tmp[1]),stoi(tmp[2]),stoi(tmp[3]),stoi(tmp[4]),tmp[5],tmp[6],tmp[7],tmp[8],idCounter);
            idCounter++;
            books.push_back(book);
            counter=0;
        }

        else
            counter++;

    }
}

void shopView::updateVectorCar() {
    Car car;
    string tmp[10];
    int counter{0};
    int idCounter=1;
    ifstream inDataBase("car.txt", ios_base::in);
    while(getline(inDataBase,tmp[counter]))
    {

        if(tmp[counter]=="#####")
        {

            car.setSpecialData(stoi(tmp[0]),tmp[1],stoi(tmp[2]),stoi(tmp[3]),stoi(tmp[4]),tmp[5],tmp[6],(tmp[7]),idCounter);
            idCounter++;
            cars.push_back(car);
            counter=0;
        }

        else
            counter++;

    }
}

void shopView::updateVectorSuperMarket() {
    Supermarket super;
    string tmp[9];
    int counter{0};
    int idCounter=1;
    ifstream inDataBase("supermarket.txt",ios_base::in);
    while(getline(inDataBase,tmp[counter]))
    {

        if(tmp[counter]=="#####")
        {

            super.setSpecialData(stoi(tmp[0]),(tmp[1]),stoi(tmp[2]),stoi(tmp[3]),stoi(tmp[4]),tmp[5],tmp[6],idCounter);
            idCounter++;
            supers.push_back(super);
            counter=0;
        }

        else
            counter++;

    }
}

void shopView::updateVectorMobile() {
    Mobile mobile;
    string tmp[12];
    int counter{0};
    int idCounter=1;
    ifstream inDataBase("mobiles.txt",ios_base::in);
    while(getline(inDataBase,tmp[counter]))
    {

        if(tmp[counter]=="#####")
        {
            mobile.setSpecialData(stoi(tmp[0]),tmp[1],stoi(tmp[2]),stoi(tmp[3]),stoi(tmp[4]),stoi(tmp[5]),tmp[6],tmp[7],stoi(tmp[8]),
                    tmp[9],idCounter);
            idCounter++;
            mobiles.push_back(mobile);
            counter=0;
        }

        else
            counter++;

    }
}

void shopView::on_refresh_clicked()
{
    ui->goodsListWidget->clear();
    books.clear();
    cars.clear();
    supers.clear();
    loadGoods();
}

