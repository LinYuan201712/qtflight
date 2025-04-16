/********************************************************************************
** Form generated from reading UI file 'commonusermainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMONUSERMAINWINDOW_H
#define UI_COMMONUSERMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
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

class Ui_CommonUserMainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QWidget *widget_title;
    QGridLayout *gridLayout;
    QLabel *label_title;
    QSpacerItem *horizontalSpacer_12;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_min;
    QPushButton *btn_close;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QTreeWidget *treeWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineE_flightID;
    QPushButton *btn_search1;
    QTableView *tableView;
    QWidget *page_3;
    QGridLayout *gridLayout_6;
    QTableView *tableView_3;
    QWidget *page_6;
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
    QWidget *page_4;
    QGridLayout *gridLayout_7;
    QTableView *tableView_4;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btn_refund;
    QWidget *page_5;
    QGridLayout *gridLayout_8;
    QTableView *tableView_5;
    QWidget *widget_5;
    QGridLayout *gridLayout_10;
    QPushButton *btn_delete;
    QSpacerItem *horizontalSpacer_5;
    QWidget *page_2;
    QGridLayout *gridLayout_5;
    QTableView *tableView_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineE_departureCity;
    QLineEdit *lineE_arrivalCity;
    QDateEdit *dateEdit;
    QPushButton *btn_search2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_buy;

    void setupUi(QMainWindow *CommonUserMainWindow)
    {
        if (CommonUserMainWindow->objectName().isEmpty())
            CommonUserMainWindow->setObjectName("CommonUserMainWindow");
        CommonUserMainWindow->resize(734, 617);
        centralwidget = new QWidget(CommonUserMainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color:#fbd8d1"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_title = new QWidget(centralwidget);
        widget_title->setObjectName("widget_title");
        widget_title->setMinimumSize(QSize(0, 75));
        widget_title->setStyleSheet(QString::fromUtf8("background-color: #c26452;"));
        gridLayout = new QGridLayout(widget_title);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 9, 9, 9);
        label_title = new QLabel(widget_title);
        label_title->setObjectName("label_title");
        label_title->setMinimumSize(QSize(161, 0));
        label_title->setStyleSheet(QString::fromUtf8("font: italic 20pt \"Lucida Fax\";\n"
"\n"
"color:rgb(0, 0, 0);"));

        gridLayout->addWidget(label_title, 0, 1, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_12, 0, 0, 1, 1);

        frame_2 = new QFrame(widget_title);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btn_min = new QPushButton(frame_2);
        btn_min->setObjectName("btn_min");
        btn_min->setMinimumSize(QSize(0, 30));
        btn_min->setMaximumSize(QSize(40, 16777215));
        btn_min->setStyleSheet(QString::fromUtf8("QPushButton#btn_min{\n"
"    width: auto;\n"
"    height: auto;\n"
"    border: none;\n"
"    border-image: url(:/res/pic/minus.png);\n"
"}\n"
"/*\346\214\211\351\222\256-\346\234\200\345\260\217\345\214\226-\351\274\240\346\240\207\346\202\254\345\201\234*/\n"
"QPushButton#btn_min:hover{\n"
"    width: auto;\n"
"    height: auto;\n"
"    border: none;\n"
"    border-image: url(:/res/pic/minus_big.png);\n"
"}\n"
"/*\346\214\211\351\222\256-\346\234\200\345\260\217\345\214\226-\351\274\240\346\240\207\346\214\211\344\270\213*/\n"
"QPushButton#btn_min:pressed{\n"
"    width: auto;\n"
"    height: auto;\n"
"    border: none;\n"
"    border-image: url(:/res/pic/minus.png);\n"
"}\n"
""));

        horizontalLayout_2->addWidget(btn_min);

        btn_close = new QPushButton(frame_2);
        btn_close->setObjectName("btn_close");
        btn_close->setMinimumSize(QSize(0, 30));
        btn_close->setMaximumSize(QSize(40, 16777215));
        btn_close->setStyleSheet(QString::fromUtf8("QPushButton#btn_close{\n"
"    width: auto;    /*\350\207\252\345\212\250\350\260\203\346\225\264\345\256\275\351\253\230*/\n"
"    height: auto;\n"
"    border: none;\n"
"    border-image: url(:/res/pic/close.png);\n"
"\n"
"}\n"
"/*\346\214\211\351\222\256-\345\205\263\351\227\255-\351\274\240\346\240\207\346\202\254\345\201\234*/\n"
"QPushButton#btn_close:hover{\n"
"    width: auto;\n"
"    height: auto;\n"
"    border: none;\n"
"    border-image: url(:/res/pic/close_big.png);\n"
"}\n"
"/*\346\214\211\351\222\256-\345\205\263\351\227\255-\351\274\240\346\240\207\346\214\211\344\270\213*/\n"
"QPushButton#btn_close:pressed{\n"
"    width: auto;\n"
"    height: auto;\n"
"    border: none;\n"
"    border-image: url(:/res/pic/close.png);\n"
"}\n"
""));

        horizontalLayout_2->addWidget(btn_close);


        gridLayout->addWidget(frame_2, 0, 2, 1, 1);

        gridLayout->setColumnStretch(0, 1);

        gridLayout_3->addWidget(widget_title, 0, 0, 1, 1);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        widget_2->setStyleSheet(QString::fromUtf8("background-color:#fbd8d1"));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 9, 0);
        treeWidget = new QTreeWidget(widget_2);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName("treeWidget");
        treeWidget->setStyleSheet(QString::fromUtf8("background-color:#c26452;\n"
"\n"
""));
        treeWidget->setLineWidth(3);

        gridLayout_2->addWidget(treeWidget, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(widget_2);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color:#fbd8d1"));
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
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        lineE_flightID = new QLineEdit(widget);
        lineE_flightID->setObjectName("lineE_flightID");
        lineE_flightID->setMinimumSize(QSize(0, 28));
        lineE_flightID->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(lineE_flightID);

        btn_search1 = new QPushButton(widget);
        btn_search1->setObjectName("btn_search1");
        btn_search1->setMinimumSize(QSize(0, 32));
        btn_search1->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(btn_search1);


        gridLayout_4->addWidget(widget, 0, 0, 1, 1);

        tableView = new QTableView(page);
        tableView->setObjectName("tableView");
        tableView->setContextMenuPolicy(Qt::ContextMenuPolicy::PreventContextMenu);

        gridLayout_4->addWidget(tableView, 1, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        gridLayout_6 = new QGridLayout(page_3);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        tableView_3 = new QTableView(page_3);
        tableView_3->setObjectName("tableView_3");

        gridLayout_6->addWidget(tableView_3, 0, 0, 1, 1);

        stackedWidget->addWidget(page_3);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        gridLayout_9 = new QGridLayout(page_6);
        gridLayout_9->setObjectName("gridLayout_9");
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(page_6);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_13 = new QGridLayout(frame);
        gridLayout_13->setObjectName("gridLayout_13");
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        frame_user = new QFrame(frame);
        frame_user->setObjectName("frame_user");
        frame_user->setFrameShape(QFrame::Shape::StyledPanel);
        frame_user->setFrameShadow(QFrame::Shadow::Raised);
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
        frame_message->setFrameShape(QFrame::Shape::StyledPanel);
        frame_message->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_12 = new QGridLayout(frame_message);
        gridLayout_12->setObjectName("gridLayout_12");
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        frame_5 = new QFrame(frame_message);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
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
        widget_7->setMinimumSize(QSize(0, 70));
        gridLayout_14 = new QGridLayout(widget_7);
        gridLayout_14->setObjectName("gridLayout_14");
        gridLayout_14->setHorizontalSpacing(9);
        gridLayout_14->setVerticalSpacing(0);
        gridLayout_14->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_7, 0, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_6, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

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
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        gridLayout_18->addItem(horizontalSpacer_8, 0, 0, 1, 1);

        frame_message_2 = new QFrame(widget_9);
        frame_message_2->setObjectName("frame_message_2");
        frame_message_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_message_2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(frame_message_2);
        verticalLayout->setObjectName("verticalLayout");
        frame_username = new QFrame(frame_message_2);
        frame_username->setObjectName("frame_username");
        frame_username->setStyleSheet(QString::fromUtf8(""));
        frame_username->setFrameShape(QFrame::Shape::StyledPanel);
        frame_username->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_username);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label = new QLabel(frame_username);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_7->addWidget(label);

        label_username = new QLabel(frame_username);
        label_username->setObjectName("label_username");
        label_username->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));
        label_username->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_7->addWidget(label_username);


        verticalLayout->addWidget(frame_username);

        frame_password = new QFrame(frame_message_2);
        frame_password->setObjectName("frame_password");
        frame_password->setStyleSheet(QString::fromUtf8(""));
        frame_password->setFrameShape(QFrame::Shape::StyledPanel);
        frame_password->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_8 = new QHBoxLayout(frame_password);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_3 = new QLabel(frame_password);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_8->addWidget(label_3);

        label_password = new QLabel(frame_password);
        label_password->setObjectName("label_password");
        label_password->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_8->addWidget(label_password);


        verticalLayout->addWidget(frame_password);

        frame_name = new QFrame(frame_message_2);
        frame_name->setObjectName("frame_name");
        frame_name->setFrameShape(QFrame::Shape::StyledPanel);
        frame_name->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_9 = new QHBoxLayout(frame_name);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_5 = new QLabel(frame_name);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_9->addWidget(label_5);

        label_name = new QLabel(frame_name);
        label_name->setObjectName("label_name");
        label_name->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_9->addWidget(label_name);


        verticalLayout->addWidget(frame_name);

        frame_phone = new QFrame(frame_message_2);
        frame_phone->setObjectName("frame_phone");
        frame_phone->setFrameShape(QFrame::Shape::StyledPanel);
        frame_phone->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_10 = new QHBoxLayout(frame_phone);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_7 = new QLabel(frame_phone);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_10->addWidget(label_7);

        label_phone = new QLabel(frame_phone);
        label_phone->setObjectName("label_phone");
        label_phone->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_10->addWidget(label_phone);


        verticalLayout->addWidget(frame_phone);

        frame_email = new QFrame(frame_message_2);
        frame_email->setObjectName("frame_email");
        frame_email->setFrameShape(QFrame::Shape::StyledPanel);
        frame_email->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_11 = new QHBoxLayout(frame_email);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_9 = new QLabel(frame_email);
        label_9->setObjectName("label_9");
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_11->addWidget(label_9);

        label_email = new QLabel(frame_email);
        label_email->setObjectName("label_email");
        label_email->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_11->addWidget(label_email);


        verticalLayout->addWidget(frame_email);


        gridLayout_18->addWidget(frame_message_2, 0, 1, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        gridLayout_18->addItem(horizontalSpacer_11, 0, 2, 1, 1);


        gridLayout_11->addWidget(widget_9, 0, 0, 1, 1);


        gridLayout_12->addWidget(widget_6, 1, 0, 1, 1);

        gridLayout_12->setRowStretch(0, 1);
        gridLayout_12->setRowStretch(1, 8);

        gridLayout_13->addWidget(frame_message, 1, 0, 1, 1);

        gridLayout_13->setRowStretch(0, 1);
        gridLayout_13->setRowStretch(1, 6);

        gridLayout_9->addWidget(frame, 0, 0, 1, 1);

        stackedWidget->addWidget(page_6);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        gridLayout_7 = new QGridLayout(page_4);
        gridLayout_7->setObjectName("gridLayout_7");
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        tableView_4 = new QTableView(page_4);
        tableView_4->setObjectName("tableView_4");

        gridLayout_7->addWidget(tableView_4, 1, 0, 1, 1);

        widget_4 = new QWidget(page_4);
        widget_4->setObjectName("widget_4");
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        btn_refund = new QPushButton(widget_4);
        btn_refund->setObjectName("btn_refund");
        btn_refund->setMinimumSize(QSize(0, 35));
        btn_refund->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_4->addWidget(btn_refund);


        gridLayout_7->addWidget(widget_4, 0, 0, 1, 1);

        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        gridLayout_8 = new QGridLayout(page_5);
        gridLayout_8->setObjectName("gridLayout_8");
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        tableView_5 = new QTableView(page_5);
        tableView_5->setObjectName("tableView_5");

        gridLayout_8->addWidget(tableView_5, 1, 0, 1, 1);

        widget_5 = new QWidget(page_5);
        widget_5->setObjectName("widget_5");
        gridLayout_10 = new QGridLayout(widget_5);
        gridLayout_10->setObjectName("gridLayout_10");
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        btn_delete = new QPushButton(widget_5);
        btn_delete->setObjectName("btn_delete");
        btn_delete->setMinimumSize(QSize(0, 35));
        btn_delete->setMaximumSize(QSize(50, 16777215));

        gridLayout_10->addWidget(btn_delete, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_5, 0, 0, 1, 1);


        gridLayout_8->addWidget(widget_5, 0, 0, 1, 1);

        stackedWidget->addWidget(page_5);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        gridLayout_5 = new QGridLayout(page_2);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        tableView_2 = new QTableView(page_2);
        tableView_2->setObjectName("tableView_2");

        gridLayout_5->addWidget(tableView_2, 1, 0, 1, 1);

        widget_3 = new QWidget(page_2);
        widget_3->setObjectName("widget_3");
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        lineE_departureCity = new QLineEdit(widget_3);
        lineE_departureCity->setObjectName("lineE_departureCity");

        horizontalLayout_3->addWidget(lineE_departureCity);

        lineE_arrivalCity = new QLineEdit(widget_3);
        lineE_arrivalCity->setObjectName("lineE_arrivalCity");

        horizontalLayout_3->addWidget(lineE_arrivalCity);

        dateEdit = new QDateEdit(widget_3);
        dateEdit->setObjectName("dateEdit");

        horizontalLayout_3->addWidget(dateEdit);

        btn_search2 = new QPushButton(widget_3);
        btn_search2->setObjectName("btn_search2");
        btn_search2->setMinimumSize(QSize(0, 32));
        btn_search2->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(btn_search2);

        horizontalSpacer_3 = new QSpacerItem(220, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        btn_buy = new QPushButton(widget_3);
        btn_buy->setObjectName("btn_buy");
        btn_buy->setMinimumSize(QSize(0, 32));
        btn_buy->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(btn_buy);


        gridLayout_5->addWidget(widget_3, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);

        gridLayout_2->addWidget(stackedWidget, 0, 1, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 5);

        gridLayout_3->addWidget(widget_2, 1, 0, 1, 1);

        CommonUserMainWindow->setCentralWidget(centralwidget);

        retranslateUi(CommonUserMainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CommonUserMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CommonUserMainWindow)
    {
        CommonUserMainWindow->setWindowTitle(QCoreApplication::translate("CommonUserMainWindow", "MainWindow", nullptr));
        label_title->setText(QCoreApplication::translate("CommonUserMainWindow", "flight booking system", nullptr));
        btn_min->setText(QString());
        btn_close->setText(QString());
        lineE_flightID->setPlaceholderText(QCoreApplication::translate("CommonUserMainWindow", "\350\257\267\350\276\223\345\205\245\350\210\252\347\217\255\345\217\267", nullptr));
        btn_search1->setText(QCoreApplication::translate("CommonUserMainWindow", "\346\220\234\347\264\242", nullptr));
        label_welcome->setText(QCoreApplication::translate("CommonUserMainWindow", "root\357\274\214\346\254\242\350\277\216\345\233\236\346\235\245\357\274\201", nullptr));
        label_user_pic->setText(QString());
        label_text->setText(QCoreApplication::translate("CommonUserMainWindow", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        btn_change->setText(QCoreApplication::translate("CommonUserMainWindow", "\344\277\256\346\224\271\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("CommonUserMainWindow", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_username->setText(QCoreApplication::translate("CommonUserMainWindow", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("CommonUserMainWindow", "\345\257\206   \347\240\201", nullptr));
        label_password->setText(QCoreApplication::translate("CommonUserMainWindow", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("CommonUserMainWindow", "\345\247\223   \345\220\215", nullptr));
        label_name->setText(QCoreApplication::translate("CommonUserMainWindow", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("CommonUserMainWindow", "\347\224\265   \350\257\235", nullptr));
        label_phone->setText(QCoreApplication::translate("CommonUserMainWindow", "TextLabel", nullptr));
        label_9->setText(QCoreApplication::translate("CommonUserMainWindow", "\351\202\256   \347\256\261", nullptr));
        label_email->setText(QCoreApplication::translate("CommonUserMainWindow", "TextLabel", nullptr));
        btn_refund->setText(QCoreApplication::translate("CommonUserMainWindow", "\351\200\200\347\245\250", nullptr));
        btn_delete->setText(QCoreApplication::translate("CommonUserMainWindow", "\345\210\240\351\231\244", nullptr));
        lineE_departureCity->setPlaceholderText(QCoreApplication::translate("CommonUserMainWindow", "\350\257\267\350\276\223\345\205\245\345\207\272\345\217\221\345\234\260", nullptr));
        lineE_arrivalCity->setPlaceholderText(QCoreApplication::translate("CommonUserMainWindow", "\350\257\267\350\276\223\345\205\245\347\233\256\347\232\204\345\234\260", nullptr));
        btn_search2->setText(QCoreApplication::translate("CommonUserMainWindow", "\346\220\234\347\264\242", nullptr));
        btn_buy->setText(QCoreApplication::translate("CommonUserMainWindow", "\350\256\242\350\264\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CommonUserMainWindow: public Ui_CommonUserMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMONUSERMAINWINDOW_H
