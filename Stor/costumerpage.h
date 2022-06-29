#ifndef COSTUMERPAGE_H
#define COSTUMERPAGE_H

#include <QDialog>

namespace Ui {
class CostumerPage;
}

class CostumerPage : public QDialog
{
    Q_OBJECT

public:
    explicit CostumerPage(QWidget *parent = nullptr);
    ~CostumerPage();

private:
    Ui::CostumerPage *ui;
};

#endif // COSTUMERPAGE_H
