
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <string>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    state = 0;
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();

    connect(ui->N0, SIGNAL(clicked(bool)), this, SLOT(numberClickedHandler()));
    connect(ui->N1, SIGNAL(clicked(bool)), this, SLOT(numberClickedHandler()));
    connect(ui->N2, SIGNAL(clicked(bool)), this, SLOT(numberClickedHandler()));
    connect(ui->N3, SIGNAL(clicked(bool)), this, SLOT(numberClickedHandler()));
    connect(ui->N4, SIGNAL(clicked(bool)), this, SLOT(numberClickedHandler()));
    connect(ui->N5, SIGNAL(clicked(bool)), this, SLOT(numberClickedHandler()));
    connect(ui->N6, SIGNAL(clicked(bool)), this, SLOT(numberClickedHandler()));
    connect(ui->N7, SIGNAL(clicked(bool)), this, SLOT(numberClickedHandler()));
    connect(ui->N8, SIGNAL(clicked(bool)), this, SLOT(numberClickedHandler()));
    connect(ui->N9, SIGNAL(clicked(bool)), this, SLOT(numberClickedHandler()));
    connect(ui->add, SIGNAL(clicked(bool)),this, SLOT(addSubMulDivClickHandler()));
    connect(ui->sub, SIGNAL(clicked(bool)),this, SLOT(addSubMulDivClickHandler()));
    connect(ui->mul, SIGNAL(clicked(bool)),this, SLOT(addSubMulDivClickHandler()));
    connect(ui->div, SIGNAL(clicked(bool)),this, SLOT(addSubMulDivClickHandler()));
    connect(ui->C1, SIGNAL(clicked(bool)),this, SLOT(clearClickhandler()));
    connect(ui->enter, SIGNAL(clicked(bool)),this, SLOT(resetLineEdits()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickedHandler()
{
    if(state == 0){
        clearClickhandler();
    }
    if(state == 1){
        QPushButton * button = qobject_cast<QPushButton*>(sender());
        QString name = ui->num1->text();
        name.append(button->text());
        ui->num1->setText(name);
        number1 = name;
    }
    if(state == 2){
        QPushButton * button = qobject_cast<QPushButton*>(sender());
        QString name2 = ui->num2->text();
        name2.append(button->text());
        ui->num2->setText(name2);
        number2 = name2;
    }
}
void MainWindow::clearClickhandler()
{
    number1.clear();
    number2.clear();
    result = 0;
    state = 1;
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();
}

void MainWindow::addSubMulDivClickHandler()
{
    QPushButton * button3 = qobject_cast<QPushButton*>(sender());
    QString choose = button3->objectName();
    operand = choose;
    state = 2;
}

void MainWindow::resetLineEdits(){
    float num1 = number1.toFloat();
    float num2 = number2.toFloat();

    if(operand == "add"){
        result = num1 + num2;
        qDebug()<<"+";
    }
    if(operand == "sub"){
        result = num1 - num2;
    }
    if(operand == "mul"){
        result = num1 * num2;
    }
    if(operand == "div"){
        result = num1 / num2;
    }
    state = 0;
    ui->result->setText(QString::number(result));
}


