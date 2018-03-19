#include "mywidget.h"
#include <qapplication.h>
#include <qpushbutton.h>
#include <qfont.h>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    setMinimumSize(200,120);
    setMaximumSize(200,120);
    QPushButton *quit = new QPushButton("Quit",this);
    quit->setGeometry(62,40,85,30);
    quit->setFont(QFont("Times",18,QFont::Bold));
    connect(quit,SIGNAL(clicked(bool)),qApp,SLOT(quit()));
}

MyWidget::~MyWidget()
{

}
