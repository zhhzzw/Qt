#include "stackedwidget.h"
#include <QHBoxLayout>

stackedWidget::stackedWidget(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle(tr("StackedWidget"));
    //创建一个QlistWidget控件对象
    list = new QListWidget(this);
    //在新建的QlistWidget控件中插入三个条目，作为选项
    list->insertItem(0,tr("window1"));
    list->insertItem(1,tr("window2"));
    list->insertItem(2,tr("window3"));
    //创建三个QLabel标签空间对象，作为堆栈窗口需要显示的三层窗体
    label1 = new QLabel(tr("WindowTest1"));
    label2 = new QLabel(tr("WindowTest2"));
    label3 = new QLabel(tr("WindowTest3"));

    stack = new QStackedWidget(this);
    //将创建的三个QLable标签控件一次插入堆栈窗体中
    stack->addWidget(label1);
    stack->addWidget(label2);
    stack->addWidget(label3);
    QHBoxLayout *mainLayout = new QHBoxLayout(this);

    mainLayout->setMargin(5);
    mainLayout->setSpacing(5);
    mainLayout->addWidget(list);
    mainLayout->addWidget(stack,0,Qt::AlignCenter);
    mainLayout->setStretchFactor(list,1);
    mainLayout->setStretchFactor(stack,3);
    connect(list,SIGNAL(currentRowChanged(int)),stack,SLOT(setCurrentIndex(int)));

}

stackedWidget::~stackedWidget()
{

}
