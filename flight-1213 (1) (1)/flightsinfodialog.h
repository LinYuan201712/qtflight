#ifndef FLIGHTSINFODIALOG_H
#define FLIGHTSINFODIALOG_H

#include <QDialog>

namespace Ui {
class FlightsInfoDialog;
}

class FlightsInfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FlightsInfoDialog(QWidget *parent = nullptr);
    ~FlightsInfoDialog();



private:
    Ui::FlightsInfoDialog *ui;


};

#endif // FLIGHTSINFODIALOG_H
