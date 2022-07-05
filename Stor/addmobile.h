#ifndef ADDMOBILE_H
#define ADDMOBILE_H

#include <QDialog>

namespace Ui {
class addMobile;
}

class addMobile : public QDialog
{
    Q_OBJECT

public:
    explicit addMobile(QWidget *parent = nullptr);
    ~addMobile();

private:
    Ui::addMobile *ui;
};

#endif // ADDMOBILE_H
