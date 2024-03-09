#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QProcess>

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    setWindowFlags(Qt::FramelessWindowHint);
    ui->setupUi(this);
    QLabel *imageLabel = ui->label;
    QPixmap image("D:/aaa/QtProject/loginwindow/sucai/imags/headpo.jpg");
    imageLabel->setPixmap(image.scaled(imageLabel->size(), Qt::KeepAspectRatio));
    imageLabel->setAlignment(Qt::AlignCenter); // 图片居中显示
    imageLabel->show();
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setDatabaseName("user_info_db");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("75259516");
    // 判断数据库连接是否成功
    if(not db.open())
    {
    //     QMessageBox::information(this,"连接提示","连接成功");
    // }
    // else
    // {
        QMessageBox::warning(this,"连接提示","连接失败");
    }
}


LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_loginButton_clicked()
{

    QString id = ui->adminId->text();
    QString password = ui->adminPassword->text();

    // 查询数据库中的用户表数据
    QSqlQuery query;
    query.prepare("SELECT * FROM login WHERE stu_id = :id AND password = :password");
    query.bindValue(":id", id);
    query.bindValue(":password", password);

    if(query.exec() && query.next())
    {
        // // 获取当前应用程序的路径
        // QString appPath = QCoreApplication::applicationDirPath();
        // // 构建相对路径
        // QString exePath = appPath + "/../build-MainUi-Desktop_Qt_6_6_2_MinGW_64_bit-Profile/release/MainUi.exe";

        // 启动 MainUi.exe
        QProcess::startDetached("D:/aaa/QtProject/build-MainUi-Desktop_Qt_6_6_2_MinGW_64_bit-Profile/release/MainUi.exe");
        this->hide();
    }
    else
    {
        QMessageBox::warning(this, "登录提示", "登录失败");
        // 登录失败后的操作
    }
}

void LoginWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        // 记录鼠标按下时的位置
        m_dragPosition = event->globalPosition().toPoint() - frameGeometry().topLeft();
        event->accept();
    }
}

void LoginWindow::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton)
    {
        // 移动窗口的位置
        move(event->globalPosition().toPoint() - m_dragPosition);
        event->accept();
    }
}

void LoginWindow::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        // 清除记录的位置信息
        m_dragPosition = QPoint();
        event->accept();
    }
}
