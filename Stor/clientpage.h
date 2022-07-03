#ifndef CLIENTPAGE_H
#define CLIENTPAGE_H
#include "shopview.h"
#include <QMainWindow>

namespace Ui {
class clientPage;
}

class clientPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit clientPage(QWidget *parent = nullptr);
    ~clientPage();

private slots:
    void on_storBtn_clicked();

private:
    Ui::clientPage *ui;
    shopView * shop_view;
};

#endif // CLIENTPAGE_H
