#include "mainwindow.h"

#include <QtWidgets>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow w;
    w.setWindowTitle("Test Cuno");
    w.show();


    return app.exec();
}



