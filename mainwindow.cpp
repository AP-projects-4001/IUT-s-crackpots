#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sign_in.h"
#include "QMessageBox"
#include "QLabel"

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



void MainWindow::on_SignInBtn_clicked()
{
    Sign_in * signInForm=new Sign_in();
    signInForm->show();
    close();
}

