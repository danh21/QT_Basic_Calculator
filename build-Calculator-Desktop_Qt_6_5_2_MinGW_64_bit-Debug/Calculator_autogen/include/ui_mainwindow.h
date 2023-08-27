/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
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
    QLabel *label;
    QLabel *label_2;
    QLineEdit *num1;
    QPushButton *calcBtn;
    QPushButton *closeBtn;
    QLineEdit *num2;
    QLineEdit *result;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(649, 516);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 90, 241, 51));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 190, 271, 51));
        label_2->setFont(font);
        num1 = new QLineEdit(centralwidget);
        num1->setObjectName("num1");
        num1->setGeometry(QRect(370, 90, 161, 61));
        QFont font1;
        font1.setPointSize(16);
        num1->setFont(font1);
        num1->setMouseTracking(false);
        num1->setTabletTracking(false);
        num1->setAlignment(Qt::AlignCenter);
        calcBtn = new QPushButton(centralwidget);
        calcBtn->setObjectName("calcBtn");
        calcBtn->setGeometry(QRect(110, 290, 171, 61));
        calcBtn->setFont(font);
        closeBtn = new QPushButton(centralwidget);
        closeBtn->setObjectName("closeBtn");
        closeBtn->setGeometry(QRect(220, 390, 171, 61));
        closeBtn->setFont(font);
        num2 = new QLineEdit(centralwidget);
        num2->setObjectName("num2");
        num2->setGeometry(QRect(370, 190, 161, 61));
        num2->setFont(font1);
        num2->setMouseTracking(false);
        num2->setTabletTracking(false);
        num2->setAlignment(Qt::AlignCenter);
        result = new QLineEdit(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(370, 290, 161, 61));
        result->setFont(font1);
        result->setMouseTracking(false);
        result->setTabletTracking(false);
        result->setAlignment(Qt::AlignCenter);
        result->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 649, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Enter the first number: ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Enter the second number: ", nullptr));
        calcBtn->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
        closeBtn->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
