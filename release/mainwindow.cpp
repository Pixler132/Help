#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Main_Viewer->rootContext()->setContextProperty("position", position);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Left_clicked()
{
    if(position > 0)
    {
        position -= 200;
    }
    ui->Main_Viewer->rootContext()->setContextProperty("position", position );
    qDebug() << position;

}

void MainWindow::on_Right_clicked()
{
    if(position < 900)
        {
            position += 750;
        }
    qDebug() << position;

        ui->Main_Viewer->rootContext()->setContextProperty("position", position );


}
