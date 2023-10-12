
#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->progressBarPlayer1->setValue(100);
    ui->progressBarPlayer2->setValue(100);

    connect(ui->startGame, SIGNAL(clicked(bool)),
            this, SLOT(startGame()));
    connect(ui->stopGame, SIGNAL(clicked(bool)),
            this, SLOT(stopGame()));
    connect(ui->time120sec, SIGNAL(clicked(bool)),
            this, SLOT(time120sec()));
    connect(ui->time5min, SIGNAL(clicked(bool))
            ,this, SLOT(time5min()));
    connect(ui->swichPlayer2, SIGNAL(clicked(bool))
            , this, SLOT(swichPlayer1()));
    connect(ui->swichPlayer1, SIGNAL(clicked(bool))
            , this, SLOT(swichPlayer2()));

    p_QTimer = new QTimer(this);
    connect(p_QTimer, &QTimer::timeout, this, &MainWindow::progressBar1);
    p_QTimer2 = new QTimer(this);
    connect(p_QTimer2, &QTimer::timeout, this, &MainWindow::progressBar2);
    setGameInfoText("Select playtime and press start game!", 12);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timeOut()
{
    qDebug()<<"in timeOut";
}

void MainWindow::startGame()
{
    setGameInfoText("Game ongoing", 16);
    if(currentPlayer == 0){
        setGameInfoText("Choose time first!", 12);
    }
    else{
        swichPlayer1();
        qDebug()<<"in startGame";
    }
}

void MainWindow::stopGame()
{
    setGameInfoText("New game via start button", 13);
    p_QTimer->stop();
    p_QTimer2->stop();
    ui->progressBarPlayer1->setRange(0, 100 );
    ui->progressBarPlayer2->setRange(0, 100);
    ui->progressBarPlayer1->setValue(100);
    ui->progressBarPlayer2->setValue(100);
}

void MainWindow::time120sec()
{
    if(currentPlayer == 0){
        ui->progressBarPlayer1->setRange(0, 120 );
        ui->progressBarPlayer2->setRange(0, 120);
        ui->progressBarPlayer1->setValue(120);
        ui->progressBarPlayer2->setValue(120);
        currentPlayer = 1;
        setGameInfoText("ready to play", 14);
        qDebug()<<"in time120sec";
    }
}

void MainWindow::time5min()
{
    if(currentPlayer == 0){
        ui->progressBarPlayer1->setRange(0, 300 );
        ui->progressBarPlayer2->setRange(0, 300);
        ui->progressBarPlayer1->setValue(300);
        ui->progressBarPlayer2->setValue(300);
        currentPlayer = 1;
        setGameInfoText("ready to play", 14);
        qDebug()<<"in time5min";
    }
}

void MainWindow::swichPlayer2()
{
    p_QTimer2->start(1000);
    p_QTimer->stop();
    qDebug()<<"in swichPlayer2";
}

void MainWindow::swichPlayer1()
{
    p_QTimer->start(1000);
    p_QTimer2->stop();   
    qDebug()<<"in swichPlayer1";
}

void MainWindow::progressBar1()
{
    int currentValue = ui->progressBarPlayer1->value();
    if(currentValue == 0){
            currentPlayer = 1;
        setGameInfoText("Player 2 WON", 16);
            qDebug()<<"game over2";
    }
    else
            ui->progressBarPlayer1->setValue(currentValue-1);
    qDebug()<<"in ProgressBar1";
}

void MainWindow::progressBar2()
{
    int currentValue = ui->progressBarPlayer2->value();
    if(currentValue == 0){
            currentPlayer = 2;
            setGameInfoText("Player 1 WON", 16);
            qDebug()<<"game over1";
    }
    else
        ui->progressBarPlayer2->setValue(currentValue-1);
    qDebug()<<"in ProgressBar2";
}

void MainWindow::setGameInfoText(QString lause, short koko)
{
    font.setFamily("Arial");
    font.setPointSize(koko);
    font.setBold(true);
    font.setItalic(false);
    ui->label->setFont(font);
    ui->label->setText(lause);
    qDebug()<<"in setGameInfoText";
}


