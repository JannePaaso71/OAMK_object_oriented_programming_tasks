
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include <iostream>
//#include <stdio.h>
//using namespace std;


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QString number1, number2;
    int state;
    float result = 0;
    QString operand;

public slots:
    void numberClickedHandler();
    void clearClickhandler();
    void addSubMulDivClickHandler();
    void resetLineEdits();

};

#endif // MAINWINDOW_H
