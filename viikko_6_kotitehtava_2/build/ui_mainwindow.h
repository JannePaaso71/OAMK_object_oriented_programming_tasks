/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
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
    QLineEdit *num1;
    QLineEdit *num2;
    QLineEdit *result;
    QPushButton *N1;
    QPushButton *N2;
    QPushButton *N3;
    QPushButton *add;
    QPushButton *N4;
    QPushButton *N7;
    QPushButton *N0;
    QPushButton *N5;
    QPushButton *N8;
    QPushButton *C1;
    QPushButton *N6;
    QPushButton *N9;
    QPushButton *enter;
    QPushButton *sub;
    QPushButton *mul;
    QPushButton *div;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        num1 = new QLineEdit(centralwidget);
        num1->setObjectName("num1");
        num1->setGeometry(QRect(180, 20, 113, 22));
        num2 = new QLineEdit(centralwidget);
        num2->setObjectName("num2");
        num2->setGeometry(QRect(350, 20, 113, 22));
        result = new QLineEdit(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(520, 20, 113, 22));
        N1 = new QPushButton(centralwidget);
        N1->setObjectName("N1");
        N1->setGeometry(QRect(200, 60, 75, 24));
        N2 = new QPushButton(centralwidget);
        N2->setObjectName("N2");
        N2->setGeometry(QRect(370, 60, 75, 24));
        N3 = new QPushButton(centralwidget);
        N3->setObjectName("N3");
        N3->setGeometry(QRect(530, 60, 75, 24));
        add = new QPushButton(centralwidget);
        add->setObjectName("add");
        add->setGeometry(QRect(660, 60, 75, 24));
        N4 = new QPushButton(centralwidget);
        N4->setObjectName("N4");
        N4->setGeometry(QRect(200, 100, 75, 24));
        N7 = new QPushButton(centralwidget);
        N7->setObjectName("N7");
        N7->setGeometry(QRect(200, 140, 75, 24));
        N0 = new QPushButton(centralwidget);
        N0->setObjectName("N0");
        N0->setGeometry(QRect(200, 180, 75, 24));
        N5 = new QPushButton(centralwidget);
        N5->setObjectName("N5");
        N5->setGeometry(QRect(370, 100, 75, 24));
        N8 = new QPushButton(centralwidget);
        N8->setObjectName("N8");
        N8->setGeometry(QRect(370, 140, 75, 24));
        C1 = new QPushButton(centralwidget);
        C1->setObjectName("C1");
        C1->setGeometry(QRect(370, 180, 75, 24));
        N6 = new QPushButton(centralwidget);
        N6->setObjectName("N6");
        N6->setGeometry(QRect(530, 100, 75, 24));
        N9 = new QPushButton(centralwidget);
        N9->setObjectName("N9");
        N9->setGeometry(QRect(530, 140, 75, 24));
        enter = new QPushButton(centralwidget);
        enter->setObjectName("enter");
        enter->setGeometry(QRect(530, 180, 75, 24));
        sub = new QPushButton(centralwidget);
        sub->setObjectName("sub");
        sub->setGeometry(QRect(660, 100, 75, 24));
        mul = new QPushButton(centralwidget);
        mul->setObjectName("mul");
        mul->setGeometry(QRect(660, 140, 75, 24));
        div = new QPushButton(centralwidget);
        div->setObjectName("div");
        div->setGeometry(QRect(660, 180, 75, 24));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 0, 61, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(390, 0, 71, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(560, 0, 49, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
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
        N1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        N2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        N3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        N4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        N7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        N0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        N5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        N8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        C1->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        N6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        N9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        enter->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
        sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Number 1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Number 2", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Result:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
