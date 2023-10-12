
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QProgressBar>
#include <QFont>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void timeOut();
    short choosenPlayer{0};

public slots:
    void startGame();
    void stopGame();
    void time120sec();
    void time5min();
    void swichPlayer1();
    void swichPlayer2();
    void progressBar1();
    void progressBar2();

private:
    Ui::MainWindow *ui;
    short player1Time;
    short player2Time;
    short currentPlayer = 0;
    int gameTime;
    QTimer * p_QTimer;
    QTimer * p_QTimer2;
    QFont font;
    void setGameInfoText(QString, short);
};

#endif // MAINWINDOW_H
