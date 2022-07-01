#include "addmobile.h"
#include "ui_addmobile.h"

addMobile::addMobile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addMobile)
{
    ui->setupUi(this);
}

addMobile::~addMobile()
{
    delete ui;
}
