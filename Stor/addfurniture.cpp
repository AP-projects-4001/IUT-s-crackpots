#include "addfurniture.h"
#include "ui_addfurniture.h"

addFurniture::addFurniture(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addFurniture)
{
    ui->setupUi(this);
}

addFurniture::~addFurniture()
{
    delete ui;
}
