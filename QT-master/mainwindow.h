#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <iostream>
#include <QDebug>
#include <QPalette>
#include <QWidget>
#include <QPixmap>
#include <QUrl>
#include <QDesktopServices>
#include <QSql>
#include <QSqlDatabase>


#include "login_correct_window.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_PushButtton_clicked();

    void on_YTbutton_clicked();


    void on_pushButton_login_clicked();

private:
    Ui::MainWindow *ui;
    Login_correct_window *login_correct_window;
    void openDatabaseServer();
};
#endif // MAINWINDOW_H
