#include "addgood.h"
#include "ui_addgood.h"

addGood::addGood(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addGood)
{
    ui->setupUi(this);
}

addGood::~addGood()
{
    delete ui;
}

void addGood::on_buttonBox_accepted()
{

}

