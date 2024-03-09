/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QFrame *frame_2;
    QPushButton *userButton;
    QPushButton *faceButton;
    QPushButton *accessButton;
    QPushButton *setButton;
    QFrame *frame_3;
    QStackedWidget *stackedWidget;
    QWidget *userPage;
    QLabel *label;
    QTableView *tableView;
    QPushButton *reButton;
    QPushButton *delButton;
    QPushButton *addButton;
    QPushButton *adButton;
    QPushButton *serchButton;
    QLineEdit *serchLine;
    QWidget *facePage;
    QLabel *label_2;
    QLabel *huaLabel;
    QPushButton *selectPho;
    QPushButton *yesBotton;
    QLineEdit *nameLine;
    QLineEdit *idLine;
    QWidget *accessPage;
    QLabel *label_3;
    QTableView *warnView;
    QPushButton *reButton_2;
    QWidget *setPage;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QTableView *tableView_2;
    QPushButton *delManage;
    QPushButton *addManage;
    QPushButton *reManage;
    QPushButton *addLine1;
    QLineEdit *xiuPassword;
    QFrame *frame_4;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(961, 642);
        MainWindow->setMaximumSize(QSize(965, 16777215));
        MainWindow->setMouseTracking(false);
        MainWindow->setStyleSheet(QString::fromUtf8("#frame{\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius:30px;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8("#frame{\n"
"	background-color: rgb(95, 95, 95);\n"
"	border-radius:30px;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 80, 241, 541));
        frame_2->setStyleSheet(QString::fromUtf8("#frame_2{\n"
"	background-color: rgb(157, 157,157);\n"
"	border-bottom-left-radius:30px;\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        userButton = new QPushButton(frame_2);
        userButton->setObjectName("userButton");
        userButton->setGeometry(QRect(10, 50, 211, 51));
        faceButton = new QPushButton(frame_2);
        faceButton->setObjectName("faceButton");
        faceButton->setGeometry(QRect(10, 110, 211, 51));
        accessButton = new QPushButton(frame_2);
        accessButton->setObjectName("accessButton");
        accessButton->setGeometry(QRect(10, 170, 211, 51));
        setButton = new QPushButton(frame_2);
        setButton->setObjectName("setButton");
        setButton->setGeometry(QRect(10, 230, 211, 51));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(242, 79, 701, 541));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        stackedWidget = new QStackedWidget(frame_3);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(10, 20, 661, 501));
        userPage = new QWidget();
        userPage->setObjectName("userPage");
        label = new QLabel(userPage);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 10, 111, 41));
        tableView = new QTableView(userPage);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(30, 60, 581, 311));
        reButton = new QPushButton(userPage);
        reButton->setObjectName("reButton");
        reButton->setGeometry(QRect(380, 380, 101, 41));
        delButton = new QPushButton(userPage);
        delButton->setObjectName("delButton");
        delButton->setGeometry(QRect(380, 440, 101, 41));
        addButton = new QPushButton(userPage);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(510, 440, 101, 41));
        adButton = new QPushButton(userPage);
        adButton->setObjectName("adButton");
        adButton->setGeometry(QRect(510, 380, 101, 41));
        serchButton = new QPushButton(userPage);
        serchButton->setObjectName("serchButton");
        serchButton->setGeometry(QRect(30, 440, 101, 41));
        serchLine = new QLineEdit(userPage);
        serchLine->setObjectName("serchLine");
        serchLine->setGeometry(QRect(30, 390, 271, 31));
        stackedWidget->addWidget(userPage);
        facePage = new QWidget();
        facePage->setObjectName("facePage");
        label_2 = new QLabel(facePage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 10, 111, 41));
        huaLabel = new QLabel(facePage);
        huaLabel->setObjectName("huaLabel");
        huaLabel->setGeometry(QRect(70, 110, 321, 321));
        huaLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        selectPho = new QPushButton(facePage);
        selectPho->setObjectName("selectPho");
        selectPho->setGeometry(QRect(440, 340, 93, 28));
        yesBotton = new QPushButton(facePage);
        yesBotton->setObjectName("yesBotton");
        yesBotton->setGeometry(QRect(440, 390, 93, 28));
        nameLine = new QLineEdit(facePage);
        nameLine->setObjectName("nameLine");
        nameLine->setGeometry(QRect(440, 290, 151, 25));
        idLine = new QLineEdit(facePage);
        idLine->setObjectName("idLine");
        idLine->setGeometry(QRect(440, 240, 151, 25));
        stackedWidget->addWidget(facePage);
        accessPage = new QWidget();
        accessPage->setObjectName("accessPage");
        label_3 = new QLabel(accessPage);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 10, 111, 41));
        warnView = new QTableView(accessPage);
        warnView->setObjectName("warnView");
        warnView->setGeometry(QRect(60, 70, 531, 331));
        reButton_2 = new QPushButton(accessPage);
        reButton_2->setObjectName("reButton_2");
        reButton_2->setGeometry(QRect(292, 417, 71, 41));
        stackedWidget->addWidget(accessPage);
        setPage = new QWidget();
        setPage->setObjectName("setPage");
        label_4 = new QLabel(setPage);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(90, 10, 91, 41));
        label_5 = new QLabel(setPage);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 420, 101, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\271\274\345\234\206")});
        font.setPointSize(12);
        font.setBold(true);
        label_5->setFont(font);
        pushButton_5 = new QPushButton(setPage);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(150, 430, 71, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../sucai/icons/github.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon);
        pushButton_5->setIconSize(QSize(72, 40));
        pushButton_6 = new QPushButton(setPage);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(250, 430, 41, 41));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../sucai/icons/bilibili.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon1);
        pushButton_6->setIconSize(QSize(72, 60));
        tableView_2 = new QTableView(setPage);
        tableView_2->setObjectName("tableView_2");
        tableView_2->setGeometry(QRect(40, 70, 261, 331));
        delManage = new QPushButton(setPage);
        delManage->setObjectName("delManage");
        delManage->setGeometry(QRect(490, 320, 111, 28));
        addManage = new QPushButton(setPage);
        addManage->setObjectName("addManage");
        addManage->setGeometry(QRect(490, 270, 111, 31));
        reManage = new QPushButton(setPage);
        reManage->setObjectName("reManage");
        reManage->setGeometry(QRect(340, 320, 111, 28));
        addLine1 = new QPushButton(setPage);
        addLine1->setObjectName("addLine1");
        addLine1->setGeometry(QRect(340, 270, 111, 28));
        xiuPassword = new QLineEdit(setPage);
        xiuPassword->setObjectName("xiuPassword");
        xiuPassword->setGeometry(QRect(342, 200, 261, 41));
        stackedWidget->addWidget(setPage);
        frame_4 = new QFrame(frame);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(0, 0, 941, 81));
        frame_4->setStyleSheet(QString::fromUtf8("#frame_4{\n"
"	background-color: rgb(67,67,67);\n"
"	border-top-left-radius:30px;\n"
"	border-top-right-radius:30px;\n"
"}"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayoutWidget = new QWidget(frame_4);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(730, 0, 165, 71));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../../sucai/icons/minisize.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(horizontalLayoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../../sucai/icons/restore.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(20, 20));
        pushButton_4->setAutoDefault(false);

        horizontalLayout_2->addWidget(pushButton_4);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../../sucai/icons/maxsize.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon4);

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName("pushButton");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../../../sucai/icons/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon5);

        horizontalLayout_2->addWidget(pushButton);


        horizontalLayout->addWidget(frame);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));
        QObject::connect(pushButton_2, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::showMaximized));
        QObject::connect(pushButton_3, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::showMinimized));
        QObject::connect(pushButton_4, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::showNormal));

        stackedWidget->setCurrentIndex(1);
        pushButton_4->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        userButton->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        faceButton->setText(QCoreApplication::translate("MainWindow", "\344\272\272\350\204\270\346\225\260\346\215\256", nullptr));
        accessButton->setText(QCoreApplication::translate("MainWindow", "\351\227\250\347\246\201\344\277\241\346\201\257", nullptr));
        setButton->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">\347\224\250\346\210\267\347\256\241\347\220\206</span></p></body></html>", nullptr));
        reButton->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
        delButton->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "\346\217\220\344\272\244\346\225\260\346\215\256", nullptr));
        adButton->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\242\236\350\241\214", nullptr));
        serchButton->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242", nullptr));
        serchLine->setPlaceholderText(QCoreApplication::translate("MainWindow", "\351\200\232\350\277\207\345\255\246\345\217\267\346\237\245\350\257\242", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">\344\272\272\350\204\270\346\225\260\346\215\256</span></p></body></html>", nullptr));
        huaLabel->setText(QString());
        selectPho->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\345\233\276\347\211\207", nullptr));
        yesBotton->setText(QCoreApplication::translate("MainWindow", "\345\275\225\345\205\245\346\225\260\346\215\256", nullptr));
        nameLine->setPlaceholderText(QCoreApplication::translate("MainWindow", "\345\275\225\345\205\245\344\272\272\345\255\246\345\217\267", nullptr));
        idLine->setPlaceholderText(QCoreApplication::translate("MainWindow", "\345\275\225\345\205\245\344\272\272id", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">\351\227\250\347\246\201\344\277\241\346\201\257</span></p></body></html>", nullptr));
        reButton_2->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">\350\256\276\347\275\256</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216\346\210\221\347\232\204:", nullptr));
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        delManage->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\347\256\241\347\220\206\350\264\246\345\217\267", nullptr));
        addManage->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240/\344\277\256\346\224\271\350\264\246\345\217\267", nullptr));
        reManage->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
        addLine1->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\242\236\350\241\214", nullptr));
        xiuPassword->setPlaceholderText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201:", nullptr));
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_2->setText(QString());
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
