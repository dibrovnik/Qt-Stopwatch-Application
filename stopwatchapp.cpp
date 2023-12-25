#include "stopwatchapp.h"
#include <QToolBar>
#include <QFont>

StopwatchApp::StopwatchApp(QWidget *parent) : QMainWindow(parent) {
    setupUI();
    resize(400, 200);
    setWindowTitle("Секундомер");
}

void StopwatchApp::startTimer() {
    elapsedTimer.restart();
    timer->start(1); // Запускаем таймер с интервалом 1 миллисекунда
}

void StopwatchApp::stopTimer() {
    timer->stop();
    updateLabel();
}

void StopwatchApp::initialize() {
    resetTimer();
}

void StopwatchApp::resetTimer() {
    elapsedTimer.invalidate();  // Сбрасываем QElapsedTimer
    elapsedTime = QTime(0, 0);
    updateLabel();
}

void StopwatchApp::updateTimer() {
//    elapsedTime = elapsedTime.addMSecs(1); // Увеличиваем время на 1 миллисекунду
//    updateLabel();
    if (!elapsedTimer.isValid()) {
        return;  // Если таймер не запущен, не обновляем время
    }

    elapsedTime = QTime(0, 0).addMSecs(elapsedTimer.elapsed());  // Обновляем время
    updateLabel();
}

void StopwatchApp::setupUI() {
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &StopwatchApp::updateTimer);

    QToolBar *toolBar = addToolBar("Actions");

    QAction *startAction = new QAction(tr("Старт"), this);
    connect(startAction, &QAction::triggered, this, &StopwatchApp::startTimer);
    toolBar->addAction(startAction);

    QAction *stopAction = new QAction(tr("Стоп"), this);
    connect(stopAction, &QAction::triggered, this, &StopwatchApp::stopTimer);
    toolBar->addAction(stopAction);

    QAction *resetAction = new QAction(tr("Сброс"), this);
    connect(resetAction, &QAction::triggered, this, &StopwatchApp::resetTimer);
    toolBar->addAction(resetAction);

    label = new QLabel(this);
    label->setText("00:00:00:000");
    label->setAlignment(Qt::AlignCenter);
    label->setFont(QFont("Arial", 24)); // Установка размера шрифта
    setCentralWidget(label);
}

void StopwatchApp::updateLabel() {
    label->setText(elapsedTime.toString("hh:mm:ss:zzz"));
}

