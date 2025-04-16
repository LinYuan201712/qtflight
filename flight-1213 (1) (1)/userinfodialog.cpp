#include "userinfodialog.h"
#include "ui_UserInfoDialog.h"

#include <QFile>
#include <QTextStream>

UserInfoDialog::UserInfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserInfoDialog)
{
    ui->setupUi(this);


}

UserInfoDialog::~UserInfoDialog()
{
    delete ui;
}

