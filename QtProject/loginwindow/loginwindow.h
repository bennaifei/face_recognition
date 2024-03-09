#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QMouseEvent>

QT_BEGIN_NAMESPACE
namespace Ui {
class LoginWindow;
}
QT_END_NAMESPACE

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

private slots:
    void on_loginButton_clicked();

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

private:
    Ui::LoginWindow *ui;
    QSqlDatabase db;
    QPoint m_dragPosition;
};
#endif // LOGINWINDOW_H
