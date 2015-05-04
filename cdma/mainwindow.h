#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include <QCloseEvent>

//解决中文乱码问题
// Coding: UTF-8(BOM)
#if defined(_MSC_VER) && (_MSC_VER >= 1600)
#pragma execution_character_set("utf-8")
#endif

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    //closeEvent函数是在一个widget退出之前被自动调用的函数
    void closeEvent(QCloseEvent *event);

private:
    void createMenus();
    void createActions();
    QMenu *adminMenu;
    QMenu *dataMenu;
    QMenu *windowMenu;
    QMenu *helpMenu;

    QAction *loginAction;
    QAction *logoutAction;
    QAction *exitAction;

private slots:
    void on_login();
    void on_logout();
    void on_exit();

};

#endif // MAINWINDOW_H
