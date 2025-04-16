#include "commonusermainwindow.h"
#include "ui_commonusermainwindow.h"



CommonUserMainWindow::CommonUserMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CommonUserMainWindow)
{
    ui->setupUi(this);
}

CommonUserMainWindow::~CommonUserMainWindow()
{
    delete ui;
}
