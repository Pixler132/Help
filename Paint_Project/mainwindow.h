#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>

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
    void on_Line_R_toggled(bool checked);
    void mouseMoveEvent(QMouseEvent *e);
    void on_Circle_R_toggled(bool checked);

    void on_Rectangle_R_toggled(bool checked);

    void on_Triangle_R_toggled(bool checked);
    void mouseReleaseEvent(QMouseEvent* event);

    void on_draw_clicked(bool checked);

    QVector<int> linePointFinder(int x1,int y1, int x2, int y2);

private:
    Ui::MainWindow *ui;
    int checker = 0;

    int Main_Box_Width;
    int Main_Box_Height;

    bool Main_Box_Hover;
    bool line = false;
    bool triangle = false;
    bool circle = false;
    bool rectangle = false;
    bool draw = false;

    QPixmap pix;
    QImage imageObject;
    QImage picture;
    QColor ex = "#000000";
    QVector<int> init_cord;
    QVector<int> end_cord;
    QVector<int> cordinates;
};
#endif // MAINWINDOW_H
