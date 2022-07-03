#ifndef SIGNINFORM_H
#define SIGNINFORM_H
#include "userprofile.h"
#include "costumerpage.h"
#include "clientpage.h"
#include <QDialog>

namespace Ui {
class SignInForm;
}

class SignInForm : public QDialog
{
    Q_OBJECT

public:
    explicit SignInForm(QWidget *parent = nullptr);
    ~SignInForm();


signals:

    void sendUserInformation(QString us,QString m,int id);

private slots:

    void on_loginBtn_clicked();

    void on_showPasswordCheckbox_stateChanged(int arg1);


    void update_vector();




private:
    Ui::SignInForm *ui;
    costumerPage * coPage;
    clientPage * clPage;
    vector<UserProfile> up;
    static int flag;
};

#endif // SIGNINFORM_H
