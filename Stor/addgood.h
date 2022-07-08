#ifndef ADDGOOD_H
#define ADDGOOD_H

#include <QDialog>

namespace Ui {
class addGood;
}

class addGood : public QDialog
{
    Q_OBJECT
signals:
    void sendId(int i);
public:
    explicit addGood(QWidget *parent = nullptr);
    ~addGood();

private slots:
    void on_buttonBox_accepted();
    void setId(int i);

private:
    Ui::addGood *ui;
    int id;
};

#endif // ADDGOOD_H
