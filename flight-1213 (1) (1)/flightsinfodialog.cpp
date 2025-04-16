#include "flightsinfodialog.h"
#include "ui_flightsinfodialog.h"

#include <QFile>
#include <QTextStream>

FlightsInfoDialog::FlightsInfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FlightsInfoDialog)
{
    ui->setupUi(this);


}

FlightsInfoDialog::~FlightsInfoDialog()
{
    delete ui;
}



