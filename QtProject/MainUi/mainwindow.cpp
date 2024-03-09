#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileDialog"
#include "QPixmap"
#include "QMouseEvent"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    setWindowFlags(Qt::FramelessWindowHint);
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground);
    QLabel *imageLabel = ui->huaLabel;
    QPixmap image("D:/aaa/QtProject/loginwindow/sucai/imags/headpo.jpg");
    imageLabel->setPixmap(image.scaled(imageLabel->size(), Qt::KeepAspectRatio));
    imageLabel->setAlignment(Qt::AlignCenter); // 图片居中显示
    imageLabel->show();
    connect(ui->pushButton_5,&QPushButton::clicked,this,&MainWindow::on_pushButton_5_clicked);
    connect(ui->pushButton_6,&QPushButton::clicked,this,&MainWindow::on_pushButton_6_clicked);
    db = QSqlDatabase::addDatabase("QMYSQL");

    db.setDatabaseName("user_info_db");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("75259516");
    if(db.open())
    {
        // QMessageBox::information(this,"连接提示","连接成功");
        info = new QSqlTableModel;
        info->setTable("user_info");
        ui->tableView->setModel(info);
        info->setHeaderData(0,Qt::Horizontal, QObject::tr("学号"));
        info->setHeaderData(1,Qt::Horizontal, QObject::tr("姓名"));
        info->setHeaderData(2,Qt::Horizontal, QObject::tr("手机号"));
        info->setHeaderData(3,Qt::Horizontal, QObject::tr("性别"));
        info->setHeaderData(4,Qt::Horizontal, QObject::tr("生日"));
        info->setHeaderData(5,Qt::Horizontal, QObject::tr("失败次数"));
        info->select();

        info1 = new QSqlTableModel;
        info1->setTable("user_warning");
        ui->warnView->setModel(info1);
        info1->setHeaderData(0,Qt::Horizontal,QObject::tr("记录"));
        info1->setHeaderData(1,Qt::Horizontal,QObject::tr("报警时间"));
        info1->setHeaderData(2,Qt::Horizontal,QObject::tr("报警次数"));
        info1->select();

        info2 = new QSqlTableModel;
        info2->setTable("login");
        ui->tableView_2->setModel(info2);
        ui->tableView_2->setColumnHidden(1, true);
        info2->setHeaderData(0,Qt::Horizontal,QObject::tr("账号"));
        info2->select();
    }
    else
    {
        QMessageBox::warning(this,"连接提示","连接失败");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_userButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0); // 切换到索引为0的页面
}

void MainWindow::on_faceButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1); // 切换到索引为1的页面
}


void MainWindow::on_accessButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2); // 切换到索引为2的页面
}


void MainWindow::on_setButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3); // 切换到索引为3的页面
}

void MainWindow::on_adButton_clicked()
{
    // 在模型中插入新的行
    int rowNum = info->rowCount(); // 获取当前行数
    info->insertRow(rowNum); // 插入新行
}

void MainWindow::on_addButton_clicked()
{
    // 提交模型的更改
    info->submitAll();
}



void MainWindow::on_delButton_clicked()
{
    // 获取用户选中的行
    QModelIndexList selectedRows = ui->tableView->selectionModel()->selectedRows();

    // 如果没有选中行，直接返回
    if (selectedRows.isEmpty())
        return;

    // 获取选中行的行号
    int row = selectedRows.first().row();

    // 从模型中移除选中行
    info->removeRow(row);

    // 提交模型的更改到数据库
    info->submitAll();
}


void MainWindow::on_reButton_clicked()
{
    // 设置查询结果模型到 TableView
    ui->tableView->setModel(info);
    info->select();
}


void MainWindow::on_serchButton_clicked()
{
    // 获取搜索框中的学号
    QString studentId = ui->serchLine->text();
    qDebug() << "Search Student ID: " << studentId;

    // 查询数据库以检索对应的信息
    QString queryString = QString("SELECT * FROM user_info WHERE student_id = '%1'").arg(studentId);
    QSqlQuery query(queryString);

    if (query.exec()) {
        qDebug() << "查询成功!";

        // 创建查询结果模型并设置查询结果
        QSqlQueryModel *searchResultModel = new QSqlQueryModel;
        // searchResultModel->setQuery (query);
        searchResultModel->setHeaderData(0,Qt::Horizontal, QObject::tr("学号"));
        searchResultModel->setHeaderData(1,Qt::Horizontal, QObject::tr("姓名"));
        searchResultModel->setHeaderData(2,Qt::Horizontal, QObject::tr("手机号"));
        searchResultModel->setHeaderData(3,Qt::Horizontal, QObject::tr("性别"));
        searchResultModel->setHeaderData(4,Qt::Horizontal, QObject::tr("生日"));
        searchResultModel->setHeaderData(5,Qt::Horizontal, QObject::tr("失败次数"));

        // 将查询结果模型设置到 TableView 上显示
        ui->tableView->setModel(searchResultModel);

        // 检查查询是否成功
        if (searchResultModel->lastError().isValid()) {
            qDebug() << "查询错误:" << searchResultModel->lastError().text();
        } else {
            // 输出模型中的数据
            int rowCount = searchResultModel->rowCount();
            int columnCount = searchResultModel->columnCount();
            qDebug() << "行数:" << rowCount;
            qDebug() << "列数:" << columnCount;

            if (searchResultModel->rowCount() == 0) {
                qDebug() << "没有查询到的学生" << studentId;
            } else {
                qDebug() << "查找成功:";
                for (int row = 0; row < searchResultModel->rowCount(); ++row) {
                    QStringList rowData;
                    for (int column = 0; column < searchResultModel->columnCount(); ++column) {
                        rowData.append(searchResultModel->data(searchResultModel->index(row, column)).toString());
                    }
                    qDebug() << "行" << row << ":" << rowData.join(", ");
                }
            }
        }
    } else {
        qDebug() << "查询失败: " << query.lastError().text();
    }
}



