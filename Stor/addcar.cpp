#include "addcar.h"
#include "ui_addcar.h"

addCar::addCar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addCar)
{
    ui->setupUi(this);
}

addCar::~addCar()
{
    delete ui;
}
