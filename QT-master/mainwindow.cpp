#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMainWindow>
#include <QPushButton>
#include <iostream>
#include <QDebug>
#include <QPalette>
#include <QWidget>
#include <QPixmap>
#include <QUrl>
#include <QDesktopServices>
#include <QMessageBox>

void MainWindow::openDatabaseServer()
{
        QString name;
        QSqlDatabase db;


        if(!db.open())
        {
            QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
            db.setHostName("localhost");
            db.setPort(3306);
            db.setUserName("root");
            db.setPassword("mimilumka");
            db.setDatabaseName("QTUSERS"); // if you dont specify this it wont be able to query correctly unles you just want database names
            db.open();

            if(db.open())
            {
                qDebug() << "opened";

            }else
            {
                qDebug() << "closed";

            }
        }else
        {
            db.close();
            qDebug() << "database shut down";

        }


}


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    //tlacitko facebooku
    ui->PushButtton->setIcon(QIcon("/Users/macbookair/Documents/Projekty_programovanie/QT_APPS/Test/images/fb.jpg"));
    ui->PushButtton->setIconSize(QSize(41,31));

    //Yt tlacitko
    ui->YTbutton->setIcon(QIcon("/Users/macbookair/Documents/Projekty_programovanie/QT_APPS/Test/images/yt.png"));
    ui->YTbutton->setIconSize(QSize(41,31));


    //pozadie
    QPixmap pozadie("/Users/macbookair/Documents/Projekty_programovanie/QT_APPS/Test/images/plocha.jpg");
    pozadie = pozadie.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, pozadie);
    this->setPalette(palette);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_PushButtton_clicked()
{
    if (true) {
        QString link = "http://www.facebook.com";
        QDesktopServices::openUrl(link);
    };

    while(!true) {
    qDebug() <<"Nepodarilo sa nam premiestnit na facebook";
    };
}

void MainWindow::on_YTbutton_clicked()
{
    if (true) {
        QString link = "http://www.youtube.com";
        QDesktopServices::openUrl(link);
    }

     while(!true) {
    qDebug() <<"Nepodarilo sa nam premiestnit na Youtube";
    };
}



void MainWindow::on_pushButton_login_clicked()
{

//    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
//    db.setHostName("127.0.0.1");
//    db.setUserName("root");
//    db.setPassword("aaaaa");
//    db.setDatabaseName("QTUSERS");
//    db.setPort(3306);

//    db.open();

//    if(db.open()) {
//        QMessageBox::information(this,"Connection", "Database connectet");
//    } else {
//        QMessageBox::information(this,"Connection", "Database not found");
//    }

openDatabaseServer();



}

