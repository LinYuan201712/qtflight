/********************************************************************************
** Form generated from reading UI file 'flightsinfodialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLIGHTSINFODIALOG_H
#define UI_FLIGHTSINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FlightsInfoDialog
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *lineE_flightID;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_sure;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_cancel;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_4;
    QGridLayout *gridLayout_4;
    QLabel *label_4;
    QDateTimeEdit *dateTimeE_arrivalTime;
    QSpacerItem *horizontalSpacer_7;
    QWidget *widget_7;
    QGridLayout *gridLayout_7;
    QLabel *label_2;
    QLineEdit *lineE_totalSeats;
    QWidget *widget_5;
    QGridLayout *gridLayout_5;
    QLabel *label_5;
    QDateTimeEdit *dateTimeE_departureTime;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_6;
    QGridLayout *gridLayout_6;
    QLabel *label_6;
    QLineEdit *lineE_departureCity;
    QWidget *widget_8;
    QGridLayout *gridLayout_8;
    QLabel *label_7;
    QLineEdit *lineE_availableSeats;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QLineEdit *lineE_arrivalCity;
    QLabel *label_3;
    QWidget *widget_9;
    QGridLayout *gridLayout_9;
    QLineEdit *lineE_price;
    QLabel *label_8;

    void setupUi(QDialog *FlightsInfoDialog)
    {
        if (FlightsInfoDialog->objectName().isEmpty())
            FlightsInfoDialog->setObjectName("FlightsInfoDialog");
        FlightsInfoDialog->resize(518, 453);
        gridLayout_2 = new QGridLayout(FlightsInfoDialog);
        gridLayout_2->setObjectName("gridLayout_2");
        widget = new QWidget(FlightsInfoDialog);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        lineE_flightID = new QLineEdit(widget);
        lineE_flightID->setObjectName("lineE_flightID");
        lineE_flightID->setMinimumSize(QSize(0, 28));

        gridLayout->addWidget(lineE_flightID, 0, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 2, 0, 1, 1);

        widget_2 = new QWidget(FlightsInfoDialog);
        widget_2->setObjectName("widget_2");
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btn_sure = new QPushButton(widget_2);
        btn_sure->setObjectName("btn_sure");

        horizontalLayout->addWidget(btn_sure);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_cancel = new QPushButton(widget_2);
        btn_cancel->setObjectName("btn_cancel");

        horizontalLayout->addWidget(btn_cancel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout_2->addWidget(widget_2, 8, 1, 1, 1);

        widget_4 = new QWidget(FlightsInfoDialog);
        widget_4->setObjectName("widget_4");
        gridLayout_4 = new QGridLayout(widget_4);
        gridLayout_4->setObjectName("gridLayout_4");
        label_4 = new QLabel(widget_4);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

        dateTimeE_arrivalTime = new QDateTimeEdit(widget_4);
        dateTimeE_arrivalTime->setObjectName("dateTimeE_arrivalTime");

        gridLayout_4->addWidget(dateTimeE_arrivalTime, 0, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_7, 0, 2, 1, 1);


        gridLayout_2->addWidget(widget_4, 4, 1, 1, 1);

        widget_7 = new QWidget(FlightsInfoDialog);
        widget_7->setObjectName("widget_7");
        gridLayout_7 = new QGridLayout(widget_7);
        gridLayout_7->setObjectName("gridLayout_7");
        label_2 = new QLabel(widget_7);
        label_2->setObjectName("label_2");

        gridLayout_7->addWidget(label_2, 0, 0, 1, 1);

        lineE_totalSeats = new QLineEdit(widget_7);
        lineE_totalSeats->setObjectName("lineE_totalSeats");

        gridLayout_7->addWidget(lineE_totalSeats, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget_7, 5, 1, 1, 1);

        widget_5 = new QWidget(FlightsInfoDialog);
        widget_5->setObjectName("widget_5");
        gridLayout_5 = new QGridLayout(widget_5);
        gridLayout_5->setObjectName("gridLayout_5");
        label_5 = new QLabel(widget_5);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_5, 0, 0, 1, 1);

        dateTimeE_departureTime = new QDateTimeEdit(widget_5);
        dateTimeE_departureTime->setObjectName("dateTimeE_departureTime");
        dateTimeE_departureTime->setMinimumSize(QSize(0, 0));

        gridLayout_5->addWidget(dateTimeE_departureTime, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_6, 0, 2, 1, 1);


        gridLayout_2->addWidget(widget_5, 3, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 2, 2, 1, 1);

        widget_6 = new QWidget(FlightsInfoDialog);
        widget_6->setObjectName("widget_6");
        gridLayout_6 = new QGridLayout(widget_6);
        gridLayout_6->setObjectName("gridLayout_6");
        label_6 = new QLabel(widget_6);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_6, 0, 0, 1, 1);

        lineE_departureCity = new QLineEdit(widget_6);
        lineE_departureCity->setObjectName("lineE_departureCity");
        lineE_departureCity->setMinimumSize(QSize(0, 28));

        gridLayout_6->addWidget(lineE_departureCity, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget_6, 1, 1, 1, 1);

        widget_8 = new QWidget(FlightsInfoDialog);
        widget_8->setObjectName("widget_8");
        gridLayout_8 = new QGridLayout(widget_8);
        gridLayout_8->setObjectName("gridLayout_8");
        label_7 = new QLabel(widget_8);
        label_7->setObjectName("label_7");

        gridLayout_8->addWidget(label_7, 0, 0, 1, 1);

        lineE_availableSeats = new QLineEdit(widget_8);
        lineE_availableSeats->setObjectName("lineE_availableSeats");

        gridLayout_8->addWidget(lineE_availableSeats, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget_8, 6, 1, 1, 1);

        widget_3 = new QWidget(FlightsInfoDialog);
        widget_3->setObjectName("widget_3");
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        lineE_arrivalCity = new QLineEdit(widget_3);
        lineE_arrivalCity->setObjectName("lineE_arrivalCity");
        lineE_arrivalCity->setMinimumSize(QSize(0, 28));

        gridLayout_3->addWidget(lineE_arrivalCity, 0, 1, 1, 1);

        label_3 = new QLabel(widget_3);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget_3, 2, 1, 1, 1);

        widget_9 = new QWidget(FlightsInfoDialog);
        widget_9->setObjectName("widget_9");
        gridLayout_9 = new QGridLayout(widget_9);
        gridLayout_9->setObjectName("gridLayout_9");
        lineE_price = new QLineEdit(widget_9);
        lineE_price->setObjectName("lineE_price");

        gridLayout_9->addWidget(lineE_price, 0, 1, 1, 1);

        label_8 = new QLabel(widget_9);
        label_8->setObjectName("label_8");

        gridLayout_9->addWidget(label_8, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget_9, 7, 1, 1, 1);


        retranslateUi(FlightsInfoDialog);

        QMetaObject::connectSlotsByName(FlightsInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *FlightsInfoDialog)
    {
        FlightsInfoDialog->setWindowTitle(QCoreApplication::translate("FlightsInfoDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("FlightsInfoDialog", "   \350\210\252\347\217\255\345\217\267\357\274\232", nullptr));
        btn_sure->setText(QCoreApplication::translate("FlightsInfoDialog", "\347\241\256\350\256\244", nullptr));
        btn_cancel->setText(QCoreApplication::translate("FlightsInfoDialog", "\345\217\226\346\266\210", nullptr));
        label_4->setText(QCoreApplication::translate("FlightsInfoDialog", "\346\212\265\350\276\276\346\227\266\351\227\264\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("FlightsInfoDialog", "   \346\200\273\345\272\247\344\275\215\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("FlightsInfoDialog", "\345\207\272\345\217\221\346\227\266\351\227\264\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("FlightsInfoDialog", "   \345\207\272\345\217\221\345\234\260\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("FlightsInfoDialog", "\345\217\257\347\224\250\345\272\247\344\275\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("FlightsInfoDialog", "   \347\233\256\347\232\204\345\234\260\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("FlightsInfoDialog", "      \347\245\250\344\273\267\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FlightsInfoDialog: public Ui_FlightsInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLIGHTSINFODIALOG_H
