#ifndef CLIENTPAGE_H
#define CLIENTPAGE_H
#include "shopview.h"
#include <QMainWindow>
#include "profilesetting.h"

namespace Ui {
class clientPage;
}

class clientPage : public QMainWindow , public UserProfile
{
    Q_OBJECT

public:
    explicit clientPage(QWidget *parent = nullptr);
    ~clientPage();

signals:
    void sendUserInformation(QString us,QString ps,QString fn,QString ln,QString g,QString c,QString e,QString a,int id);


private slots:
    void on_storBtn_clicked();

    void setInformation(QString us,QString m,QString g,int id);

    void on_profileBtn_clicked();

private:
    Ui::clientPage *ui;
    shopView * shop_view;
    profileSetting * profile;

};

#endif // CLIENTPAGE_H
