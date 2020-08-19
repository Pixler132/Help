#include "login_correct_window.h"
#include "ui_login_correct_window.h"

Login_correct_window::Login_correct_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login_correct_window)
{
    ui->setupUi(this);
}

Login_correct_window::~Login_correct_window()
{
    delete ui;
}
