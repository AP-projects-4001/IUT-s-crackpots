#ifndef SIGNINFORM_H
#define SIGNINFORM_H

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

private slots:
    void on_showPasswordCheckbox_stateChanged(int arg1);

    void on_returnSignInBtn_clicked();

private:
    Ui::SignInForm *ui;
};

#endif // SIGNINFORM_H
