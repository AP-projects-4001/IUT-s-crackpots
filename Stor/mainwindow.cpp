#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "signupform.h"
#include "signinform.h"

<<<<<<< HEAD

=======
>>>>>>> remotes/origin/arash
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
<<<<<<< HEAD
    signUp=new signUpForm(this);
    signIn=new SignInForm(this);
=======
    signUp= new signUpForm(this);
    signIn= new SignInForm(this);
    signInAdmin = new signIn_admin(this);
>>>>>>> remotes/origin/arash
}

MainWindow::~MainWindow()
{
    delete ui;

}

<<<<<<< HEAD



=======
>>>>>>> remotes/origin/arash
void MainWindow::on_signUpBtn_clicked()
{

    if(!ui->Admin->isChecked())
    {
        emit changeMode(ui->costumer->isChecked());
        signUp->show();
<<<<<<< HEAD

    }

}


void MainWindow::on_signInBtn_clicked()
{

    signIn->show();

}
=======
    }




    }


    void MainWindow::on_signInBtn_clicked()
    {

        if(!ui->Admin->isChecked())
        {
            signIn->show();
        }
        else{
            signInAdmin->show();
        }
    }
>>>>>>> remotes/origin/arash





