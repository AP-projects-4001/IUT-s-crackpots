#include "signupform.h"
#include "mainwindow.h"
#include "ui_signupform.h"
#include "QFile"
#include "QJsonObject"
#include "QJsonDocument"
#include "QMessageBox"

signUpForm::signUpForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signUpForm)
{
    ui->setupUi(this);
    ui->errorLabel->hide();
}

signUpForm::~signUpForm()
{
    delete ui;
}

void signUpForm::on_registerBtn_clicked()
{

    if(ui->addressTextEdit->toPlainText()=="" || ui->emailLineEdit->text()=="" || ui->passwordLineEdit->text()=="" || ui->usernamelineEdit->text()=="" || ui->lastNameLineEdit->text()=="" || ui->firstNameLineEdit->text()=="", ui->confrimPassLineEdit->text()=="")
    {
        QMessageBox::critical(this,"Information","Fill in the blank");
    }
    else if(ui->passwordLineEdit->text()!=ui->confrimPassLineEdit->text())
    {
        ui->errorLabel->show();
    }
    else
    {
        QJsonObject j;
        j["Address"]=ui->addressTextEdit->toPlainText();
        j["Email"]=ui->emailLineEdit->text();
        j["Password"]=ui->passwordLineEdit->text();
        j["User-name"]=ui->usernamelineEdit->text();
        j["Last Name"]=ui->lastNameLineEdit->text();
        j["First Name"]=ui->firstNameLineEdit->text();
        QJsonDocument d(j);
        QFile f("D:\\Alireza\\database.json");
        f.open((QIODevice::Append));
        f.write(d.toJson());
        MainWindow *m=new MainWindow();
        m->show();
        close();
    }
}


void signUpForm::on_returnBtn_clicked()
{
    MainWindow *m=new MainWindow();
    m->show();
    close();
}


void signUpForm::on_showPasscheckBox_stateChanged(int arg1)
{
    if(ui->showPasscheckBox->isChecked())
    {
        ui->passwordLineEdit->setEchoMode(QLineEdit::Normal);
        ui->confrimPassLineEdit->setEchoMode(QLineEdit::Normal);
    }
    else
    {
        ui->passwordLineEdit->setEchoMode(QLineEdit::Password);
        ui->confrimPassLineEdit->setEchoMode(QLineEdit::Password);

    }
}

