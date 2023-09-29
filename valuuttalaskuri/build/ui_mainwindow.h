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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Kruunuteuroksi
{
public:
    QWidget *centralwidget;
    QPushButton *Kruunureuroiksi;
    QLineEdit *tulostelaatikko;
    QPushButton *eurotkruunuiksi;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Kruunuteuroksi)
    {
        if (Kruunuteuroksi->objectName().isEmpty())
            Kruunuteuroksi->setObjectName("Kruunuteuroksi");
        Kruunuteuroksi->resize(800, 600);
        centralwidget = new QWidget(Kruunuteuroksi);
        centralwidget->setObjectName("centralwidget");
        Kruunureuroiksi = new QPushButton(centralwidget);
        Kruunureuroiksi->setObjectName("Kruunureuroiksi");
        Kruunureuroiksi->setGeometry(QRect(110, 160, 101, 24));
        tulostelaatikko = new QLineEdit(centralwidget);
        tulostelaatikko->setObjectName("tulostelaatikko");
        tulostelaatikko->setGeometry(QRect(280, 160, 113, 22));
        eurotkruunuiksi = new QPushButton(centralwidget);
        eurotkruunuiksi->setObjectName("eurotkruunuiksi");
        eurotkruunuiksi->setGeometry(QRect(110, 250, 101, 24));
        Kruunuteuroksi->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Kruunuteuroksi);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Kruunuteuroksi->setMenuBar(menubar);
        statusbar = new QStatusBar(Kruunuteuroksi);
        statusbar->setObjectName("statusbar");
        Kruunuteuroksi->setStatusBar(statusbar);

        retranslateUi(Kruunuteuroksi);

        QMetaObject::connectSlotsByName(Kruunuteuroksi);
    } // setupUi

    void retranslateUi(QMainWindow *Kruunuteuroksi)
    {
        Kruunuteuroksi->setWindowTitle(QCoreApplication::translate("Kruunuteuroksi", "MainWindow", nullptr));
        Kruunureuroiksi->setText(QCoreApplication::translate("Kruunuteuroksi", "Kruunut Euroiksi", nullptr));
        eurotkruunuiksi->setText(QCoreApplication::translate("Kruunuteuroksi", "Eurot Kruunuiksi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Kruunuteuroksi: public Ui_Kruunuteuroksi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
