#ifndef SIGNUPFORM_H
#define SIGNUPFORM_H
#include "userprofile.h"

#include <QDialog>

namespace Ui {
class signUpForm;
}

class signUpForm : public QDialog
{
    Q_OBJECT

public:
    explicit signUpForm(QWidget *parent = nullptr);
    ~signUpForm();

private slots:
    void on_registerBtn_clicked();

    void setMode(bool b);

    void on_showPasscheckBox_stateChanged(int arg1);

    void update_vector();


private:
    Ui::signUpForm *ui;
    vector<UserProfile> UP;
    static int flag;
};

#endif // SIGNUPFORM_H
