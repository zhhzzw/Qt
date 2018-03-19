#include "mainwindow.h"
#include <QApplication>
#include <qdebug.h>
#include <Qstring>
#include <QByteArray>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QList<int> list;
    list<<1<<2<<3<<4<<5;
    QListIterator<int> i(list);
    for(;i.hasNext();)
        qDebug()<<i.next();
    return a.exec();
}
