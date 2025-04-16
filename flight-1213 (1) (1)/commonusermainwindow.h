#ifndef COMMONUSERMAINWINDOW_H
#define COMMONUSERMAINWINDOW_H

#include <QMainWindow>


namespace Ui {
class CommonUserMainWindow;
}

class CommonUserMainWindow: public QMainWindow
{
    Q_OBJECT

public:
    explicit CommonUserMainWindow(QWidget *parent = nullptr);
    ~CommonUserMainWindow();

private:
    Ui::CommonUserMainWindow *ui;
};

#endif // USERMAINWINDOW_H
