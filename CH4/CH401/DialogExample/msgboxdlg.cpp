#include "msgboxdlg.h"
#include <QMessageBox>
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
    label->setText(tr("Information Message Box"));
    QMessageBox::information(this,tr("Information 消息框"),tr("这是Information消息框，欢迎您!"));
    return;

}
void MsgBoxDlg::showQuestionMsg()
{
    label->setText(tr("Question Message Box"));
    switch (QMessageBox::question(this,tr("Question 消息框"),tr("您现在已经修改完成，是否要结束程序?"),QMessageBox::Ok|QMessageBox::Cancel,QMessageBox::Ok)) {
    case QMessageBox::Ok:
        label->setText("Question button/Ok");
        break;
    case QMessageBox::Cancel:
        label->setText("Question button/Cancle");
        break;
    default:
        break;
    }
    return;
}
void MsgBoxDlg::showWariningMsg()
{
    label->setText(tr("Warning Message Box"));
    switch (QMessageBox::warning(this,tr("Warning消息框"),tr("您修改的内容还未保存，是否要保存对文件的修改?"),
                                 QMessageBox::Save|QMessageBox::Discard|QMessageBox::Cancel,QMessageBox::Save)) {
    case QMessageBox::Save:
        label->setText(tr("Warning button/Save"));
        break;
    case QMessageBox::Discard:
        label->setText(tr("Warning button/Discard"));
        break;
    case QMessageBox::Cancel:
        label->setText(tr("Warning button/Cancel"));
        break;
    default:
        break;
    }
    return;
}
void MsgBoxDlg::showCriticalMsh()
{
    label->setText(tr("Critical Message Box"));
    QMessageBox::critical(this,tr("Critical 消息框"),tr("这是一个Critical消息框测试!"));
    return;

}
void MsgBoxDlg::showAboutMsg()
{
    label->setText(tr("About Message Box"));
    QMessageBox::about(this,tr("About 消息框"),tr("这是一个About消息框"));
    return;
}
void MsgBoxDlg::showAboutQtMsg()
{
    label->setText(tr("About Qt Message Box"));
    QMessageBox::aboutQt(this,tr("About Qt 消息框"));
    return;

}
