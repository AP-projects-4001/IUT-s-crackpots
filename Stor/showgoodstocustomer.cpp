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
            tmp.setCat("mobile");
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
    else if(stuff[index].getCat()=="car")
    {
        for(unsigned int i=0;i<cars.size();++i)
        {
            if(cars[i].getId()==stuff[index].getId())
            {
                string tmp="";
                tmp+="Name: "+cars[i].getName()+'\n';
                tmp+="price: "+to_string(cars[i].getPrice())+'\n';
                tmp+="remaining: "+to_string(cars[i].getRemainingNum())+'\n';
                tmp+="selled: "+to_string(cars[i].getBoughtNum())+'\n';
                tmp+="Wheel type:: "+cars[i].getsteeringWheelType()+'\n';
                tmp+="car class:: "+cars[i].getcarClass()+'\n';
                tmp+="flue type:: "+cars[i].getfeulType()+'\n';


                ui->infoTtextEdit->setText(QString::fromStdString(tmp));
                break;
            }

        }
    }
    else if(stuff[index].getCat()=="mobile")
    {
        for(unsigned int i=0;i<mobiles.size();++i)
        {
            if(mobiles[i].getId()==stuff[index].getId())
            {
                string tmp="";
                tmp+="Name: "+mobiles[i].getName()+'\n';
                tmp+="price: "+to_string(mobiles[i].getPrice())+'\n';
                tmp+="remaining: "+to_string(mobiles[i].getRemainingNum())+'\n';
                tmp+="selled: "+to_string(mobiles[i].getBoughtNum())+'\n';
                tmp+="memory: "+to_string(mobiles[i].getmemoryGB())+'\n';
                tmp+="screen touch: "+(mobiles[i].getscreenTech())+'\n';
                tmp+="selled: "+to_string(mobiles[i].getBoughtNum())+'\n';
                tmp+="resoulution: "+to_string(mobiles[i].getrezoloutionMPx())+'\n';
                tmp+="oprating system: "+(mobiles[i].getoperatingSystem())+'\n';


                ui->infoTtextEdit->setText(QString::fromStdString(tmp));
                break;
            }

        }
    }


}


void showGoodsToCustomer::on_buyBtn_clicked()
{
    int index=ui->shopListWidget->row(ui->shopListWidget->currentItem());
    if(stuff[index].getCat()=="book")
    {
        for(unsigned int j=0;j<books.size();++j)
        {
            if(books[j].getId()==stuff[index].getId())
            {
                if(books[j].getRemainingNum()==0)
                {

                    break;
                }
                else
                {
                    books[j].setremaining(books[j].getRemainingNum()-1);
                    books[j].setBought(books[j].getBoughtNum()+1);
                    ofstream outDataBase("book.txt",ios_base::out);
                    outDataBase.close();
                    for(unsigned int i=0;i<books.size();++i)
                    {
                        ofstream outDataBase("book.txt",ios_base::app);
                        outDataBase << books[i].getUsId() << '\n';
                        outDataBase << books[i].getName() << '\n';
                        outDataBase << books[i].getPrice() << '\n';
                        outDataBase << books[i].getRemainingNum() << '\n';
                        outDataBase << books[i].getBoughtNum() << '\n';
                        outDataBase << books[i].getseriesType() << '\n';
                        outDataBase << books[i].getjeldType() << '\n';
                        outDataBase << books[i].getawards() << '\n';
                        outDataBase << books[i].getlanguage() << '\n';
                        outDataBase << books[i].getId() << '\n';
                        outDataBase << "#####\n";

                    }
                    break;
                }
            }

        }
    }
    else if(stuff[index].getCat()=="car")
    {
        for(unsigned int j=0;j<cars.size();++j)
        {
            if(cars[j].getId()==stuff[index].getId())
            {
                if(cars[j].getRemainingNum()==0)
                {

                    break;
                }
                else
                {
                    cars[j].setremaining(cars[j].getRemainingNum()-1);
                    cars[j].setBought(cars[j].getBoughtNum()+1);
                    ofstream outDatabase("car.txt", ios_base::out);
                    outDatabase.close();
                    for(unsigned int i=0;i<cars.size();++i)
                    {
                        ofstream outDatabase("car.txt", ios_base::app);
                        outDatabase << cars[i].getUsId() << '\n';
                        outDatabase << cars[i].getName() << '\n';
                        outDatabase << cars[i].getPrice() << '\n';
                        outDatabase << cars[i].getRemainingNum() << '\n';
                        outDatabase << cars[i].getBoughtNum() << '\n';
                        outDatabase << cars[i].getsteeringWheelType() << '\n';
                        outDatabase << cars[i].getfeulType() << '\n';
                        outDatabase << cars[i].getcarClass() << '\n';
                        outDatabase << cars[i].getId() << '\n';
                        outDatabase << "#####\n";
                    }
                    break;
                }
            }

        }
    }
    else if(stuff[index].getCat()=="mobile")
    {
        for(unsigned int j=0;j<mobiles.size();++j)
        {
            if(mobiles[j].getId()==stuff[index].getId())
            {
                if(mobiles[j].getRemainingNum()==0)
                {

                    break;
                }
                else
                {
                    mobiles[j].setremaining(mobiles[j].getRemainingNum()-1);
                    mobiles[j].setBought(mobiles[j].getBoughtNum()+1);
                    ofstream outDatabase("mobiles.txt", ios_base::out);
                    outDatabase.close();
                    for(unsigned int i=0;i<mobiles.size();++i)
                    {
                        ofstream outDatabase("mobiles.txt", ios_base::app);
                        outDatabase << mobiles[i].getUsId() << '\n';
                        outDatabase << mobiles[i].getName() << '\n';
                        outDatabase << mobiles[i].getPrice() << '\n';
                        outDatabase << mobiles[i].getRemainingNum() << '\n';
                        outDatabase << mobiles[i].getBoughtNum() << '\n';
                        outDatabase << mobiles[i].getmemoryGB() << '\n';
                        outDatabase << mobiles[i].getscreenTech() << '\n';
                        outDatabase << mobiles[i].getnetworks() << '\n';
                        outDatabase << mobiles[i].getrezoloutionMPx() << '\n';
                        outDatabase << mobiles[i].getoperatingSystem() << '\n';
                        outDatabase << mobiles[i].getId() << '\n';
                        outDatabase << "#####\n";

                    }
                    break;
                }
            }

        }
    }
    else if(stuff[index].getCat()=="super")
    {
        for(unsigned int j=0;j<supers.size();++j)
        {
            if(supers[j].getId()==stuff[index].getId())
            {
                if(supers[j].getRemainingNum()==0)
                {

                    break;
                }
                else
                {
                    supers[j].setremaining(supers[j].getRemainingNum()-1);
                    supers[j].setBought(supers[j].getBoughtNum()+1);
                    ofstream outDatabase("supermarket.txt", ios_base::out);
                    outDatabase.close();
                    for(unsigned int i=0;i<supers.size();++i)
                    {
                        ofstream outDatabase("supermarket.txt", ios_base::app);
                        outDatabase << supers[i].getUsId() << '\n';
                        outDatabase << supers[i].getName() << '\n';
                        outDatabase << supers[i].getPrice()<< '\n';
                        outDatabase << supers[i].getRemainingNum() << '\n';
                        outDatabase << supers[i].getBoughtNum() << '\n';
                        outDatabase << supers[i].getuse() << '\n';
                        outDatabase << supers[i].getabout() << '\n';
                        outDatabase << supers[i].getId() << '\n';
                        outDatabase << "#####\n";

                    }
                    break;
                }
            }

        }
    }
}

