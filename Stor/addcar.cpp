#include "addcar.h"
#include "ui_addcar.h"
#include "car.h"
#include "QMessageBox"
#include "fstream"
#include <vector>

using namespace::std;

int Car::idCounter = 1;
int addCar::flag = 1;
addCar::addCar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addCar)
{
    ui->setupUi(this);

    if(flag==1)
    {
        updateVector();
        flag--;
    }
    connect(parent,SIGNAL(sendId(int)),this,SLOT(setId(int)));
}



addCar::~addCar()
{
    delete ui;
}

void addCar::on_buttonBox_accepted()
{
    if (ui->name_lineEdit->text() == "" || ui->price_lineEdit->text() == "") {
        QMessageBox::critical(this, "Information", "Fill in the blank");
    } else {
        try {
            Car newCar;
            newCar.setData(id,ui->name_lineEdit->text().toStdString(), ui->price_lineEdit->text().toInt(),
                           ui->number_spinBox->value(), 0, ui->steering_comboBox->currentText().toStdString(),
                           ui->feul_comboBox->currentText().toStdString(), ui->class_comboBox->currentText().toStdString());

            ofstream outDatabase("car.txt", ios_base::app);
            outDatabase << newCar.getUsId() << '\n';
            outDatabase << newCar.getName() << '\n';
            outDatabase << newCar.getPrice() << '\n';
            outDatabase << newCar.getRemainingNum() << '\n';
            outDatabase << newCar.getBoughtNum() << '\n';
            outDatabase << newCar.getsteeringWheelType() << '\n';
            outDatabase << newCar.getfeulType() << '\n';
            outDatabase << newCar.getcarClass() << '\n';
            outDatabase << newCar.getId() << '\n';

            outDatabase << "#####\n" ;

            QMessageBox::information(this, "addcar", "Car added successfully.");

            outDatabase.close();

            cars.push_back(newCar);

            ui->name_lineEdit->clear();
            ui->price_lineEdit->clear();
            ui->number_spinBox->clear();
            ui->steering_comboBox->clear();
            ui->feul_comboBox->clear();
            ui->class_comboBox->clear();

            close();

        } catch(...) {
            QMessageBox::critical(this,"Error","error");
        }
    }
}

void addCar::updateVector() {
    Car car;
    string tmp[10];
    int counter{0};
    ifstream inDataBase("car.txt", ios_base::in);
    while(getline(inDataBase,tmp[counter]))
    {

        if(tmp[counter]=="#####")
        {

            car.setData(stoi(tmp[0]),(tmp[1]),stoi(tmp[2]),stoi(tmp[3]),stoi(tmp[4]),tmp[5],tmp[6],tmp[7]);

            cars.push_back(car);
            counter=0;
        }

        else
            counter++;

    }
}
void addCar::setId(int i)
{
    id=i;
}

