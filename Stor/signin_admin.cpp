#include "signin_admin.h"
#include "ui_signin_admin.h"
#include "admin_page.h"
#include "QMessageBox"
#include <iostream>
#include <string>
#include "QDebug"
using namespace std;

signIn_admin::signIn_admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signIn_admin)
{
    ui->setupUi(this);
    adminPage = new Admin_Page(this);
}

signIn_admin::~signIn_admin()
{
    delete ui;
}

void signIn_admin::on_checkBoxShowPass_stateChanged(int arg1)
{
    if(ui->checkBoxShowPass->isChecked()){
        ui->adminPassLineEdit->setEchoMode(QLineEdit::Normal);
    }else{
        ui->adminPassLineEdit->setEchoMode(QLineEdit::Password);
    }
}


void signIn_admin::on_adminSigninEnter_clicked()
{
    string n = ui->adminUsernameLineEdit->text().toStdString();
    string pass = ui->adminPassLineEdit->text().toStdString();
    string p = "";
    for (int i = 0; i < n.size(); i++){
        p += tolower(n[i]);
    }
    if(ui->adminUsernameLineEdit->text() == "" || ui->adminPassLineEdit->text() == ""){
        QMessageBox messagebox;
        messagebox.critical(this, "Error", "Fill in the blank!");
        messagebox.setFixedSize(500, 200);
    }
    else if(p == "admin" && pass != "0000"){
            QMessageBox messagebox;
            messagebox.critical(this, "Error", "wrong password!");
            messagebox.setFixedSize(500, 200);

    }
    else if(p != "admin"){
        QMessageBox messagebox;
        messagebox.critical(this, "Error", "wrong username!");
        messagebox.setFixedSize(500, 200);
    }

   else{
        adminPage->show();
    }
}

