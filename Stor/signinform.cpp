#include "signinform.h"
#include "ui_signinform.h"
#include "mainwindow.h"

SignInForm::SignInForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignInForm)
{
    ui->setupUi(this);

}

SignInForm::~SignInForm()
{
    delete ui;
}

void SignInForm::on_showPasswordCheckbox_stateChanged(int arg1)
{
    if(ui->showPasswordCheckbox->isChecked())
        ui->passwordLineEdit->setEchoMode(QLineEdit::Normal);
    else
        ui->passwordLineEdit->setEchoMode(QLineEdit::Password);
}


void SignInForm::on_returnSignInBtn_clicked()
{
    MainWindow *m=new MainWindow();
    m->show();
    close();
}

