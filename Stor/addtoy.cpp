#include "addtoy.h"
#include "ui_addtoy.h"

addToy::addToy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addToy)
{
    ui->setupUi(this);
}

addToy::~addToy()
{
    delete ui;
}
