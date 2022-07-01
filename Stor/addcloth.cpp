#include "addcloth.h"
#include "ui_addcloth.h"

addCloth::addCloth(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addCloth)
{
    ui->setupUi(this);
}

addCloth::~addCloth()
{
    delete ui;
}
