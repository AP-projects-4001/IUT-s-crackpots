#include "clientpage.h"
#include "ui_clientpage.h"

clientPage::clientPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::clientPage)
{
    ui->setupUi(this);
    shop_view=new shopView(this);
}

clientPage::~clientPage()
{
    delete ui;
}

void clientPage::on_storBtn_clicked()
{
    shop_view->show();
}

