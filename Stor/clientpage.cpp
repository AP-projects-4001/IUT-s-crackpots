#include "clientpage.h"
#include "ui_clientpage.h"

clientPage::clientPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::clientPage)
{
    ui->setupUi(this);
}

clientPage::~clientPage()
{
    delete ui;
}
