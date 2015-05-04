#include "mainwindow.h"
#include "logindlg.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    createActions();
    createMenus();
}

MainWindow::~MainWindow()
{

}

void MainWindow::createMenus()
{
    adminMenu = menuBar()->addMenu(tr("管理")); // 添加管理菜单
    adminMenu->addAction(loginAction);
    adminMenu->addAction(logoutAction);
    adminMenu->addSeparator(); // 加入分隔符
    adminMenu->addAction(exitAction);
}

void MainWindow::createActions()
{
    loginAction = new QAction(tr("登陆"), this);
    loginAction->setShortcut(tr("Ctrl+u"));
    connect(loginAction, SIGNAL(triggered()), this, SLOT(on_login()));

    logoutAction = new QAction(tr("注销"), this);
    logoutAction->setShortcut(tr("Ctrl+b"));
    connect(logoutAction, SIGNAL(triggered()), this, SLOT(on_logout()));

    exitAction = new QAction(tr("退出"), this);
    exitAction->setShortcut(tr("Ctrl+w"));
    connect(exitAction, SIGNAL(triggered()), this, SLOT(on_exit()));

}

void MainWindow::on_login()
{
    loginDlg dlg; //将对话框实例化
    dlg.exec(); //调用exec产生一个模式对话框
    //new loginDlg();
    //QMessageBox::information(this, "", "hello world");
}

void MainWindow::on_logout()
{
    QMessageBox::information(this, "", "hello world");
}

void MainWindow::on_exit()
{
    close();
}

//closeEvent函数是在一个widget退出之前被自动调用的函数
void MainWindow::closeEvent(QCloseEvent *event)
{
    //通过函数的返回值来判断用户到底点击的是yes还是no
    QMessageBox::StandardButton button = QMessageBox::question(
                this,
                tr("提示"),
                tr("是否退出程序！"),
                QMessageBox::Yes | QMessageBox::No);
    if(button == QMessageBox::Yes)
        event->accept(); // 接受退出
    else
        event->ignore(); // 不接受退出
}

