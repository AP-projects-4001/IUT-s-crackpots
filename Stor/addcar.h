#ifndef ADDCAR_H
#define ADDCAR_H

#include <QDialog>
#include "car.h"

namespace Ui {
class addCar;
}

class addCar : public QDialog
{
    Q_OBJECT

public:
    explicit addCar(QWidget *parent = nullptr);
    ~addCar();

private slots:
    void on_buttonBox_accepted();

    void updateVector();

    void setId(int i);

private:
    Ui::addCar *ui;
    std::vector<Car> cars;
    static int flag;
    int id;
};

#endif // ADDCAR_H
