#ifndef ADDHEALTH_H
#define ADDHEALTH_H

#include <QDialog>

namespace Ui {
class addHealth;
}

class addHealth : public QDialog
{
    Q_OBJECT

public:
    explicit addHealth(QWidget *parent = nullptr);
    ~addHealth();

private:
    Ui::addHealth *ui;
};

#endif // ADDHEALTH_H
