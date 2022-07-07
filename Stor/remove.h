#ifndef REMOVE_H
#define REMOVE_H

#include <QDialog>

namespace Ui {
class remove;
}

class remove : public QDialog
{
    Q_OBJECT

public:
    explicit remove(QWidget *parent = nullptr);
    ~remove();

private slots:
    void on_okRemove_clicked();

private:
    Ui::remove *ui;
};

#endif // REMOVE_H
