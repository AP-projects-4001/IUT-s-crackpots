#include "profilesetting.h"
#include "ui_profilesetting.h"
#include "fstream"
#include "QMessageBox"

using namespace std;

profileSetting::profileSetting(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::profileSetting)
{
    connect(parent,SIGNAL(sendUserInformation(QString ,QString,QString ,QString ,QString ,QString ,QString ,QString,int )),this,SLOT(setInformation(QString ,QString ,QString ,QString ,QString ,QString ,QString ,QString ,int )));
    ui->setupUi(this);

    for (int i=0;i<22;i++)
    {
        ui->comboBox->addItem(QString::fromStdString(cities[i]));
    }
    ui->genderComboBox->addItem("Male");
    ui->genderComboBox->addItem("Female");
}

profileSetting::~profileSetting()
{
    delete ui;
}


void profileSetting::setInformation(QString us, QString ps, QString fn, QString ln,QString g,QString c, QString e, QString a, int id)
{
    ui->IdLabel->setText(QString::number(id));
    ui->usernameLineEdit->setText(us);
    ui->firstNameLineEdit->setText(fn);
    ui->lastNameLineEdit->setText(ln);
    ui->emailLineEdit->setText(e);
    ui->addressLineEdit->setText(a);
    ui->comboBox->setCurrentText(c);
    ui->genderComboBox->setCurrentText(g);
    this->ps=ps.toStdString();
}

void profileSetting::on_saveBtn_clicked()
{
    try
    {


        if(ui->currentPasswordLineEdit->text().toStdString()!=ps && ui->changePasswordcheckBox->isChecked())
        {
            int x=1;
            throw x;
            if(ui->newPasswordLineEdit->text()!=ui->confrimPasswordLineEdit->text())
            {
                int x=0;
                throw x;
            }
        }

        ifstream indataBase("userDataBase.txt",ios_base::in);

        string tmp;
        string info="";
            while(getline(indataBase,tmp))
            {
                    if(tmp==ui->usernameLineEdit->text().toStdString())
                    {

                        info+=tmp+'\n';
                        getline(indataBase,tmp);


                        if(ui->currentPasswordLineEdit->text().toStdString()=="")
                            info+=ps+'\n';
                        else
                            info+=ui->newPasswordLineEdit->text().toStdString()+'\n';


                        getline(indataBase,tmp);
                        info+=ui->firstNameLineEdit->text().toStdString()+'\n';
                        getline(indataBase,tmp);
                        info+=ui->lastNameLineEdit->text().toStdString()+'\n';
                        getline(indataBase,tmp);
                        info+=ui->genderComboBox->currentText().toStdString()+'\n';
                        getline(indataBase,tmp);
                        info+=ui->comboBox->currentText().toStdString()+'\n';
                        getline(indataBase,tmp);
                        info+=ui->emailLineEdit->text().toStdString()+'\n';
                        getline(indataBase,tmp);
                        info+=ui->addressLineEdit->text().toStdString()+'\n';




                    }
                    else
                    {
                        info+=tmp+'\n';
                    }
             }
        ofstream outDataBase("userDataBase.txt",ios_base::out);
        outDataBase<<info;
        indataBase.close();
        outDataBase.close();

        close();
    }
    catch(int x)
    {
        if(x==0)
            QMessageBox::critical(this,"Match","Please make sure your password match!");
        else if(x==1)
            QMessageBox::critical(this,"password","Wrong password!!");
    }
//    fName=ui->firstNameLineEdit->text().toStdString();
//    lName=ui->lastNameLineEdit->text().toStdString();
//    gender=ui->genderComboBox->currentText().toStdString();
//    city=ui->comboBox->currentText().toStdString();
//    email=ui->emailLineEdit->text().toStdString();
//    address=ui->addressLineEdit->text().toStdString();

    ui->currentPasswordLineEdit->clear();
    ui->confrimPasswordLineEdit->clear();
    ui->newPasswordLineEdit->clear();

}


void profileSetting::on_showPasswordLabel_stateChanged(int arg1)
{
    if(ui->showPasswordLabel->isChecked())
    {
        ui->currentPasswordLineEdit->setEchoMode(QLineEdit::Normal);
        ui->newPasswordLineEdit->setEchoMode(QLineEdit::Normal);
        ui->confrimPasswordLineEdit->setEchoMode(QLineEdit::Normal);
    }
    else
    {
        ui->currentPasswordLineEdit->setEchoMode(QLineEdit::Password);
        ui->newPasswordLineEdit->setEchoMode(QLineEdit::Password);
        ui->confrimPasswordLineEdit->setEchoMode(QLineEdit::Password);

    }
}

