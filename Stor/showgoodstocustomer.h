#ifndef SHOWGOODSTOCUSTOMER_H
#define SHOWGOODSTOCUSTOMER_H
#include <book.h>
#include <car.h>
#include <mobile.h>
#include <supermarket.h>
#include<iostream>
#include <fstream>
#include "goodsandid.h"
#include <string>
#include <QDialog>
 using namespace std;

namespace Ui {
class showGoodsToCustomer;
}

class showGoodsToCustomer : public QDialog , public Book, public Car,public Mobile , public Supermarket
{
    Q_OBJECT
private slots:
    void updateVectorBook();
    void updateVectorCar();
    void updateVectorSuperMarket();
    void updateVectorMobile();
    void setId(int i);
    void loadGoods();
    void on_refreshBtn_clicked();

    void on_BuyInfoBtn_clicked();

    void on_buyBtn_clicked();

    void on_findBtn_clicked();

public:
    explicit showGoodsToCustomer(QWidget *parent = nullptr);
    ~showGoodsToCustomer();

private:
    Ui::showGoodsToCustomer *ui;
    int id;
    vector<goodsAndID> stuff;
    vector<Book> books;
    vector<Car> cars;
    vector<Supermarket> supers;
    vector<Mobile> mobiles;
};

#endif // SHOWGOODSTOCUSTOMER_H
