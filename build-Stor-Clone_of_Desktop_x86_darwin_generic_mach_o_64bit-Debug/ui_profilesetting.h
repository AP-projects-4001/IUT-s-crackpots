/********************************************************************************
** Form generated from reading UI file 'profilesetting.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILESETTING_H
#define UI_PROFILESETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_profileSetting
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *currentPasswordLineEdit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *newPasswordLineEdit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *confrimPasswordLineEdit;
    QLabel *securityLevelLabel;
    QCheckBox *showPasswordLabel;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *usernameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *firstNameLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lastNameLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *emailLineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *addressLineEdit;
    QLabel *IdLabel;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *saveBtn;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *profileSetting)
    {
        if (profileSetting->objectName().isEmpty())
            profileSetting->setObjectName(QString::fromUtf8("profileSetting"));
        profileSetting->resize(625, 555);
        profileSetting->setMinimumSize(QSize(625, 555));
        profileSetting->setMaximumSize(QSize(625, 555));
        centralwidget = new QWidget(profileSetting);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        currentPasswordLineEdit = new QLineEdit(groupBox_2);
        currentPasswordLineEdit->setObjectName(QString::fromUtf8("currentPasswordLineEdit"));
        currentPasswordLineEdit->setMinimumSize(QSize(250, 0));
        currentPasswordLineEdit->setMaximumSize(QSize(16777210, 16777215));
        currentPasswordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_6->addWidget(currentPasswordLineEdit);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        newPasswordLineEdit = new QLineEdit(groupBox_2);
        newPasswordLineEdit->setObjectName(QString::fromUtf8("newPasswordLineEdit"));
        newPasswordLineEdit->setMinimumSize(QSize(250, 0));
        newPasswordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_7->addWidget(newPasswordLineEdit);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_8->addWidget(label_8);

        confrimPasswordLineEdit = new QLineEdit(groupBox_2);
        confrimPasswordLineEdit->setObjectName(QString::fromUtf8("confrimPasswordLineEdit"));
        confrimPasswordLineEdit->setMinimumSize(QSize(250, 0));
        confrimPasswordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_8->addWidget(confrimPasswordLineEdit);


        verticalLayout->addLayout(horizontalLayout_8);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        securityLevelLabel = new QLabel(groupBox_2);
        securityLevelLabel->setObjectName(QString::fromUtf8("securityLevelLabel"));

        gridLayout_2->addWidget(securityLevelLabel, 0, 1, 1, 1);

        showPasswordLabel = new QCheckBox(groupBox_2);
        showPasswordLabel->setObjectName(QString::fromUtf8("showPasswordLabel"));
        showPasswordLabel->setEnabled(true);

        gridLayout_2->addWidget(showPasswordLabel, 1, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 2, 0, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        usernameLineEdit = new QLineEdit(groupBox);
        usernameLineEdit->setObjectName(QString::fromUtf8("usernameLineEdit"));
        usernameLineEdit->setReadOnly(true);

        horizontalLayout->addWidget(usernameLineEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        firstNameLineEdit = new QLineEdit(groupBox);
        firstNameLineEdit->setObjectName(QString::fromUtf8("firstNameLineEdit"));

        horizontalLayout_2->addWidget(firstNameLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lastNameLineEdit = new QLineEdit(groupBox);
        lastNameLineEdit->setObjectName(QString::fromUtf8("lastNameLineEdit"));

        horizontalLayout_3->addWidget(lastNameLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        emailLineEdit = new QLineEdit(groupBox);
        emailLineEdit->setObjectName(QString::fromUtf8("emailLineEdit"));

        horizontalLayout_4->addWidget(emailLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        addressLineEdit = new QLineEdit(groupBox);
        addressLineEdit->setObjectName(QString::fromUtf8("addressLineEdit"));

        horizontalLayout_5->addWidget(addressLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_5);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 1);

        IdLabel = new QLabel(groupBox);
        IdLabel->setObjectName(QString::fromUtf8("IdLabel"));

        gridLayout->addWidget(IdLabel, 0, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_9->addWidget(label_9);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(150, 0));

        horizontalLayout_9->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_9, 2, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);

        saveBtn = new QPushButton(centralwidget);
        saveBtn->setObjectName(QString::fromUtf8("saveBtn"));
        saveBtn->setMinimumSize(QSize(50, 0));

        horizontalLayout_10->addWidget(saveBtn);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_10->addWidget(label_10);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);


        gridLayout_3->addLayout(horizontalLayout_10, 3, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 4, 0, 1, 1);

        profileSetting->setCentralWidget(centralwidget);
        menubar = new QMenuBar(profileSetting);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 625, 26));
        profileSetting->setMenuBar(menubar);
        statusbar = new QStatusBar(profileSetting);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        profileSetting->setStatusBar(statusbar);

        retranslateUi(profileSetting);

        QMetaObject::connectSlotsByName(profileSetting);
    } // setupUi

    void retranslateUi(QMainWindow *profileSetting)
    {
        profileSetting->setWindowTitle(QCoreApplication::translate("profileSetting", "MainWindow", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("profileSetting", "Password", nullptr));
        label_6->setText(QCoreApplication::translate("profileSetting", "Current password:", nullptr));
        label_7->setText(QCoreApplication::translate("profileSetting", "  New password:   ", nullptr));
        label_8->setText(QCoreApplication::translate("profileSetting", "Confrim password:", nullptr));
        securityLevelLabel->setText(QCoreApplication::translate("profileSetting", "TextLabel", nullptr));
        showPasswordLabel->setText(QCoreApplication::translate("profileSetting", "Show password", nullptr));
        groupBox->setTitle(QCoreApplication::translate("profileSetting", "Information", nullptr));
        label->setText(QCoreApplication::translate("profileSetting", "username:", nullptr));
        label_2->setText(QCoreApplication::translate("profileSetting", "first name:", nullptr));
        label_3->setText(QCoreApplication::translate("profileSetting", "last name:", nullptr));
        label_4->setText(QCoreApplication::translate("profileSetting", "    email:   ", nullptr));
        label_5->setText(QCoreApplication::translate("profileSetting", "  Address: ", nullptr));
        IdLabel->setText(QString());
        label_9->setText(QCoreApplication::translate("profileSetting", "  City :", nullptr));
        saveBtn->setText(QCoreApplication::translate("profileSetting", "Save", nullptr));
        label_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class profileSetting: public Ui_profileSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILESETTING_H
