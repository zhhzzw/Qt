#include "dialog.h"
#include <QPushButton>
#include <QGridLayout>
#include <QFileDialog>
#include <QColorDialog>
#include <QFontDialog>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle(tr("各种标准对话框实例"));
    fileBtn =  new QPushButton;
    fileBtn->setText(tr("文件标准对话框实例"));
    fileLineEdit = new QLineEdit;
    colorBtn = new QPushButton;
    colorBtn->setText(tr("颜色标准对话框实例"));
    colorFrame = new QFrame;
    colorFrame->setFrameShape(QFrame::Box);
    colorFrame->setAutoFillBackground(true);
    fontBtn = new QPushButton;
    fontBtn->setText(tr("字体标准对话框实例"));
    fontLineEdit = new QLineEdit;
    fontLineEdit->setText(tr("Welcome!"));
    mainLayout = new QGridLayout(this);
    mainLayout->addWidget(fileBtn,0,0);
    mainLayout->addWidget(fileLineEdit,0,1);
    mainLayout->addWidget(colorBtn,1,0);
    mainLayout->addWidget(colorFrame,1,1);
    mainLayout->addWidget(fontBtn,2,0);
    mainLayout->addWidget(fontLineEdit,2,1);
    connect(fileBtn,SIGNAL(clicked(bool)),this,SLOT(showFile()));
    connect(colorBtn,SIGNAL(clicked(bool)),this,SLOT(showColor()));
    connect(fontBtn,SIGNAL(clicked(bool)),this,SLOT(showFont()));

}
void Dialog::showFile()
{
    QString s = QFileDialog::getOpenFileName(this,"open file dialog","/","C++ files(*.cpp)::C files(*.c)::Head files(*.h)");
    fileLineEdit->setText(s);
}
void Dialog::showColor()
{
    QColor c = QColorDialog::getColor(Qt::blue);
    if(c.isValid())
    {
        colorFrame->setPalette(QPalette(c));
    }

}
void Dialog::showFont()
{
    bool ok;
    QFont f = QFontDialog::getFont(&ok);
    if (ok)
    {
        fontLineEdit->setFont(f);
    }
}
Dialog::~Dialog()
{

}
