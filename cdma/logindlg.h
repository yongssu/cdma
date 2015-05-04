#ifndef LOGINDLG_H
#define LOGINDLG_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

//解决中文乱码问题
// Coding: UTF-8(BOM)
#if defined(_MSC_VER) && (_MSC_VER >= 1600)
#pragma execution_character_set("utf-8")
#endif

class loginDlg : public QDialog
{
    Q_OBJECT
public:
    explicit loginDlg(QWidget *parent = 0);

signals:

private:
    QLabel *label0;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;

    QLineEdit *lineEditUserID;
    QLineEdit *lineEditPasswd;
    QLineEdit *lineEditDbName;
    QLineEdit *lineEditHostIP;

    QPushButton *loginBtn;
    QPushButton *logoutBtn;


public slots:

};

#endif // LOGINDLG_H
