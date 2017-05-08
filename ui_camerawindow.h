/********************************************************************************
** Form generated from reading UI file 'camerawindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERAWINDOW_H
#define UI_CAMERAWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CameraWindow
{
public:
    QLabel *label;

    void setupUi(QWidget *CameraWindow)
    {
        if (CameraWindow->objectName().isEmpty())
            CameraWindow->setObjectName(QStringLiteral("CameraWindow"));
        CameraWindow->resize(1024, 600);
        label = new QLabel(CameraWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1024, 600));

        retranslateUi(CameraWindow);

        QMetaObject::connectSlotsByName(CameraWindow);
    } // setupUi

    void retranslateUi(QWidget *CameraWindow)
    {
        CameraWindow->setWindowTitle(QApplication::translate("CameraWindow", "Form", 0));
        label->setText(QApplication::translate("CameraWindow", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class CameraWindow: public Ui_CameraWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERAWINDOW_H
