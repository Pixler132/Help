/********************************************************************************
** Form generated from reading UI file 'login_correct_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_CORRECT_WINDOW_H
#define UI_LOGIN_CORRECT_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Login_correct_window
{
public:
    QLabel *label;

    void setupUi(QDialog *Login_correct_window)
    {
        if (Login_correct_window->objectName().isEmpty())
            Login_correct_window->setObjectName(QString::fromUtf8("Login_correct_window"));
        Login_correct_window->resize(400, 300);
        label = new QLabel(Login_correct_window);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 120, 141, 31));

        retranslateUi(Login_correct_window);

        QMetaObject::connectSlotsByName(Login_correct_window);
    } // setupUi

    void retranslateUi(QDialog *Login_correct_window)
    {
        Login_correct_window->setWindowTitle(QApplication::translate("Login_correct_window", "Dialog", nullptr));
        label->setText(QApplication::translate("Login_correct_window", "Login_panel_window", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login_correct_window: public Ui_Login_correct_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_CORRECT_WINDOW_H
