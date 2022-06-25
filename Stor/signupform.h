#ifndef SIGNUPFORM_H
#define SIGNUPFORM_H

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

    void on_returnBtn_clicked();

    void on_showPasscheckBox_stateChanged(int arg1);

private:
    Ui::signUpForm *ui;
};

#endif // SIGNUPFORM_H
