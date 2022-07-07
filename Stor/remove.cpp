#include "remove.h"
#include "ui_remove.h"

remove::remove(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::remove)
{
    ui->setupUi(this);
}

remove::~remove()
{
    delete ui;
}

void remove::on_okRemove_clicked()
{

}

