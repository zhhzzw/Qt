#ifndef USERINFO_H
#define USERINFO_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QTextEdit>
#include <QGridLayout>

class UserInfo : public QDialog
{
    Q_OBJECT

public:
    UserInfo(QWidget *parent = 0);
    ~UserInfo();
private:
    //左侧
    QLabel *UserNameLabel;
    QLabel *NameLabel;
    QLabel *SexLabel;
    QLabel *DepartmentLabel;
    QLabel *AgeLabel;
    QLabel *OtherLabel;
    QLineEdit *UserNameLineEdit;
    QLineEdit *NameLineEdit;
    QComboBox *SexComBox;
    QTextEdit *DepartmentTextEdit;
    QLineEdit *AgeLineEdit;
    QGridLayout *LeftLayout;
    //右侧
    QLabel *HeadLabel;
    QLabel *HeadIconLabel;
    QPushButton *UpdateHeadBtn;
    QHBoxLayout *TopRightLayout;
    QTextEdit *IntroductionTextEdit;
    QLabel *IntroductionLabel;
    QVBoxLayout *RightLayout;
    //底部
    QPushButton *OkBtn;
    QPushButton *CancelBtn;
    QHBoxLayout *ButtomLayout;
};

#endif // USERINFO_H
