#ifndef LOGIN_CORRECT_WINDOW_H
#define LOGIN_CORRECT_WINDOW_H

#include <QDialog>

namespace Ui {
class Login_correct_window;
}

class Login_correct_window : public QDialog
{
    Q_OBJECT

public:
    explicit Login_correct_window(QWidget *parent = nullptr);
    ~Login_correct_window();

private:
    Ui::Login_correct_window *ui;
};

#endif // LOGIN_CORRECT_WINDOW_H
