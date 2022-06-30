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

    connect(parent,SIGNAL(changeMode(bool)),this,SLOT(setMode(bool)));
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

void signUpForm::setMode(bool b)
{
    if(b)
    {
        ui->titel->setText("Costumer");
    }

    else
    {
        ui->titel->setText("Client");
    }
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
         ui->errorLabel->hide();
        try{
                for(int i=0;i<UP.size();++i)
                {
                    if(UP[i].getUsername()==ui->usernamelineEdit->text().toStdString())
                    {
                        int x=1;
                        throw x;
                    }
                }

                UserProfile tmp;
                tmp.setData(ui->usernamelineEdit->text().toStdString(),ui->passwordLineEdit->text().toStdString(),ui->firstNameLineEdit->text().toStdString(),ui->lastNameLineEdit->text().toStdString(),ui->emailLineEdit->text().toStdString(),ui->addressTextEdit->toPlainText().toStdString(),ui->titel->text().toStdString());
                UP.push_back(tmp);

                ofstream outDataBase("D:\\Alireza\\coDataBase.txt",ios::app);
                outDataBase<<ui->usernamelineEdit->text().toStdString()<<'\n';
                outDataBase<<ui->passwordLineEdit->text().toStdString()<<'\n';
                outDataBase<<ui->firstNameLineEdit->text().toStdString()<<'\n';
                outDataBase<<ui->lastNameLineEdit->text().toStdString()<<'\n';
                outDataBase<<ui->emailLineEdit->text().toStdString()<<'\n';
                outDataBase<<ui->addressTextEdit->toPlainText().toStdString()<<'\n';
                outDataBase<<ui->titel->text().toStdString()<<'\n';
                outDataBase<<tmp.getId()<<'\n';
                outDataBase<<"#####\n";
                outDataBase.close();

                QMessageBox::information(this,"register","congratulation ,your account has been successfully created!");

                ui->usernamelineEdit->clear();
                ui->passwordLineEdit->clear();
                ui->confrimPassLineEdit->clear();
                ui->firstNameLineEdit->clear();
                ui->lastNameLineEdit->clear();
                ui->emailLineEdit->clear();
                ui->addressTextEdit->clear();

                outDataBase.close();

                close();
        }
        catch(int x)
        {

            QMessageBox::critical(this,"Error","This username is alredy taken!!");
        }

    }
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
    string tmp[8];
    int counter{0};
    ifstream inDataBase("D:\\Alireza\\coDataBase.txt");
    while(getline(inDataBase,tmp[counter]))
    {

        if(tmp[counter]=="#####")
        {
            us.setData(tmp[0],tmp[1],tmp[2],tmp[3],tmp[4],tmp[5],tmp[6]);
            UP.push_back(us);
            counter=0;
        }

        else
            counter++;



    }
}

