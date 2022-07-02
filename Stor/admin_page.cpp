#include "admin_page.h"
#include "ui_admin_page.h"
#include "userprofile.h"
#include <vector>

Admin_Page::Admin_Page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Admin_Page)
{
    ui->setupUi(this);
}

Admin_Page::~Admin_Page()
{
    delete ui;
}
