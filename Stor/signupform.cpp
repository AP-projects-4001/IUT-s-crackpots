#include "signupform.h"
#include "userprofile.h"
#include "mainwindow.h"
#include "ui_signupform.h"
#include "QMessageBox"
#include "fstream"
#include <vector>

using namespace std;

int UserProfile::idCounter=0;
int signUpForm::flag=1;

signUpForm::signUpForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signUpForm)
{
    ui->setupUi(this);
    ui->errorLabel->hide();
    if(flag==1)
    {
        update_vector();
        flag--;
    }

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

            UserProfile tmp;
            tmp.setData(ui->usernamelineEdit->text().toStdString(),ui->passwordLineEdit->text().toStdString(),ui->firstNameLineEdit->text().toStdString(),ui->lastNameLineEdit->text().toStdString(),ui->emailLineEdit->text().toStdString(),ui->addressTextEdit->toPlainText().toStdString());
            UP.push_back(tmp);

            ofstream outDataBase("/Users/parsakhodadadi/Desktop/data/data.txt",ios::app);
            outDataBase<<ui->usernamelineEdit->text().toStdString()<<'\n';
            outDataBase<<ui->passwordLineEdit->text().toStdString()<<'\n';
            outDataBase<<ui->firstNameLineEdit->text().toStdString()<<'\n';
            outDataBase<<ui->lastNameLineEdit->text().toStdString()<<'\n';
            outDataBase<<ui->emailLineEdit->text().toStdString()<<'\n';
            outDataBase<<ui->addressTextEdit->toPlainText().toStdString()<<'\n';
            outDataBase<<tmp.getId()<<'\n';
            outDataBase<<"#####\n";
            outDataBase.close();

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

void signUpForm::update_vector()
{
    UserProfile us;
    string tmp[7];
    int counter{0};
    ifstream inDataBase("/Users/parsakhodadadi/Desktop/data/data.txt");
    while(getline(inDataBase,tmp[counter]))
    {

        if(tmp[counter]=="#####")
        {
            us.setData(tmp[0],tmp[1],tmp[2],tmp[3],tmp[4],tmp[5]);
            UP.push_back(us);
            counter=0;
        }

        counter++;


    }
}



