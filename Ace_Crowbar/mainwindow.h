#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMainWindow>
#include <QTextBrowser>
#include <QString>
#include <QVector>
#include <QWidget>
#include <QQuickView>
#include <QObject>
#include <QQuickItem>
#include <QQmlEngine>
#include <QGuiApplication>
#include <QQmlContext>
#include <QQmlComponent>
#include <QStringListModel>
#include <QFileDialog>
#include <QMessageBox>
#include <QThread>
#include <QQmlApplicationEngine>
#include <QQmlContext>
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
    void on_Left_clicked();

    void on_Right_clicked();

private:
    Ui::MainWindow *ui;
    QString Main_Text;
    double position = 400;

};
#endif // MAINWINDOW_H
