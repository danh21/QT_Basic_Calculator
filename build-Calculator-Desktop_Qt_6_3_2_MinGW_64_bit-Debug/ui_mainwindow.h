/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *calcBtn;
    QLabel *label;
    QLineEdit *num1;
    QLabel *label_2;
    QLineEdit *num2;
    QLineEdit *result;
    QPushButton *resetBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        calcBtn = new QPushButton(centralwidget);
        calcBtn->setObjectName(QString::fromUtf8("calcBtn"));
        calcBtn->setGeometry(QRect(140, 290, 181, 71));
        QFont font;
        font.setPointSize(14);
        calcBtn->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 100, 251, 41));
        label->setFont(font);
        num1 = new QLineEdit(centralwidget);
        num1->setObjectName(QString::fromUtf8("num1"));
        num1->setGeometry(QRect(420, 90, 221, 71));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(false);
        num1->setFont(font1);
        num1->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 200, 281, 41));
        label_2->setFont(font);
        num2 = new QLineEdit(centralwidget);
        num2->setObjectName(QString::fromUtf8("num2"));
        num2->setGeometry(QRect(420, 190, 221, 71));
        num2->setFont(font1);
        num2->setAlignment(Qt::AlignCenter);
        result = new QLineEdit(centralwidget);
        result->setObjectName(QString::fromUtf8("result"));
        result->setGeometry(QRect(420, 290, 221, 71));
        result->setFont(font1);
        result->setAlignment(Qt::AlignCenter);
        result->setReadOnly(true);
        result->setClearButtonEnabled(false);
        resetBtn = new QPushButton(centralwidget);
        resetBtn->setObjectName(QString::fromUtf8("resetBtn"));
        resetBtn->setGeometry(QRect(290, 410, 181, 71));
        resetBtn->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        calcBtn->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Enter the first number:", nullptr));
        num1->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Enter the second number:", nullptr));
        num2->setText(QString());
        result->setText(QString());
        resetBtn->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
