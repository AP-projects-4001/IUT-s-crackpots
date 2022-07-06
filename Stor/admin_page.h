#ifndef ADMIN_PAGE_H
#define ADMIN_PAGE_H
#include "userprofile.h"
#include <QDialog>

namespace Ui {
class Admin_Page;
}

class Admin_Page : public QDialog
{
    Q_OBJECT

private slots:
    void update_vector();


public:
    explicit Admin_Page(QWidget *parent = nullptr);
    ~Admin_Page();

private:
    Ui::Admin_Page *ui;
    vector<UserProfile> up;
};

#endif // ADMIN_PAGE_H
