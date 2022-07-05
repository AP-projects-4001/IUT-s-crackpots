#include "shopview.h"
#include "ui_shopview.h"

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
