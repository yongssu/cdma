#include "mainwindow.h"
#include <QApplication>
//解决中文乱码问题
// Coding: UTF-8(BOM)
#if defined(_MSC_VER) && (_MSC_VER >= 1600)
#pragma execution_character_set("utf-8")
#endif

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.resize(700, 500);
    w.show();

    return a.exec();
}
