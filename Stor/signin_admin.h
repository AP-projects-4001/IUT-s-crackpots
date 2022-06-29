#ifndef SIGNIN_ADMIN_H
#define SIGNIN_ADMIN_H
#include "admin_page.h"
#include <QDialog>

namespace Ui {
class signIn_admin;
}

class signIn_admin : public QDialog
{
    Q_OBJECT

public:
    explicit signIn_admin(QWidget *parent = nullptr);
    ~signIn_admin();

private slots:
    void on_checkBoxShowPass_stateChanged(int arg1);

    void on_adminSigninEnter_clicked();

private:
    Ui::signIn_admin *ui;
    Admin_Page *adminPage;
};

#endif // SIGNIN_ADMIN_H
