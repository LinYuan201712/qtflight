/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_6;
    QFrame *frame_background;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_min;
    QPushButton *btn_close;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_17;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QFrame *frame_login;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_login;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_20;
    QFrame *frame_user_name;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_21;
    QLabel *label_user_name;
    QLineEdit *lineE_user_name;
    QSpacerItem *horizontalSpacer_22;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QFrame *frame_pwd;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_pwd;
    QLineEdit *lineE_pwd;
    QSpacerItem *horizontalSpacer_19;
    QSpacerItem *verticalSpacer_5;
    QGridLayout *gridLayout_7;
    QPushButton *btn_register;
    QPushButton *btn_login;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_4;
    QFrame *frame_pic;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_welcome;
    QFrame *frame_plane_pic;
    QSpacerItem *horizontalSpacer_18;
    QSpacerItem *verticalSpacer_10;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(1076, 742);
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setEnabled(true);
        gridLayout_6 = new QGridLayout(centralwidget);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        frame_background = new QFrame(centralwidget);
        frame_background->setObjectName("frame_background");
        frame_background->setFrameShape(QFrame::Shape::StyledPanel);
        frame_background->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_3 = new QGridLayout(frame_background);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(-1, 0, -1, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        btn_min = new QPushButton(frame_background);
        btn_min->setObjectName("btn_min");
        btn_min->setMinimumSize(QSize(0, 30));
        btn_min->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_4->addWidget(btn_min);

        btn_close = new QPushButton(frame_background);
        btn_close->setObjectName("btn_close");
        btn_close->setMinimumSize(QSize(0, 30));

        horizontalLayout_4->addWidget(btn_close);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer_9 = new QSpacerItem(20, 13, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer_9);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_17);

        frame = new QFrame(frame_background);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        frame_login = new QFrame(frame);
        frame_login->setObjectName("frame_login");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_login->sizePolicy().hasHeightForWidth());
        frame_login->setSizePolicy(sizePolicy);
        frame_login->setMinimumSize(QSize(500, 600));
        frame_login->setMaximumSize(QSize(500, 600));
        frame_login->setFrameShape(QFrame::Shape::StyledPanel);
        frame_login->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_5 = new QGridLayout(frame_login);
        gridLayout_5->setObjectName("gridLayout_5");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_login = new QLabel(frame_login);
        label_login->setObjectName("label_login");
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font.setPointSize(24);
        font.setBold(false);
        font.setItalic(false);
        label_login->setFont(font);
        label_login->setStyleSheet(QString::fromUtf8("font:  24pt \"Microsoft YaHei UI\";"));

        horizontalLayout->addWidget(label_login);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalSpacer_20 = new QSpacerItem(80, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_20);

        frame_user_name = new QFrame(frame_login);
        frame_user_name->setObjectName("frame_user_name");
        frame_user_name->setFrameShape(QFrame::Shape::StyledPanel);
        frame_user_name->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_4 = new QGridLayout(frame_user_name);
        gridLayout_4->setObjectName("gridLayout_4");
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalSpacer_21 = new QSpacerItem(10, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_21);

        label_user_name = new QLabel(frame_user_name);
        label_user_name->setObjectName("label_user_name");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_user_name->sizePolicy().hasHeightForWidth());
        label_user_name->setSizePolicy(sizePolicy1);
        label_user_name->setMinimumSize(QSize(30, 30));
        label_user_name->setMaximumSize(QSize(30, 30));

        horizontalLayout_11->addWidget(label_user_name);

        lineE_user_name = new QLineEdit(frame_user_name);
        lineE_user_name->setObjectName("lineE_user_name");

        horizontalLayout_11->addWidget(lineE_user_name);


        gridLayout_4->addLayout(horizontalLayout_11, 0, 0, 1, 1);


        horizontalLayout_10->addWidget(frame_user_name);

        horizontalSpacer_22 = new QSpacerItem(80, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_22);


        verticalLayout->addLayout(horizontalLayout_10);

        verticalSpacer_3 = new QSpacerItem(20, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_6 = new QSpacerItem(80, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        frame_pwd = new QFrame(frame_login);
        frame_pwd->setObjectName("frame_pwd");
        frame_pwd->setFrameShape(QFrame::Shape::StyledPanel);
        frame_pwd->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout = new QGridLayout(frame_pwd);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        label_pwd = new QLabel(frame_pwd);
        label_pwd->setObjectName("label_pwd");
        sizePolicy1.setHeightForWidth(label_pwd->sizePolicy().hasHeightForWidth());
        label_pwd->setSizePolicy(sizePolicy1);
        label_pwd->setMinimumSize(QSize(30, 30));
        label_pwd->setMaximumSize(QSize(30, 30));

        horizontalLayout_3->addWidget(label_pwd);

        lineE_pwd = new QLineEdit(frame_pwd);
        lineE_pwd->setObjectName("lineE_pwd");
        lineE_pwd->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_3->addWidget(lineE_pwd);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(frame_pwd);

        horizontalSpacer_19 = new QSpacerItem(80, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_19);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_5 = new QSpacerItem(20, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_5);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName("gridLayout_7");
        btn_register = new QPushButton(frame_login);
        btn_register->setObjectName("btn_register");
        btn_register->setMinimumSize(QSize(320, 50));
        btn_register->setMaximumSize(QSize(320, 50));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(12);
        font1.setUnderline(false);
        btn_register->setFont(font1);
        btn_register->setCursor(QCursor(Qt::PointingHandCursor));
        btn_register->setStyleSheet(QString::fromUtf8(""));

        gridLayout_7->addWidget(btn_register, 2, 0, 1, 1);

        btn_login = new QPushButton(frame_login);
        btn_login->setObjectName("btn_login");
        sizePolicy1.setHeightForWidth(btn_login->sizePolicy().hasHeightForWidth());
        btn_login->setSizePolicy(sizePolicy1);
        btn_login->setMinimumSize(QSize(320, 50));
        btn_login->setMaximumSize(QSize(320, 50));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(12);
        btn_login->setFont(font2);
        btn_login->setCursor(QCursor(Qt::OpenHandCursor));

        gridLayout_7->addWidget(btn_login, 0, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        gridLayout_7->addItem(verticalSpacer_7, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_7);

        verticalSpacer_6 = new QSpacerItem(20, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_6);

        verticalSpacer_8 = new QSpacerItem(20, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_8);


        gridLayout_5->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(verticalSpacer_4, 1, 0, 1, 1);


        horizontalLayout_8->addWidget(frame_login);

        frame_pic = new QFrame(frame);
        frame_pic->setObjectName("frame_pic");
        sizePolicy.setHeightForWidth(frame_pic->sizePolicy().hasHeightForWidth());
        frame_pic->setSizePolicy(sizePolicy);
        frame_pic->setMinimumSize(QSize(500, 600));
        frame_pic->setFrameShape(QFrame::Shape::StyledPanel);
        frame_pic->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_pic);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(-1, -1, 0, -1);
        label_welcome = new QLabel(frame_pic);
        label_welcome->setObjectName("label_welcome");
        label_welcome->setStyleSheet(QString::fromUtf8("\n"
"font: 700 italic 29pt \"Microsoft YaHei UI\";\n"
""));
        label_welcome->setTextFormat(Qt::TextFormat::MarkdownText);
        label_welcome->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label_welcome);

        frame_plane_pic = new QFrame(frame_pic);
        frame_plane_pic->setObjectName("frame_plane_pic");
        frame_plane_pic->setStyleSheet(QString::fromUtf8(""));
        frame_plane_pic->setFrameShape(QFrame::Shape::StyledPanel);
        frame_plane_pic->setFrameShadow(QFrame::Shadow::Raised);

        verticalLayout_3->addWidget(frame_plane_pic);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 4);

        horizontalLayout_8->addWidget(frame_pic);


        gridLayout_2->addLayout(horizontalLayout_8, 0, 0, 1, 1);


        horizontalLayout_9->addWidget(frame);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_18);


        verticalLayout_2->addLayout(horizontalLayout_9);

        verticalSpacer_10 = new QSpacerItem(20, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer_10);


        gridLayout_3->addLayout(verticalLayout_2, 0, 0, 1, 1);


        gridLayout_6->addWidget(frame_background, 0, 0, 1, 1);

        Login->setCentralWidget(centralwidget);
        QWidget::setTabOrder(lineE_user_name, lineE_pwd);
        QWidget::setTabOrder(lineE_pwd, btn_login);
        QWidget::setTabOrder(btn_login, btn_register);
        QWidget::setTabOrder(btn_register, btn_close);
        QWidget::setTabOrder(btn_close, btn_min);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        btn_min->setText(QString());
        btn_close->setText(QString());
        label_login->setText(QCoreApplication::translate("Login", "LOGIN", nullptr));
        label_user_name->setText(QString());
#if QT_CONFIG(tooltip)
        lineE_user_name->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        lineE_user_name->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(accessibility)
        lineE_user_name->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        lineE_user_name->setInputMask(QString());
        lineE_user_name->setText(QString());
        lineE_user_name->setPlaceholderText(QCoreApplication::translate("Login", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215...", nullptr));
        label_pwd->setText(QString());
        lineE_pwd->setPlaceholderText(QCoreApplication::translate("Login", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201...", nullptr));
        btn_register->setText(QCoreApplication::translate("Login", "Register", nullptr));
        btn_login->setText(QCoreApplication::translate("Login", "LOGIN", nullptr));
        label_welcome->setText(QCoreApplication::translate("Login", "flight booking system", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
