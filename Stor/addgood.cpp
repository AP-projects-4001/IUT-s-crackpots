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
}

addGood::~addGood()
{
    delete ui;
}

void addGood::on_buttonBox_accepted()
{
    if (ui->book_->isChecked()) {
        addBook *d = new addBook();
        d->show();
    } else if (ui->car_->isChecked()) {
        addCar *d = new addCar();
        d->show();
    } else if (ui->cloth_->isChecked()) {
        addCloth *d = new addCloth();
        d->show();
    } else if (ui->furniture_->isChecked()) {
        addFurniture *d = new addFurniture();
        d->show();
    } else if (ui->health_->isChecked()) {
        addHealth *d = new addHealth();
        d->show();
    } else if (ui->laptop_->isChecked()) {
        addLaptop *d = new addLaptop();
        d->show();
    } else if (ui->mobile_->isChecked()) {
        addMobile *d = new addMobile();
        d->show();
    } else if (ui->supermarket_->isChecked()) {
        addSupermarket *d = new addSupermarket();
        d->show();
    } else if (ui->toy_->isChecked()) {
        addToy *d = new addToy();
        d->show();
    }
}

