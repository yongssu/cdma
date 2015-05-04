#include "logindlg.h"
#include <QGridLayout>

loginDlg::loginDlg(QWidget *parent) :
    QDialog(parent)
{
    label0 = new QLabel;
    label0->setText(tr("用户名"));
    label1 = new QLabel;
    label1->setText(tr("密码"));
    label2 = new QLabel;
    label2->setText(tr("数据库名称"));
    label3 = new QLabel;
    label3->setText(tr("服务器IP"));

    lineEditUserID = new QLineEdit;
    lineEditPasswd = new QLineEdit;
    lineEditPasswd->setEchoMode(QLineEdit::Password); //设置密码框
    lineEditDbName = new QLineEdit;
    lineEditHostIP = new QLineEdit;

    loginBtn = new QPushButton;
    loginBtn->setText(tr("登陆"));
    logoutBtn = new QPushButton;
    logoutBtn->setText(tr("退出"));

    // 重点提示:构造函数需要写this
    QGridLayout *layout1 = new QGridLayout(this);
    layout1->addWidget(label0, 0, 0);
    layout1->addWidget(lineEditDbName, 0, 1);
}
