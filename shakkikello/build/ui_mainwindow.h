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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QProgressBar *progressBarPlayer1;
    QProgressBar *progressBarPlayer2;
    QLabel *label;
    QPushButton *swichPlayer1;
    QPushButton *swichPlayer2;
    QPushButton *time120sec;
    QPushButton *time5min;
    QPushButton *startGame;
    QPushButton *stopGame;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(712, 496);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        progressBarPlayer1 = new QProgressBar(centralwidget);
        progressBarPlayer1->setObjectName("progressBarPlayer1");
        progressBarPlayer1->setGeometry(QRect(180, 30, 121, 31));
        progressBarPlayer1->setValue(24);
        progressBarPlayer2 = new QProgressBar(centralwidget);
        progressBarPlayer2->setObjectName("progressBarPlayer2");
        progressBarPlayer2->setGeometry(QRect(430, 30, 121, 31));
        progressBarPlayer2->setValue(24);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 130, 401, 71));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setFrameShape(QFrame::Box);
        label->setLineWidth(4);
        label->setAlignment(Qt::AlignCenter);
        swichPlayer1 = new QPushButton(centralwidget);
        swichPlayer1->setObjectName("swichPlayer1");
        swichPlayer1->setGeometry(QRect(190, 80, 75, 24));
        swichPlayer2 = new QPushButton(centralwidget);
        swichPlayer2->setObjectName("swichPlayer2");
        swichPlayer2->setGeometry(QRect(440, 80, 75, 24));
        time120sec = new QPushButton(centralwidget);
        time120sec->setObjectName("time120sec");
        time120sec->setGeometry(QRect(220, 230, 91, 51));
        time5min = new QPushButton(centralwidget);
        time5min->setObjectName("time5min");
        time5min->setGeometry(QRect(390, 230, 101, 51));
        startGame = new QPushButton(centralwidget);
        startGame->setObjectName("startGame");
        startGame->setGeometry(QRect(200, 310, 121, 61));
        stopGame = new QPushButton(centralwidget);
        stopGame->setObjectName("stopGame");
        stopGame->setGeometry(QRect(380, 310, 121, 61));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 712, 22));
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
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        swichPlayer1->setText(QCoreApplication::translate("MainWindow", "Swich player", nullptr));
        swichPlayer2->setText(QCoreApplication::translate("MainWindow", "Swich player", nullptr));
        time120sec->setText(QCoreApplication::translate("MainWindow", "120 sec", nullptr));
        time5min->setText(QCoreApplication::translate("MainWindow", "5 min", nullptr));
        startGame->setText(QCoreApplication::translate("MainWindow", "START GAME", nullptr));
        stopGame->setText(QCoreApplication::translate("MainWindow", "STOP GAME", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
