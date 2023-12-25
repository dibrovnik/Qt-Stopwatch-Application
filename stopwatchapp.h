#ifndef STOPWATCHAPP_H
#define STOPWATCHAPP_H

#include <QMainWindow>
#include <QMenu>
#include <QAction>
#include <QLabel>
#include <QTimer>
#include <QTime>
#include <QWidget>
#include <QMenuBar>
#include <QToolBar>
#include <QElapsedTimer>

class StopwatchApp : public QMainWindow {
    Q_OBJECT

public:
    StopwatchApp(QWidget *parent = nullptr);
    void initialize();

private slots:
    void startTimer();
    void stopTimer();

    void resetTimer();
    void updateTimer();
    void updateLabel();

private:
    void setupUI();

    QElapsedTimer elapsedTimer;  // Используем QElapsedTimer
    QTimer *timer;
    QTime elapsedTime;
    QLabel *label;
};

#endif // STOPWATCHAPP_H
