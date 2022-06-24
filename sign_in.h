#ifndef SIGN_IN_H
#define SIGN_IN_H

#include <QDialog>

namespace Ui {
class Sign_in;
}

class Sign_in : public QDialog
{
    Q_OBJECT

public:
    explicit Sign_in(QWidget *parent = nullptr);
    ~Sign_in();

private slots:
    void on_returnBtn_clicked();

private:
    Ui::Sign_in *ui;
};

#endif // SIGN_IN_H
