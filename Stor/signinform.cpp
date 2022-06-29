#include "signinform.h"
#include "ui_signinform.h"
#include "mainwindow.h"
<<<<<<< HEAD
#include "fstream"
#include "QMessageBox"
#include "QDebug"

//int SignInForm::flag=1;
=======

>>>>>>> remotes/origin/arash
SignInForm::SignInForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignInForm)
{
    ui->setupUi(this);
<<<<<<< HEAD
    coPage=new CostumerPage(this);
//    if(flag==1)
//    {
//        update_vector();
//        qDebug()<<"this constructor and we r in flag line!";
//        flag--;
//    }

=======
>>>>>>> remotes/origin/arash

}

SignInForm::~SignInForm()
{
    delete ui;
}

<<<<<<< HEAD


void SignInForm::on_loginBtn_clicked()
{
    up.clear();
    update_vector();
    bool empty=true;
    for(int i=0;i<up.size();++i)
    {
        if(ui->usernameLineEdit->text().toStdString()==up[i].getUsername())
        {
            if(ui->passwordLineEdit->text().toStdString()==up[i].getPassword())
            {
                if(up[i].getRole()=="Costumer")
                {
                    empty=false;
                    coPage->show();
                    close();
                }


            }
        }
    }

    if (empty)
        QMessageBox::warning(this,"warning","There is no DataBase!");
}

=======
>>>>>>> remotes/origin/arash
void SignInForm::on_showPasswordCheckbox_stateChanged(int arg1)
{
    if(ui->showPasswordCheckbox->isChecked())
        ui->passwordLineEdit->setEchoMode(QLineEdit::Normal);
    else
        ui->passwordLineEdit->setEchoMode(QLineEdit::Password);
}

<<<<<<< HEAD
void SignInForm::update_vector()
{
    qDebug()<<"1";
    UserProfile us;
    string tmp[8];
    int counter{0};
    int idCounter{1};
    ifstream inDataBase("D:\\Alireza\\coDataBase.txt");
    qDebug()<<"2";
    if(inDataBase)
    {
        qDebug()<<"3";
        while(getline(inDataBase,tmp[counter]))
        {


            if(tmp[counter]=="#####")
            {
                us.setDataSpecial(tmp[0],tmp[1],tmp[2],tmp[3],tmp[4],tmp[5],tmp[6],idCounter);
                up.push_back(us);
                idCounter++;
                counter=0;

            }
            else
                counter++;


        }

        //qDebug()<<QString::fromStdString(up[1].getRole());
        inDataBase.close();
    }
    else
    {
        ofstream outDataBase("D:\\Alireza\\coDataBase.txt");
        outDataBase.close();
    }
}


=======
>>>>>>> remotes/origin/arash


