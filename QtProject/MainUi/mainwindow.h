#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>
#include <QPushButton>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QFileDialog>
#include <QLabel>
#include <QFile>
#include <QFileInfo>
#include <QDesktopServices>
#include <QUrl>
#include <QMouseEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_userButton_clicked();

    void on_faceButton_clicked();

    void on_accessButton_clicked();

    void on_setButton_clicked();

    void on_addButton_clicked();

    void on_adButton_clicked();

    void on_delButton_clicked();

    void on_reButton_clicked();

    void on_serchButton_clicked();

    void on_selectPho_clicked();

    void on_yesBotton_clicked();

    void on_reButton_2_clicked();

    void on_pushButton_5_clicked(){
        QUrl url("https://github.com/bennaifei/face_recognition");
        QDesktopServices::openUrl(url);
    };


    void on_pushButton_6_clicked(){
        QUrl url("https://bilibili.com");
        QDesktopServices::openUrl(url);
    };

    void on_reManage_clicked();

    void on_addLine1_clicked();

    void on_addManage_clicked();

    void on_delManage_clicked();

protected:
    void mousePressEvent(QMouseEvent *event) override;

    void mouseMoveEvent(QMouseEvent *event) override;

    void mouseReleaseEvent(QMouseEvent *event) override;

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    QSqlTableModel *info;
    QSqlTableModel *info1;
    QSqlTableModel *info2;
    QPoint m_dragPosition;
};

#endif // MAINWINDOW_H
