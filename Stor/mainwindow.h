#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "signupform.h"
#include "signinform.h"
#include "signin_admin.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


signals:

    void changeMode(bool b);

private slots:
    void on_signUpBtn_clicked();

    void on_signInBtn_clicked();


private:
    Ui::MainWindow *ui;
    signUpForm * signUp;
    SignInForm * signIn;
    signIn_admin *signInAdmin;

};
#endif // MAINWINDOW_H
