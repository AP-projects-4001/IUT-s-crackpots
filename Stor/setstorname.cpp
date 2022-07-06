#include "setstorname.h"
#include "ui_setstorname.h"

setStorName::setStorName(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setStorName)
{
    ui->setupUi(this);
}

setStorName::~setStorName()
{
    delete ui;
}

void setStorName::on_saveBtn_clicked()
{
    emit sendName(ui->storNameLineEdit->text());
}

