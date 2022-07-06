#ifndef PROFILESETTING_H
#define PROFILESETTING_H
#include "userprofile.h"
#include <QMainWindow>

namespace Ui {
class profileSetting;
}

class profileSetting : public QMainWindow , public UserProfile
{
    Q_OBJECT



private slots:

    void setInformation(QString us,QString ps,QString fn,QString ln,QString g,QString c,QString e,QString a, int id);

    void on_saveBtn_clicked();

    void on_showPasswordLabel_stateChanged(int arg1);

public:
    explicit profileSetting(QWidget *parent = nullptr);
    ~profileSetting();

private:
    Ui::profileSetting *ui;
    std::string ps;
};

#endif // PROFILESETTING_H
