#include "dialog.h"
#include <QProgressDialog>
#include <QFont>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    QFont font("ZYSong18030",12);
    setFont(font);
    setWindowTitle(tr("Progress"));
    FileNum = new QLabel;
    FileNum->setText(tr("文件数目:"));
    FileNumLineEdit = new QLineEdit;
    FileNumLineEdit->setText(tr("100000"));
    ProgressType = new QLabel;
    ProgressType->setText(tr("显示类型:"));
    comboBox = new QComboBox;
    comboBox->addItem(tr("progressBar"));
    comboBox->addItem(tr("progressDialog"));
    progressBar = new QProgressBar;
    starBtn = new QPushButton();
    starBtn->setText(tr("开始"));
    mainLayout = new QGridLayout(this);
    mainLayout->addWidget(FileNum,0,0);
    mainLayout->addWidget(FileNumLineEdit,0,1);
    mainLayout->addWidget(ProgressType,1,0);
    mainLayout->addWidget(comboBox,1,1);
    mainLayout->addWidget(progressBar,2,0,1,2);
    mainLayout->addWidget(starBtn,3,1);
    mainLayout->setMargin(15);
    mainLayout->setSpacing(10);
    connect(starBtn,SIGNAL(clicked(bool)),this,SLOT(startProgress()));
}

Dialog::~Dialog()
{

}

void Dialog::startProgress()
{
    bool ok;
    int num = FileNumLineEdit->text().toInt(&ok);
    if(comboBox->currentIndex()==0)
        {
            progressBar->setRange(0,num);
            for(int i=1;i<num;i++)
            {
                progressBar->setValue(i);
            }
        }
    else if(comboBox->currentIndex()==1)
        {
            QProgressDialog *progressDialog = new QProgressDialog(this);
            QFont font("ZYSong18030",12);
            progressDialog->setFont(font);
            progressDialog->setWindowModality(Qt::WindowModal);
            progressDialog->setMinimumDuration(5);
            progressDialog->setWindowTitle(tr("please wait"));
            progressDialog->setLabelText(tr("copying..."));
            progressDialog->setCancelButtonText(tr("Cancel"));
            progressDialog->setRange(0,num);
            for(int i=1;i<num;i++)
            {
                progressDialog->setValue(i);
                if(progressDialog->wasCanceled())
                {
                    return;
                }
            }
        }
}
