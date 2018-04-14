#include "content.h"
#include <QApplication>
#include <QTextCodec>
#include <QSplitter>
#include <QListWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFont font("AR PL Kaitim GB",12);
    a.setFont(font);
    //新建一个水平分割窗对象，作为主布局窗
    QSplitter *splitMain = new QSplitter(Qt::Horizontal,0);
    splitMain->setOpaqueResize(true);
    QListWidget *list = new QListWidget(splitMain);
    list->insertItem(0,QObject::tr("基本信息"));
    list->insertItem(1,QObject::tr("联系方式"));
    list->insertItem(2,QObject::tr("详细资料"));
    Content *content = new Content(splitMain);
    QObject::connect(list,SIGNAL(currentRowChanged(int)),content->stack,SLOT(setCurrentIndex(int)));
    splitMain->setWindowTitle(QObject::tr("修改用户资料"));
    splitMain->setMinimumSize(splitMain->minimumSize());
    splitMain->setMaximumSize(splitMain->maximumSize());
    splitMain->show();

    return a.exec();
}
