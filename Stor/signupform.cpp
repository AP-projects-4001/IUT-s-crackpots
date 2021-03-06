#include "signupform.h"
#include "userprofile.h"
#include "mainwindow.h"
#include "ui_signupform.h"
#include "QMessageBox"
#include "fstream"
#include <vector>


using namespace std;

int UserProfile::idCounter=1;
int signUpForm::flag=1;

signUpForm::signUpForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signUpForm)
{

    ui->setupUi(this);
    ui->errorLabel->hide();

    for(int i=0;i<22;++i)
    {
        ui->cityComboBox->addItem(QString::fromStdString(cities[i]));
    }

    ui->genderComboBox->addItem("Male");
    ui->genderComboBox->addItem(("Female"));
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

    if(ui->addressLineEdit->text()=="" || ui->emailLineEdit->text()=="" || ui->passwordLineEdit->text()=="" || ui->usernamelineEdit->text()=="" || ui->lastNameLineEdit->text()=="" || ui->firstNameLineEdit->text()=="", ui->confrimPassLineEdit->text()=="")
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

                tmp.setData(ui->usernamelineEdit->text().toStdString(),ui->passwordLineEdit->text().toStdString(),ui->firstNameLineEdit->text().toStdString(),ui->lastNameLineEdit->text().toStdString(),ui->genderComboBox->currentText().toStdString(),ui->cityComboBox->currentText().toStdString(),ui->emailLineEdit->text().toStdString(),ui->addressLineEdit->text().toStdString(),ui->titel->text().toStdString(),"0");

                UP.push_back(tmp);


                ofstream outDataBase("database.txt",ios_base::app);


                string usernameString=ui->usernamelineEdit->text().toStdString();
                string usernameStr="";
                for (int i = 0; i < usernameString.length(); i++){
                    usernameStr += tolower(usernameString[i]);
                }
                outDataBase<<usernameStr<<'\n';


                outDataBase<<ui->passwordLineEdit->text().toStdString()<<'\n';
                outDataBase<<ui->firstNameLineEdit->text().toStdString()<<'\n';
                outDataBase<<ui->lastNameLineEdit->text().toStdString()<<'\n';
                outDataBase<<ui->genderComboBox->currentText().toStdString()<<'\n';
                outDataBase<<ui->cityComboBox->currentText().toStdString()<<'\n';
                outDataBase<<ui->emailLineEdit->text().toStdString()<<'\n';
                outDataBase<<ui->addressLineEdit->text().toStdString()<<'\n';
                outDataBase<<ui->titel->text().toStdString()<<'\n';
                outDataBase<<tmp.getMoney()<<'\n';
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
                ui->addressLineEdit->clear();

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
    string tmp[11];
    int counter{0};

    ifstream inDataBase("database.txt",ios_base::in);

    while(getline(inDataBase,tmp[counter]))
    {

        if(tmp[counter]=="#####")
        {

            us.setData(tmp[0],tmp[1],tmp[2],tmp[3],tmp[4],tmp[5],tmp[6],tmp[7],tmp[8],tmp[9]);

            UP.push_back(us);
            counter=0;
        }

        else
            counter++;



    }
}


void signUpForm::on_returnBtn_clicked()
{
    close();
}

