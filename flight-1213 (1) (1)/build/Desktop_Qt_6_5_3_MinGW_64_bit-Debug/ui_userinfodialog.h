/********************************************************************************
** Form generated from reading UI file 'userinfodialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINFODIALOG_H
#define UI_USERINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserInfoDialog
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget_6;
    QGridLayout *gridLayout_6;
    QLabel *label_6;
    QLineEdit *lineE_password;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QLineEdit *lineE_name;
    QLabel *label_3;
    QWidget *widget_5;
    QGridLayout *gridLayout_5;
    QLabel *label_5;
    QLineEdit *lineE_phone;
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
    QLineEdit *lineE_email;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QDialog *UserInfoDialog)
    {
        if (UserInfoDialog->objectName().isEmpty())
            UserInfoDialog->setObjectName("UserInfoDialog");
        UserInfoDialog->resize(437, 386);
        gridLayout_2 = new QGridLayout(UserInfoDialog);
        gridLayout_2->setObjectName("gridLayout_2");
        widget_6 = new QWidget(UserInfoDialog);
        widget_6->setObjectName("widget_6");
        gridLayout_6 = new QGridLayout(widget_6);
        gridLayout_6->setObjectName("gridLayout_6");
        label_6 = new QLabel(widget_6);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_6, 0, 0, 1, 1);

        lineE_password = new QLineEdit(widget_6);
        lineE_password->setObjectName("lineE_password");
        lineE_password->setMinimumSize(QSize(0, 28));

        gridLayout_6->addWidget(lineE_password, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget_6, 0, 1, 1, 1);

        widget_3 = new QWidget(UserInfoDialog);
        widget_3->setObjectName("widget_3");
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        lineE_name = new QLineEdit(widget_3);
        lineE_name->setObjectName("lineE_name");
        lineE_name->setMinimumSize(QSize(0, 28));

        gridLayout_3->addWidget(lineE_name, 0, 1, 1, 1);

        label_3 = new QLabel(widget_3);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget_3, 1, 1, 1, 1);

        widget_5 = new QWidget(UserInfoDialog);
        widget_5->setObjectName("widget_5");
        gridLayout_5 = new QGridLayout(widget_5);
        gridLayout_5->setObjectName("gridLayout_5");
        label_5 = new QLabel(widget_5);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_5, 0, 0, 1, 1);

        lineE_phone = new QLineEdit(widget_5);
        lineE_phone->setObjectName("lineE_phone");
        lineE_phone->setMinimumSize(QSize(0, 28));

        gridLayout_5->addWidget(lineE_phone, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget_5, 2, 1, 1, 1);

        widget_2 = new QWidget(UserInfoDialog);
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


        gridLayout_2->addWidget(widget_2, 4, 1, 1, 1);

        widget_4 = new QWidget(UserInfoDialog);
        widget_4->setObjectName("widget_4");
        gridLayout_4 = new QGridLayout(widget_4);
        gridLayout_4->setObjectName("gridLayout_4");
        label_4 = new QLabel(widget_4);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

        lineE_email = new QLineEdit(widget_4);
        lineE_email->setObjectName("lineE_email");
        lineE_email->setMinimumSize(QSize(0, 28));

        gridLayout_4->addWidget(lineE_email, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget_4, 3, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 1, 0, 1, 1);


        retranslateUi(UserInfoDialog);

        QMetaObject::connectSlotsByName(UserInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *UserInfoDialog)
    {
        UserInfoDialog->setWindowTitle(QCoreApplication::translate("UserInfoDialog", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("UserInfoDialog", "\345\257\206   \347\240\201\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("UserInfoDialog", "\345\247\223   \345\220\215\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("UserInfoDialog", "\347\224\265   \350\257\235\357\274\232", nullptr));
        btn_sure->setText(QCoreApplication::translate("UserInfoDialog", "\347\241\256\350\256\244", nullptr));
        btn_cancel->setText(QCoreApplication::translate("UserInfoDialog", "\345\217\226\346\266\210", nullptr));
        label_4->setText(QCoreApplication::translate("UserInfoDialog", "\351\202\256   \347\256\261\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserInfoDialog: public Ui_UserInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINFODIALOG_H
