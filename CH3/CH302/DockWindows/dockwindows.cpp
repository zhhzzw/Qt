#include "dockwindows.h"
#include <QTextEdit>
#include <QDockWidget>

DockWindows::DockWindows(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("DockWindows"));
    QTextEdit *te = new QTextEdit(this);
    te->setText(tr("Main Window"));
    te->setAlignment(Qt::AlignCenter);
    setCentralWidget(te); //将编辑框设置为主窗口的中央窗口
    //停靠窗口
    QDockWidget *dock = new QDockWidget(tr("DockWindow1"),this);
    //设置可移动
    dock->setFeatures(QDockWidget::DockWidgetMovable);
    dock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
    QTextEdit *te1 = new QTextEdit();
    te->setText(tr("Window1,The dock widget can be moved between docks by the users" ""));
    dock->setWidget(te1);
    addDockWidget(Qt::RightDockWidgetArea,dock);
    //停靠窗口2
    dock = new QDockWidget(tr("DockWindw2"),this);
    //设置窗口可关闭可浮动
    dock->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetFloatable);
    QTextEdit *te2 = new QTextEdit();
    te2->setText(tr("Window2,The dock widget can be detachaed from the main window,"
                    "and floated as an independent window, and can be closed"));
    dock->setWidget(te2);
    addDockWidget(Qt::RightDockWidgetArea,dock);
    //停靠窗口3
    dock = new QDockWidget(tr("DcokWindow3"),this);
    dock->setFeatures(QDockWidget::AllDockWidgetFeatures);
    QTextEdit *te3 =new QTextEdit();
    te3->setText(tr("Window3,The dock widget can be closed, moved, and floated"));
    dock->setWidget(te3);
    addDockWidget(Qt::RightDockWidgetArea,dock);
}

DockWindows::~DockWindows()
{

}
