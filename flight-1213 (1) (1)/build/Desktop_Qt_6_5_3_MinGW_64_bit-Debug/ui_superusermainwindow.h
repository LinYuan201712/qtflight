/********************************************************************************
** Form generated from reading UI file 'superusermainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPERUSERMAINWINDOW_H
#define UI_SUPERUSERMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SuperUserMainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QTreeWidget *treeWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_add_flight;
    QPushButton *btn_modify_flight;
    QPushButton *btn_delete_flight;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineE_flightID;
    QPushButton *btn_search_flight;
    QTableView *tableView;
    QWidget *page_4;
    QGridLayout *gridLayout_7;
    QTableView *tableView_4;
    QWidget *page_3;
    QGridLayout *gridLayout_6;
    QTableView *tableView_3;
    QWidget *page_5;
    QGridLayout *gridLayout_9;
    QFrame *frame;
    QGridLayout *gridLayout_13;
    QFrame *frame_user;
    QGridLayout *gridLayout_16;
    QLabel *label_welcome;
    QLabel *label_user_pic;
    QFrame *frame_message;
    QGridLayout *gridLayout_12;
    QFrame *frame_5;
    QGridLayout *gridLayout_15;
    QLabel *label_text;
    QWidget *widget_6;
    QGridLayout *gridLayout_11;
    QWidget *widget_7;
    QGridLayout *gridLayout_14;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;
    QPushButton *btn_change;
    QWidget *widget_9;
    QGridLayout *gridLayout_18;
    QSpacerItem *horizontalSpacer_8;
    QFrame *frame_message_2;
    QVBoxLayout *verticalLayout;
    QFrame *frame_username;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QLabel *label_username;
    QFrame *frame_password;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QLabel *label_password;
    QFrame *frame_name;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_5;
    QLabel *label_name;
    QFrame *frame_phone;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_7;
    QLabel *label_phone;
    QFrame *frame_email;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_9;
    QLabel *label_email;
    QSpacerItem *horizontalSpacer_11;
    QWidget *page_2;
    QGridLayout *gridLayout_5;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_add_user;
    QPushButton *btn_modify_user;
    QPushButton *btn_delete_user;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineE_username;
    QPushButton *btn_search_user;
    QTableView *tableView_2;
    QFrame *frame_title;
    QGridLayout *gridLayout;
    QLabel *label_title;
    QSpacerItem *horizontalSpacer_12;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_min;
    QPushButton *btn_close;

    void setupUi(QMainWindow *SuperUserMainWindow)
    {
        if (SuperUserMainWindow->objectName().isEmpty())
            SuperUserMainWindow->setObjectName("SuperUserMainWindow");
        SuperUserMainWindow->resize(800, 600);
        centralwidget = new QWidget(SuperUserMainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 9, 0);
        treeWidget = new QTreeWidget(widget_2);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName("treeWidget");
        treeWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);\n"
"\n"
""));

        gridLayout_2->addWidget(treeWidget, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(widget_2);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        gridLayout_4 = new QGridLayout(page);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(page);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_add_flight = new QPushButton(widget);
        btn_add_flight->setObjectName("btn_add_flight");
        btn_add_flight->setMinimumSize(QSize(0, 32));
        btn_add_flight->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(btn_add_flight);

        btn_modify_flight = new QPushButton(widget);
        btn_modify_flight->setObjectName("btn_modify_flight");
        btn_modify_flight->setMinimumSize(QSize(0, 32));
        btn_modify_flight->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(btn_modify_flight);

        btn_delete_flight = new QPushButton(widget);
        btn_delete_flight->setObjectName("btn_delete_flight");
        btn_delete_flight->setMinimumSize(QSize(0, 32));
        btn_delete_flight->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(btn_delete_flight);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        lineE_flightID = new QLineEdit(widget);
        lineE_flightID->setObjectName("lineE_flightID");
        lineE_flightID->setMinimumSize(QSize(0, 0));
        lineE_flightID->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(lineE_flightID);

        btn_search_flight = new QPushButton(widget);
        btn_search_flight->setObjectName("btn_search_flight");
        btn_search_flight->setMinimumSize(QSize(0, 32));
        btn_search_flight->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(btn_search_flight);


        gridLayout_4->addWidget(widget, 0, 0, 1, 1);

        tableView = new QTableView(page);
        tableView->setObjectName("tableView");

        gridLayout_4->addWidget(tableView, 1, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        gridLayout_7 = new QGridLayout(page_4);
        gridLayout_7->setObjectName("gridLayout_7");
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        tableView_4 = new QTableView(page_4);
        tableView_4->setObjectName("tableView_4");

        gridLayout_7->addWidget(tableView_4, 0, 0, 1, 1);

        stackedWidget->addWidget(page_4);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        gridLayout_6 = new QGridLayout(page_3);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        tableView_3 = new QTableView(page_3);
        tableView_3->setObjectName("tableView_3");

        gridLayout_6->addWidget(tableView_3, 0, 0, 1, 1);

        stackedWidget->addWidget(page_3);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        gridLayout_9 = new QGridLayout(page_5);
        gridLayout_9->setObjectName("gridLayout_9");
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(page_5);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_13 = new QGridLayout(frame);
        gridLayout_13->setObjectName("gridLayout_13");
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        frame_user = new QFrame(frame);
        frame_user->setObjectName("frame_user");
        frame_user->setFrameShape(QFrame::StyledPanel);
        frame_user->setFrameShadow(QFrame::Raised);
        gridLayout_16 = new QGridLayout(frame_user);
        gridLayout_16->setObjectName("gridLayout_16");
        gridLayout_16->setContentsMargins(9, 0, 0, 0);
        label_welcome = new QLabel(frame_user);
        label_welcome->setObjectName("label_welcome");
        label_welcome->setMinimumSize(QSize(0, 0));

        gridLayout_16->addWidget(label_welcome, 0, 1, 1, 1);

        label_user_pic = new QLabel(frame_user);
        label_user_pic->setObjectName("label_user_pic");
        label_user_pic->setMinimumSize(QSize(50, 50));
        label_user_pic->setMaximumSize(QSize(50, 50));
        label_user_pic->setScaledContents(true);

        gridLayout_16->addWidget(label_user_pic, 0, 0, 1, 1);

        gridLayout_16->setColumnStretch(0, 1);
        gridLayout_16->setColumnStretch(1, 1);

        gridLayout_13->addWidget(frame_user, 0, 0, 1, 1);

        frame_message = new QFrame(frame);
        frame_message->setObjectName("frame_message");
        frame_message->setFrameShape(QFrame::StyledPanel);
        frame_message->setFrameShadow(QFrame::Raised);
        gridLayout_12 = new QGridLayout(frame_message);
        gridLayout_12->setObjectName("gridLayout_12");
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        frame_5 = new QFrame(frame_message);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        gridLayout_15 = new QGridLayout(frame_5);
        gridLayout_15->setObjectName("gridLayout_15");
        gridLayout_15->setContentsMargins(9, 0, 0, 0);
        label_text = new QLabel(frame_5);
        label_text->setObjectName("label_text");

        gridLayout_15->addWidget(label_text, 0, 0, 1, 1);


        gridLayout_12->addWidget(frame_5, 0, 0, 1, 1);

        widget_6 = new QWidget(frame_message);
        widget_6->setObjectName("widget_6");
        gridLayout_11 = new QGridLayout(widget_6);
        gridLayout_11->setObjectName("gridLayout_11");
        widget_7 = new QWidget(widget_6);
        widget_7->setObjectName("widget_7");
        gridLayout_14 = new QGridLayout(widget_7);
        gridLayout_14->setObjectName("gridLayout_14");
        gridLayout_14->setHorizontalSpacing(9);
        gridLayout_14->setVerticalSpacing(0);
        gridLayout_14->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_7, 0, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_6, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_14->addItem(verticalSpacer, 1, 1, 1, 1);

        btn_change = new QPushButton(widget_7);
        btn_change->setObjectName("btn_change");
        btn_change->setMinimumSize(QSize(120, 35));

        gridLayout_14->addWidget(btn_change, 0, 1, 1, 1);

        gridLayout_14->setRowStretch(0, 3);

        gridLayout_11->addWidget(widget_7, 1, 0, 1, 1);

        widget_9 = new QWidget(widget_6);
        widget_9->setObjectName("widget_9");
        gridLayout_18 = new QGridLayout(widget_9);
        gridLayout_18->setObjectName("gridLayout_18");
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_18->addItem(horizontalSpacer_8, 0, 0, 1, 1);

        frame_message_2 = new QFrame(widget_9);
        frame_message_2->setObjectName("frame_message_2");
        frame_message_2->setFrameShape(QFrame::StyledPanel);
        frame_message_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_message_2);
        verticalLayout->setObjectName("verticalLayout");
        frame_username = new QFrame(frame_message_2);
        frame_username->setObjectName("frame_username");
        frame_username->setStyleSheet(QString::fromUtf8(""));
        frame_username->setFrameShape(QFrame::StyledPanel);
        frame_username->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_username);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label = new QLabel(frame_username);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label);

        label_username = new QLabel(frame_username);
        label_username->setObjectName("label_username");
        label_username->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));
        label_username->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_username);


        verticalLayout->addWidget(frame_username);

        frame_password = new QFrame(frame_message_2);
        frame_password->setObjectName("frame_password");
        frame_password->setStyleSheet(QString::fromUtf8(""));
        frame_password->setFrameShape(QFrame::StyledPanel);
        frame_password->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(frame_password);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_3 = new QLabel(frame_password);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_3);

        label_password = new QLabel(frame_password);
        label_password->setObjectName("label_password");
        label_password->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_password);


        verticalLayout->addWidget(frame_password);

        frame_name = new QFrame(frame_message_2);
        frame_name->setObjectName("frame_name");
        frame_name->setFrameShape(QFrame::StyledPanel);
        frame_name->setFrameShadow(QFrame::Raised);
        horizontalLayout_9 = new QHBoxLayout(frame_name);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_5 = new QLabel(frame_name);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_5);

        label_name = new QLabel(frame_name);
        label_name->setObjectName("label_name");
        label_name->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_name);


        verticalLayout->addWidget(frame_name);

        frame_phone = new QFrame(frame_message_2);
        frame_phone->setObjectName("frame_phone");
        frame_phone->setFrameShape(QFrame::StyledPanel);
        frame_phone->setFrameShadow(QFrame::Raised);
        horizontalLayout_10 = new QHBoxLayout(frame_phone);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_7 = new QLabel(frame_phone);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(label_7);

        label_phone = new QLabel(frame_phone);
        label_phone->setObjectName("label_phone");
        label_phone->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(label_phone);


        verticalLayout->addWidget(frame_phone);

        frame_email = new QFrame(frame_message_2);
        frame_email->setObjectName("frame_email");
        frame_email->setFrameShape(QFrame::StyledPanel);
        frame_email->setFrameShadow(QFrame::Raised);
        horizontalLayout_11 = new QHBoxLayout(frame_email);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_9 = new QLabel(frame_email);
        label_9->setObjectName("label_9");
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(label_9);

        label_email = new QLabel(frame_email);
        label_email->setObjectName("label_email");
        label_email->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(label_email);


        verticalLayout->addWidget(frame_email);


        gridLayout_18->addWidget(frame_message_2, 0, 1, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_18->addItem(horizontalSpacer_11, 0, 2, 1, 1);


        gridLayout_11->addWidget(widget_9, 0, 0, 1, 1);


        gridLayout_12->addWidget(widget_6, 1, 0, 1, 1);

        gridLayout_12->setRowStretch(0, 1);
        gridLayout_12->setRowStretch(1, 8);

        gridLayout_13->addWidget(frame_message, 1, 0, 1, 1);

        gridLayout_13->setRowStretch(0, 1);
        gridLayout_13->setRowStretch(1, 6);

        gridLayout_9->addWidget(frame, 0, 0, 1, 1);

        stackedWidget->addWidget(page_5);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        gridLayout_5 = new QGridLayout(page_2);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(page_2);
        widget_3->setObjectName("widget_3");
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        btn_add_user = new QPushButton(widget_3);
        btn_add_user->setObjectName("btn_add_user");
        btn_add_user->setMinimumSize(QSize(0, 32));
        btn_add_user->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(btn_add_user);

        btn_modify_user = new QPushButton(widget_3);
        btn_modify_user->setObjectName("btn_modify_user");
        btn_modify_user->setMinimumSize(QSize(0, 32));
        btn_modify_user->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(btn_modify_user);

        btn_delete_user = new QPushButton(widget_3);
        btn_delete_user->setObjectName("btn_delete_user");
        btn_delete_user->setMinimumSize(QSize(0, 32));
        btn_delete_user->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(btn_delete_user);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        lineE_username = new QLineEdit(widget_3);
        lineE_username->setObjectName("lineE_username");
        lineE_username->setMinimumSize(QSize(0, 0));
        lineE_username->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(lineE_username);

        btn_search_user = new QPushButton(widget_3);
        btn_search_user->setObjectName("btn_search_user");
        btn_search_user->setMinimumSize(QSize(0, 32));
        btn_search_user->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(btn_search_user);


        gridLayout_5->addWidget(widget_3, 0, 0, 1, 1);

        tableView_2 = new QTableView(page_2);
        tableView_2->setObjectName("tableView_2");

        gridLayout_5->addWidget(tableView_2, 1, 0, 1, 1);

        stackedWidget->addWidget(page_2);

        gridLayout_2->addWidget(stackedWidget, 0, 1, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 5);

        gridLayout_3->addWidget(widget_2, 1, 0, 1, 1);

        frame_title = new QFrame(centralwidget);
        frame_title->setObjectName("frame_title");
        frame_title->setMinimumSize(QSize(0, 70));
        frame_title->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);"));
        gridLayout = new QGridLayout(frame_title);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 9, 0);
        label_title = new QLabel(frame_title);
        label_title->setObjectName("label_title");
        label_title->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(label_title, 0, 1, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_12, 0, 0, 1, 1);

        frame_2 = new QFrame(frame_title);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btn_min = new QPushButton(frame_2);
        btn_min->setObjectName("btn_min");
        btn_min->setMinimumSize(QSize(0, 30));
        btn_min->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_2->addWidget(btn_min);

        btn_close = new QPushButton(frame_2);
        btn_close->setObjectName("btn_close");
        btn_close->setMinimumSize(QSize(0, 30));
        btn_close->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_2->addWidget(btn_close);


        gridLayout->addWidget(frame_2, 0, 2, 1, 1);

        gridLayout->setColumnStretch(0, 1);

        gridLayout_3->addWidget(frame_title, 0, 0, 1, 1);

        SuperUserMainWindow->setCentralWidget(centralwidget);

        retranslateUi(SuperUserMainWindow);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(SuperUserMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SuperUserMainWindow)
    {
        SuperUserMainWindow->setWindowTitle(QCoreApplication::translate("SuperUserMainWindow", "MainWindow", nullptr));
        btn_add_flight->setText(QCoreApplication::translate("SuperUserMainWindow", "\345\242\236\345\212\240", nullptr));
        btn_modify_flight->setText(QCoreApplication::translate("SuperUserMainWindow", "\344\277\256\346\224\271", nullptr));
        btn_delete_flight->setText(QCoreApplication::translate("SuperUserMainWindow", "\345\210\240\351\231\244", nullptr));
        lineE_flightID->setPlaceholderText(QCoreApplication::translate("SuperUserMainWindow", "\350\257\267\350\276\223\345\205\245\350\210\252\347\217\255\345\217\267", nullptr));
        btn_search_flight->setText(QCoreApplication::translate("SuperUserMainWindow", "\346\220\234\347\264\242", nullptr));
        label_welcome->setText(QCoreApplication::translate("SuperUserMainWindow", "root\357\274\214\346\254\242\350\277\216\345\233\236\346\235\245\357\274\201", nullptr));
        label_user_pic->setText(QString());
        label_text->setText(QCoreApplication::translate("SuperUserMainWindow", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        btn_change->setText(QCoreApplication::translate("SuperUserMainWindow", "\344\277\256\346\224\271\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("SuperUserMainWindow", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_username->setText(QCoreApplication::translate("SuperUserMainWindow", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("SuperUserMainWindow", "\345\257\206   \347\240\201", nullptr));
        label_password->setText(QCoreApplication::translate("SuperUserMainWindow", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("SuperUserMainWindow", "\345\247\223   \345\220\215", nullptr));
        label_name->setText(QCoreApplication::translate("SuperUserMainWindow", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("SuperUserMainWindow", "\347\224\265   \350\257\235", nullptr));
        label_phone->setText(QCoreApplication::translate("SuperUserMainWindow", "TextLabel", nullptr));
        label_9->setText(QCoreApplication::translate("SuperUserMainWindow", "\351\202\256   \347\256\261", nullptr));
        label_email->setText(QCoreApplication::translate("SuperUserMainWindow", "TextLabel", nullptr));
        btn_add_user->setText(QCoreApplication::translate("SuperUserMainWindow", "\345\242\236\345\212\240", nullptr));
        btn_modify_user->setText(QCoreApplication::translate("SuperUserMainWindow", "\344\277\256\346\224\271", nullptr));
        btn_delete_user->setText(QCoreApplication::translate("SuperUserMainWindow", "\345\210\240\351\231\244", nullptr));
        lineE_username->setPlaceholderText(QCoreApplication::translate("SuperUserMainWindow", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        btn_search_user->setText(QCoreApplication::translate("SuperUserMainWindow", "\346\220\234\347\264\242", nullptr));
        label_title->setText(QCoreApplication::translate("SuperUserMainWindow", "\350\210\252\347\217\255\350\256\242\347\245\250\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        btn_min->setText(QString());
        btn_close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SuperUserMainWindow: public Ui_SuperUserMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPERUSERMAINWINDOW_H
