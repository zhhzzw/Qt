#include "msgboxdlg.h"
#include <QLabel>
#include <QPushButton>
#include <QDialog>
#include <QGridLayout>

MsgBoxDlg::MsgBoxDlg(QWidget *parent)
    :QDialog(parent)
{
    setWindowTitle(tr("标准消息对话框实例"));
    label = new QLabel;
    label->setText(tr("请选择一种消息框"));
    questionBtn = new QPushButton;
    questionBtn->setText(tr("Questionmsg"));
    informationBtn = new QPushButton;
    informationBtn->setText(tr("InformationMsg"));
    warningBtn = new QPushButton;
    warningBtn->setText(tr("WarningMsg"));
    criticalBtn = new QPushButton;
    criticalBtn->setText(tr("CriticalMsg"));
    aboutBtn = new QPushButton;
    aboutBtn->setText(tr("AboutMsg"));
    aboutQtBtn = new QPushButton;
    aboutQtBtn->setText(tr("AboutQtMsg"));
    //布局
    mainLayout = new QGridLayout(this);
    mainLayout->addWidget(label,0,0,1,2);
    mainLayout->addWidget(questionBtn,1,0);
    mainLayout->addWidget(informationBtn,1,1);
    mainLayout->addWidget(warningBtn,2,0);
    mainLayout->addWidget(criticalBtn,2,1);
    mainLayout->addWidget(aboutBtn,3,0);
    mainLayout->addWidget(aboutQtBtn,3,1);
    connect(questionBtn,SIGNAL(clicked(bool)),this,SLOT(showQuestionMsg()));
    connect(informationBtn,SIGNAL(clicked(bool)),this,SLOT(showInformationMsg()));
    connect(warningBtn,SIGNAL(clicked(bool)),this,SLOT(showWariningMsg()));
    connect(criticalBtn,SIGNAL(clicked(bool)),this,SLOT(showCriticalMsh()));
    connect(aboutBtn,SIGNAL(clicked(bool)),this,SLOT(showAboutMsg()));
    connect(aboutQtBtn,SIGNAL(clicked(bool)),this,SLOT(showAboutQtMsg()));
}
void MsgBoxDlg::showInformationMsg()
{

}
void MsgBoxDlg::showQuestionMsg()
{

}
void MsgBoxDlg::showWariningMsg()
{

}
void MsgBoxDlg::showCriticalMsh()
{

}
void MsgBoxDlg::showAboutMsg()
{

}
void MsgBoxDlg::showAboutQtMsg()
{

}