void MainWindow::on_selectPho_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,"请选择图片","","Images(*.png *.jpg *.jpeg");

    if(!fileName.isEmpty()){
        QPixmap pixmap(fileName);
        ui->huaLabel->setPixmap(pixmap.scaled(ui->huaLabel->size(),Qt::KeepAspectRatio,Qt::SmoothTransformation));
    }
}


void MainWindow::on_yesBotton_clicked()
{
    QPixmap pixmap = ui->huaLabel->pixmap();
    QString imagePath0 = ui->idLine->text();
    QString imagePath = ui->nameLine->text();
    if(imagePath0.isEmpty()||imagePath.isEmpty()) {
        QMessageBox::information(this, "提示", "请输入图片id和学号");
        return;
    }

    QString targetPath = "D:/aaa/mycodetest/opencv/data/jm/%1"; // 占位符 %1 用于替换文件名及格式
    QString format = "jpg"; // 默认格式

    if (!pixmap.isNull()) {
        QFileInfo fileInfo(imagePath0,imagePath);
        QString suffix = fileInfo.suffix().toLower();
        if (suffix == "png" || suffix == "jpg" || suffix == "jpeg") {
            format = suffix;
        }
        targetPath = targetPath.arg(imagePath0 + "." + imagePath + "." + format);
    } else {
        QMessageBox::information(this, "提示", "请先选择图片");
        return;
    }

    bool saveSuccess = pixmap.save(targetPath, format.toLatin1()); // 将 QString 格式转换为 char* 格式
    if(saveSuccess){
        QMessageBox::information(this, "成功", "上传成功");
    }
    else{
        QMessageBox::warning(this, "失败", "上传失败");
    }
}


void MainWindow::on_reButton_2_clicked()
{
    // 设置查询结果模型到 warnView
    ui->warnView->setModel(info1);
    info1->select();
}


void MainWindow::on_reManage_clicked()
{
    // // 设置查询结果模型到 TableView2
    info2->setFilter("");
    ui->tableView_2->setModel(info2);
    info2->select();
}


void MainWindow::on_addLine1_clicked()
{
    // 在模型中插入新的行
    int rowNum = info2->rowCount(); // 获取当前行数
    info2->insertRow(rowNum); // 插入新行
}


void MainWindow::on_addManage_clicked()
{
    // 获取用户选中的行
    QModelIndexList selectedRows = ui->tableView_2->selectionModel()->selectedRows();

    // 如果没有选中行，直接返回
    if (selectedRows.isEmpty())
        return;

    // 获取选中行的行号
    int row = selectedRows.first().row();
    // 获取用户密码
    QString newP = ui->xiuPassword->text();
    // 提交模型的更改
    info2->setData(info2->index(row, 1), newP);
    info2->submitAll();
}


void MainWindow::on_delManage_clicked()
{
    // 获取用户选中的行
    QModelIndexList selectedRows = ui->tableView_2->selectionModel()->selectedRows();

    // 如果没有选中行，直接返回
    if (selectedRows.isEmpty())
        return;

    // 获取选中行的行号
    int row = selectedRows.first().row();

    // 获取用户名
    QString username = info2->data(info2->index(row, 0)).toString();

    // 从模型中移除选中行
    info2->removeRow(row);
    // 提交模型的更改到数据库
    info2->submitAll();
    info2->select();
    // 用户删除最后一个账号，自动创建一个新的默认账号，"123","123"
    if (info2->rowCount() == 0) {
        int newRow = info2->rowCount();
        info2->insertRow(newRow);
        info2->setData(info2->index(newRow, 0), "123");
        info2->setData(info2->index(newRow, 1), "123");
        info2->submitAll();
    }
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        // 记录鼠标按下时的位置
        m_dragPosition = event->globalPosition().toPoint() - frameGeometry().topLeft();
        event->accept();
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton)
    {
        // 移动窗口的位置
        move(event->globalPosition().toPoint() - m_dragPosition);
        event->accept();
    }
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        // 清除记录的位置信息
        m_dragPosition = QPoint();
        event->accept();
    }
}

