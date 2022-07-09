#ifndef CUSTOMERSHOP_H
#define CUSTOMERSHOP_H
#include "userprofile.h"
#include <vector>

#include <QMainWindow>

using namespace std;

namespace Ui {
class customerShop;
}

class customerShop : public QMainWindow
{
    Q_OBJECT
signals:
    void sendId(int i);
private slots:
    void update_vector();
    void setShops();

    void on_openBtn_clicked();

public:
    explicit customerShop(QWidget *parent = nullptr);
    ~customerShop();

private:
    Ui::customerShop *ui;
    vector<UserProfile> up;
};

#endif // CUSTOMERSHOP_H
