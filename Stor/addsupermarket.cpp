#include "addsupermarket.h"
#include "ui_addsupermarket.h"

addSupermarket::addSupermarket(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addSupermarket)
{
    ui->setupUi(this);
}

addSupermarket::~addSupermarket()
{
    delete ui;
}
