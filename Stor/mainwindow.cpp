#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "signupform.h"
#include "signinform.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    signUp=new signUpForm(this);
    signIn=new SignInForm(this);
}

MainWindow::~MainWindow()
{
    delete ui;

}




void MainWindow::on_signUpBtn_clicked()
{

    if(!ui->Admin->isChecked())
    {
        emit changeMode(ui->costumer->isChecked());
        signUp->show();

    }
}


void MainWindow::on_signInBtn_clicked()
{

    signIn->show();

}





