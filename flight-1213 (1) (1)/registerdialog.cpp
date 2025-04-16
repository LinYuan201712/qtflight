#include "registerdialog.h"
#include "ui_registerdialog.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

registerDialog::registerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registerDialog)
{
    ui->setupUi(this);
    //加载qss文件


}

registerDialog::~registerDialog()
{
    delete ui;
}


