/********************************************************************************
** Form generated from reading UI file 'baidunaviwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAIDUNAVIWINDOW_H
#define UI_BAIDUNAVIWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BaiduNaviWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BaiduNaviWindow)
    {
        if (BaiduNaviWindow->objectName().isEmpty())
            BaiduNaviWindow->setObjectName(QStringLiteral("BaiduNaviWindow"));
        BaiduNaviWindow->resize(1024, 600);
        centralwidget = new QWidget(BaiduNaviWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(480, 210, 281, 51));
        BaiduNaviWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BaiduNaviWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1024, 25));
        BaiduNaviWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(BaiduNaviWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        BaiduNaviWindow->setStatusBar(statusbar);

        retranslateUi(BaiduNaviWindow);

        QMetaObject::connectSlotsByName(BaiduNaviWindow);
    } // setupUi

    void retranslateUi(QMainWindow *BaiduNaviWindow)
    {
        BaiduNaviWindow->setWindowTitle(QApplication::translate("BaiduNaviWindow", "MainWindow", 0));
        label->setText(QApplication::translate("BaiduNaviWindow", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class BaiduNaviWindow: public Ui_BaiduNaviWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAIDUNAVIWINDOW_H
