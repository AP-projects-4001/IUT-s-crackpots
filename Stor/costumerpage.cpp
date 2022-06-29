#include "costumerpage.h"
#include "ui_costumerpage.h"

CostumerPage::CostumerPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CostumerPage)
{
    ui->setupUi(this);
}

CostumerPage::~CostumerPage()
{
    delete ui;
}
