#include "addgood.h"
#include "ui_addgood.h"
#include "book.h"
#include "car.h"
#include "cloth.h"
#include "furniture.h"
#include "health.h"
#include "laptop.h"
#include "mobile.h"
#include "supermarket.h"
#include "toy.h"
#include "addbook.h"
#include "addcar.h"
#include "addcloth.h"
#include "addfurniture.h"
#include "addhealth.h"
#include "addlaptop.h"
#include "addmobile.h"
#include "addsupermarket.h"
#include "addtoy.h"

addGood::addGood(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addGood)
{
    ui->setupUi(this);
    connect(parent,SIGNAL(sendId(int)),this,SLOT(setId(int)));
}

addGood::~addGood()
{
    delete ui;
}

void addGood::on_buttonBox_accepted()
{
    if (ui->book_->isChecked()) {
        addBook *d = new addBook(this);
        emit sendId(id);
        d->show();

    } else if (ui->car_->isChecked()) {
        addCar *d = new addCar(this);
        emit sendId(id);
        d->show();

    } else if (ui->cloth_->isChecked()) {
        addCloth *d = new addCloth(this);
        emit sendId(id);
        d->show();

    } else if (ui->furniture_->isChecked()) {
        addFurniture *d = new addFurniture(this);
        emit sendId(id);
        d->show();

    } else if (ui->health_->isChecked()) {
        addHealth *d = new addHealth(this);
        d->show();
        emit sendId(id);
    } else if (ui->laptop_->isChecked()) {
        addLaptop *d = new addLaptop(this);
        d->show();
        emit sendId(id);
    } else if (ui->mobile_->isChecked()) {
        addMobile *d = new addMobile(this);
        emit sendId(id);
        d->show();

    } else if (ui->supermarket_->isChecked()) {
        addSupermarket *d = new addSupermarket(this);
        emit sendId(id);
        d->show();

    } else if (ui->toy_->isChecked()) {
        addToy *d = new addToy(this);
        emit sendId(id);
        d->show();

    }
}

void addGood::setId(int i)
{
    id=i;
}

