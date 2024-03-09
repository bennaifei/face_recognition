/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label_2;
    QLineEdit *adminId;
    QLineEdit *adminPassword;
    QPushButton *loginButton;
    QFrame *frame_2;
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_3;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(769, 489);
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 271, 501));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 70, 231, 101));
        QFont font;
        font.setFamilies({QString::fromUtf8("\350\220\235\350\216\211\344\275\223")});
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(false);
        label_2->setFont(font);
        adminId = new QLineEdit(frame);
        adminId->setObjectName("adminId");
        adminId->setGeometry(QRect(40, 200, 181, 41));
        adminId->setStyleSheet(QString::fromUtf8("Border:None;\n"
"Border-bottom:2px solid rgba(0,0,0,100);\n"
"background-color:rbga(0,0,0,0)"));
        adminPassword = new QLineEdit(frame);
        adminPassword->setObjectName("adminPassword");
        adminPassword->setGeometry(QRect(40, 280, 181, 41));
        adminPassword->setStyleSheet(QString::fromUtf8("Border:None;\n"
"Border-bottom:2px solid rgba(0,0,0,100);\n"
"background-color:rbga(0,0,0,0)"));
        adminPassword->setEchoMode(QLineEdit::Password);
        loginButton = new QPushButton(frame);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(90, 370, 93, 28));
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"	color:rbga(255,255,255);\n"
"	border:none;\n"
"}\n"
"QPushButton:pressed{\n"
"	padding-left:5 px;\n"
"	padding-top:5 px;\n"
"}"));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(270, 100, 501, 401));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(270, 0, 501, 501));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../Pictures/headpo.jpg")));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(690, 10, 31, 31));
        QIcon icon;
        icon.addFile(QString::fromUtf8("D:/sucai/icons/minisize.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(730, 10, 31, 31));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("D:/sucai/icons/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(620, 440, 151, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\350\220\235\350\216\211\344\275\223")});
        font1.setPointSize(10);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(107, 107, 107);"));
        LoginWindow->setCentralWidget(centralwidget);

        retranslateUi(LoginWindow);
        QObject::connect(pushButton_2, &QPushButton::clicked, LoginWindow, qOverload<>(&QMainWindow::showMinimized));
        QObject::connect(pushButton_3, &QPushButton::clicked, LoginWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "LoginWindow", nullptr));
        label_2->setText(QCoreApplication::translate("LoginWindow", "\346\254\242\350\277\216\344\275\277\347\224\250\n"
"\345\256\277\350\210\215\351\227\250\347\246\201\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        adminId->setPlaceholderText(QCoreApplication::translate("LoginWindow", "\350\257\267\350\276\223\345\205\245\347\256\241\347\220\206\345\221\230\345\270\220\345\217\267", nullptr));
        adminPassword->setPlaceholderText(QCoreApplication::translate("LoginWindow", "\350\257\267\350\276\223\345\205\245\347\256\241\347\220\206\345\221\230\345\257\206\347\240\201:", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginWindow", "\347\231\273\345\275\225", nullptr));
        label->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        label_3->setText(QCoreApplication::translate("LoginWindow", "\345\205\263\344\272\216\346\210\221\347\232\204:\n"
"75259516@qq.com", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
