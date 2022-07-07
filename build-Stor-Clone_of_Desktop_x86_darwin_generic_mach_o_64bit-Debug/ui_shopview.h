/********************************************************************************
** Form generated from reading UI file 'shopview.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOPVIEW_H
#define UI_SHOPVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_shopView
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QListWidget *listWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *searchLineEdit;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QPushButton *addBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *shopView)
    {
        if (shopView->objectName().isEmpty())
            shopView->setObjectName(QString::fromUtf8("shopView"));
        shopView->resize(852, 607);
        centralwidget = new QWidget(shopView);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        listWidget = new QListWidget(splitter);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        splitter->addWidget(listWidget);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        searchLineEdit = new QLineEdit(widget);
        searchLineEdit->setObjectName(QString::fromUtf8("searchLineEdit"));

        verticalLayout->addWidget(searchLineEdit);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        addBtn = new QPushButton(widget);
        addBtn->setObjectName(QString::fromUtf8("addBtn"));

        verticalLayout_2->addWidget(addBtn);

        splitter->addWidget(widget);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        shopView->setCentralWidget(centralwidget);
        menubar = new QMenuBar(shopView);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 852, 26));
        shopView->setMenuBar(menubar);
        statusbar = new QStatusBar(shopView);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        shopView->setStatusBar(statusbar);

        retranslateUi(shopView);

        QMetaObject::connectSlotsByName(shopView);
    } // setupUi

    void retranslateUi(QMainWindow *shopView)
    {
        shopView->setWindowTitle(QCoreApplication::translate("shopView", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("shopView", "search", nullptr));
        pushButton->setText(QCoreApplication::translate("shopView", "Find", nullptr));
        addBtn->setText(QCoreApplication::translate("shopView", "Add+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class shopView: public Ui_shopView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPVIEW_H
