#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "signupform.h"
#include "signinform.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_signUpBtn_clicked()
{
    signUpForm * signUp=new signUpForm();
    signUp->show();
    close();
}


void MainWindow::on_signInBtn_clicked()
{
    SignInForm * signIn=new SignInForm();
    signIn->show();
    close();
}

