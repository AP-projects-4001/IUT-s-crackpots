#include "addgood2.h"
#include "ui_addgood2.h"

addGood2::addGood2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addGood2)
{
    ui->setupUi(this);
}

addGood2::~addGood2()
{
    delete ui;
}
