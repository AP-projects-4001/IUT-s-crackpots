#include "shopview.h"
#include "ui_shopview.h"
#include "addgood.h"

shopView::shopView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::shopView)
{
    ui->setupUi(this);
}

shopView::~shopView()
{
    delete ui;
}

void shopView::on_addBtn_clicked()
{
    addGood *d = new addGood;
    d->show();
}

