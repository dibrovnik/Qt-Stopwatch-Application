#include <QApplication>
#include "stopwatchapp.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    StopwatchApp stopwatchApp;
    stopwatchApp.show();
    stopwatchApp.initialize();


    return a.exec();
}
