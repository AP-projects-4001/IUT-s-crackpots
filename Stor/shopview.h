#ifndef SHOPVIEW_H
#define SHOPVIEW_H

#include <QMainWindow>

namespace Ui {
class shopView;
}

class shopView : public QMainWindow
{
    Q_OBJECT

public:
    explicit shopView(QWidget *parent = nullptr);
    ~shopView();

private:
    Ui::shopView *ui;

};

#endif // SHOPVIEW_H
