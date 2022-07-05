#ifndef ADDSUPERMARKET_H
#define ADDSUPERMARKET_H

#include <QDialog>

namespace Ui {
class addSupermarket;
}

class addSupermarket : public QDialog
{
    Q_OBJECT

public:
    explicit addSupermarket(QWidget *parent = nullptr);
    ~addSupermarket();

private:
    Ui::addSupermarket *ui;
};

#endif // ADDSUPERMARKET_H
