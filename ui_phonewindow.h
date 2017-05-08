/********************************************************************************
** Form generated from reading UI file 'phonewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHONEWINDOW_H
#define UI_PHONEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PhoneWindow
{
public:
    QLabel *label;

    void setupUi(QWidget *PhoneWindow)
    {
        if (PhoneWindow->objectName().isEmpty())
            PhoneWindow->setObjectName(QStringLiteral("PhoneWindow"));
        PhoneWindow->resize(1016, 546);
        label = new QLabel(PhoneWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(310, 170, 67, 17));

        retranslateUi(PhoneWindow);

        QMetaObject::connectSlotsByName(PhoneWindow);
    } // setupUi

    void retranslateUi(QWidget *PhoneWindow)
    {
        PhoneWindow->setWindowTitle(QApplication::translate("PhoneWindow", "Form", 0));
        label->setText(QApplication::translate("PhoneWindow", "\346\235\245\347\224\265", 0));
    } // retranslateUi

};

namespace Ui {
    class PhoneWindow: public Ui_PhoneWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHONEWINDOW_H
