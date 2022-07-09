#ifndef CUSTOMERSHOP_H
#define CUSTOMERSHOP_H
#include "userprofile.h"
#include <QMainWindow>

namespace Ui {
class customerShop;
}

class customerShop : public QMainWindow
{
    Q_OBJECT

private slots:
    void update_vector();
    void setShops();

public:
    explicit customerShop(QWidget *parent = nullptr);
    ~customerShop();

private:
    Ui::customerShop *ui;
    vector<UserProfile> up;
};

#endif // CUSTOMERSHOP_H
