#ifndef ADDCLOTH_H
#define ADDCLOTH_H

#include <QDialog>

namespace Ui {
class addCloth;
}

class addCloth : public QDialog
{
    Q_OBJECT

public:
    explicit addCloth(QWidget *parent = nullptr);
    ~addCloth();

private:
    Ui::addCloth *ui;
};

#endif // ADDCLOTH_H
