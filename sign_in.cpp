#include "sign_in.h"
#include "ui_sign_in.h"
#include "mainwindow.h"

Sign_in::Sign_in(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sign_in)
{
    ui->setupUi(this);
}

Sign_in::~Sign_in()
{
    delete ui;
}

void Sign_in::on_returnBtn_clicked()
{
    MainWindow * mainForm=new MainWindow();
    mainForm->show();
    close();
}

