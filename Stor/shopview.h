#ifndef SHOPVIEW_H
#define SHOPVIEW_H
#include <vector>
#include "goodsandid.h"
#include "book.h"
#include "car.h"
#include "vector"
#include "supermarket.h"
#include "mobile.h"
#include <QMainWindow>

namespace Ui {
class shopView;
}

class shopView : public QMainWindow , public goodsAndID , public Book , public Car,public Supermarket,public Mobile
{
    Q_OBJECT




signals:
    void sendId(int i);
public:
    explicit shopView(QWidget *parent = nullptr);
    ~shopView();

private slots:
    void on_addBtn_clicked();
    void setId(int i);
    void loadGoods();
    void updateVectorBook();
    void on_refresh_clicked();
    void updateVectorCar();
    void updateVectorSuperMarket();
    void updateVectorMobile();

private:
    Ui::shopView *ui;
    int id;
    vector<goodsAndID> stuff;
    vector<Book> books;
    vector<Car> cars;
    vector<Supermarket> supers;
    vector<Mobile> mobiles;

};

#endif // SHOPVIEW_H
