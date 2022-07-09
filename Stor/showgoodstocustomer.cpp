#include "showgoodstocustomer.h"
#include "ui_showgoodstocustomer.h"


showGoodsToCustomer::showGoodsToCustomer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::showGoodsToCustomer)
{
    ui->setupUi(this);
    connect(parent,SIGNAL(sendId(int)),this,SLOT(setId(int)));
    ui->shopListWidget->clear();

}

showGoodsToCustomer::~showGoodsToCustomer()
{
    delete ui;
}

void showGoodsToCustomer::setId(int i)
{
    id=i;
}

void showGoodsToCustomer::loadGoods()
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
            QListWidgetItem * boook=new QListWidgetItem(ui->shopListWidget);
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
            QListWidgetItem * caar=new QListWidgetItem(ui->shopListWidget);
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
            QListWidgetItem * suuper=new QListWidgetItem(ui->shopListWidget);
            suuper->setText(QString::fromStdString(supers[i].getName()));
        }
    }
    for(unsigned int i =0;i<mobiles.size();++i)
    {
        if(mobiles[i].getUsId()==id)
        {
            goodsAndID tmp;
            tmp.setName(mobiles[i].getName());
            tmp.setCat("super");
            tmp.setId(mobiles[i].getId());
            stuff.push_back(tmp);
            QListWidgetItem * moobile=new QListWidgetItem(ui->shopListWidget);
            moobile->setText(QString::fromStdString(mobiles[i].getName()));
        }
    }



}

void showGoodsToCustomer::updateVectorBook() {
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

void showGoodsToCustomer::updateVectorCar() {
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

void showGoodsToCustomer::updateVectorSuperMarket() {
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

void showGoodsToCustomer::updateVectorMobile() {
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

void showGoodsToCustomer::on_refreshBtn_clicked()
{
    ui->shopListWidget->clear();
    books.clear();
    cars.clear();
    supers.clear();
    mobiles.clear();
    loadGoods();
}


void showGoodsToCustomer::on_BuyInfoBtn_clicked()
{
    int index=ui->shopListWidget->row(ui->shopListWidget->currentItem());
    if(stuff[index].getCat()=="book")
    {
        for(unsigned int i=0;i<books.size();++i)
        {
            if(books[i].getId()==stuff[index].getId())
            {
                string tmp="";
                tmp+="Name: "+books[i].getName()+'\n';
                tmp+="price: "+to_string(books[i].getPrice())+'\n';
                tmp+="remaining: "+to_string(books[i].getRemainingNum())+'\n';
                tmp+="selled: "+to_string(books[i].getBoughtNum())+'\n';
                tmp+="series type:: "+books[i].getseriesType()+'\n';
                tmp+="jeld: "+books[i].getjeldType()+'\n';
                tmp+="award: "+books[i].getawards()+'\n';
                tmp+="Language: "+books[i].getlanguage()+'\n';

                ui->infoTtextEdit->setText(QString::fromStdString(tmp));
                break;
            }

        }
    }
    else if(stuff[index].getCat()=="super")
    {
        for(unsigned int i=0;i<supers.size();++i)
        {
            if(supers[i].getId()==stuff[index].getId())
            {
                string tmp="";
                tmp+="Name: "+supers[i].getName()+'\n';
                tmp+="price: "+to_string(supers[i].getPrice())+'\n';
                tmp+="remaining: "+to_string(supers[i].getRemainingNum())+'\n';
                tmp+="selled: "+to_string(supers[i].getBoughtNum())+'\n';
                tmp+="use:: "+supers[i].getuse()+'\n';


                ui->infoTtextEdit->setText(QString::fromStdString(tmp));
                break;
            }

        }
    }


}

