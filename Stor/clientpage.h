#ifndef CLIENTPAGE_H
#define CLIENTPAGE_H

#include <QMainWindow>

namespace Ui {
class clientPage;
}

class clientPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit clientPage(QWidget *parent = nullptr);
    ~clientPage();

private:
    Ui::clientPage *ui;
};

#endif // CLIENTPAGE_H
