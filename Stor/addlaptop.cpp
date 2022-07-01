#include "addlaptop.h"
#include "ui_addlaptop.h"

addLaptop::addLaptop(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addLaptop)
{
    ui->setupUi(this);
}

addLaptop::~addLaptop()
{
    delete ui;
}
