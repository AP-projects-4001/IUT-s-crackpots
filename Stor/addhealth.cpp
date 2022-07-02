#include "addhealth.h"
#include "ui_addhealth.h"

addHealth::addHealth(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addHealth)
{
    ui->setupUi(this);
}

addHealth::~addHealth()
{
    delete ui;
}
