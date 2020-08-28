#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->stackedWidget->setCurrentIndex(0);
    ui->colorTab->setStyleSheet("background-color: black");

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_colorOne_toggled(bool checked)
{
     ui->stackedWidget->setCurrentIndex(0);
     ui->colorTab->setStyleSheet("background-color: black");

}

void Dialog::on_colorTwo_toggled(bool checked)
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->colorTab->setStyleSheet("background-color: grey");

}

void Dialog::on_pictureButton_toggled(bool checked)
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->pictureTab->setStyleSheet("border-image: url(:/images/doggo.png) 0 0 0 0 stretch stretch");
    QPixmap image(":/images/Black.png");
       ui->pictureTab->setPixmap(image.scaled(400,400));
       ui->pictureTab->setAlignment(Qt::AlignCenter);
}

void Dialog::mouseMoveEvent(QMouseEvent* event) {

    if (ui->pictureTab->underMouse())
    {
    QPixmap pixmap;
    Mapper += pixmap;
    Mapper[counter] = QPixmap(this->ui->pictureTab->size());
    QString color_adder = QString::number(counter);

    QColor color = ("#fffff" + color_adder);
    Mapper[counter].fill(color);
    int xPos = event->pos().x();
    int yPos = event->pos().y();
    ui->pictureTab->setPixmap(Mapper[counter].scaled(xPos,yPos));
    ui->pictureTab->setAlignment(Qt::AlignCenter);
    qDebug() << Mapper[counter] << " Counter: " << counter;
    counter++;

//    qDebug() << QString::number(event->pos().x()) << " x Pos";
//    qDebug() << QString::number(event->pos().y()) << " y Pos";
    }
}
