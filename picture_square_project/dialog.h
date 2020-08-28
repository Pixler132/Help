#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPixmap>
#include <QInputEvent>
#include <QMouseEvent>
#include <QPoint>
#include <QDebug>
#include <QRect>
#include <QColor>
#include <QVector>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:


    void on_colorOne_toggled(bool checked);

    void on_colorTwo_toggled(bool checked);

    void on_pictureButton_toggled(bool checked);

    void Dialog::mouseMoveEvent(QMouseEvent* event);

private:
    Ui::Dialog *ui;
    int counter = 0;
    QVector<QPixmap> Mapper;

};
#endif // DIALOG_H
