#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    int Main_Box_Width = ui->Main_Box->width();
    int Main_Box_Height = ui->Main_Box->height();

    ui->Main_Box->setAttribute(Qt::WA_Hover);
    ui->Main_Box->setMouseTracking(true);
    imageObject.load(":/gradient.jpeg");
    pix.load(":/gradient.jpeg");
    ui->Main_Box->setPixmap(QPixmap::fromImage(imageObject));
    ui->Main_Box->setScaledContents(true);
    ui->Main_Box->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );




}


QVector<int> MainWindow::linePointFinder(int x1,int y1, int x2, int y2){
/*function line(x0, y0, x1, y1)
    real deltax := x1 - x0
    real deltay := y1 - y0
    real deltaerr := abs(deltay / deltax)    // Assume deltax != 0 (line is not vertical),
          // note that this division needs to be done in a way that preserves the fractional part
    real error := 0.0 // No error at start
    int y := y0
    for x from x0 to x1
        plot(x, y)
        error := error + deltaerr
        if error ≥ 0.5 then
            y := y + sign(deltay)
            error := error - 1.0
            */

    /*
     * D=2*3-6=0
     * delta y = y2-y1 = 3
     * delts x = x2-x1 = 6
     * (0,1) to (6,4)
Loop from 0 to 6
 * x=0: plot(0,1), D≤0: D=0+6=6
 * x=1: plot(1,1), D>0: D=6-12=-6, y=1+1=2, D=-6+6=0
 * x=2: plot(2,2), D≤0: D=0+6=6
 * x=3: plot(3,2), D>0: D=6-12=-6, y=2+1=3, D=-6+6=0
 * x=4: plot(4,3), D≤0: D=0+6=6
 * x=5: plot(5,3), D>0: D=6-12=-6, y=3+1=4, D=-6+6=0
 * x=6: plot(6,4), D≤0: D=0+6=6
*/

    QVector<int> finalResults;

    int N_x = x2 - x1;
    int N_y = y2 - y1;

    int N_abs = abs(N_y/N_x);
    for( int i = (x2 > x1 ? x1 : x2) ; (x2 > x1 ? x2 : x1); i++){


    }
    return finalResults;
   }





MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Line_R_toggled(bool checked)
{
    if(checked){
    line = true;
    circle = false;rectangle = false;triangle = false;draw = false;
    }


}

void MainWindow::on_Circle_R_toggled(bool checked)
{
    if(checked){
    circle = true;
    line = false;rectangle = false;triangle = false;draw = false;
    }

}

void MainWindow::on_Rectangle_R_toggled(bool checked)
{
    if(checked){
    rectangle = true;
    circle = false;line = false;triangle = false;draw = false;
    }

}

void MainWindow::on_Triangle_R_toggled(bool checked)
{
    if(checked){
    triangle = true;
    circle = false;rectangle = false;line = false;draw = false;
    }

}
void MainWindow::on_draw_clicked(bool checked)
{
    if(checked){
    draw = true;
    circle = false;rectangle = false;line = false; triangle = false;
    }

}

void MainWindow::mouseMoveEvent(QMouseEvent *e){

//ui->Main_Box->setPixmap(QPixmap::fromImage(imageObject));
//   imageObject.setPixelColor(x value, y value ,ex);
init_cord.clear();

if(ui->Main_Box->underMouse()){
    if(line){
        if(e->buttons() == Qt::LeftButton){
          int temp1 = QCursor::pos().x();
          int temp2 = QCursor::pos().y();
          cordinates += temp1;
          cordinates += temp2;
          init_cord += cordinates[0];
          init_cord += cordinates[1];
        }
    }
    else if(circle){
        qDebug() << "circle!";


    }
    else if(triangle){
        qDebug() << "triangle!";

    }
    else if(rectangle){
        qDebug() << "rectangle!";

    }
    else if(draw)
    {

        if(e->buttons() == Qt::LeftButton)
        {

        int x = e->pos().x();
        int y = e->pos().y();
        x -= 100;
        y -= 100;
        imageObject.setPixelColor(x,y,ex);
        ui->Main_Box->setPixmap(QPixmap::fromImage(imageObject));

        }
    }


}
}

void MainWindow::mouseReleaseEvent(QMouseEvent* event){
    cordinates.clear();
    end_cord.clear();
    if(line){
    int temp1 = QCursor::pos().x();
    int temp2 = QCursor::pos().y();
    end_cord += temp1;
    end_cord += temp2;

    /*
     * init_cord[0]  = x1
     * end_cord[0] = x2;
     *
     * init_cord[1] = y1
     * end_cord[1] = y2

*/

    if(init_cord[0] > end_cord[0] && init_cord[1] > end_cord[1])
    {

    int tempX = init_cord[0] - end_cord[0];
    int tempY = init_cord[1] - end_cord[1];
    bool x_larger;
    if(tempX > tempY){
        x_larger = true;
    }

    linePointFinder(init_cord[0],init_cord[1],end_cord[0],end_cord[1]);

    //imageObject.setPixelColor(x,y,ex);
    qDebug() << init_cord;
    qDebug() << end_cord;

    }



}


