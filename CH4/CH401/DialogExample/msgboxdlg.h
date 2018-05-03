#include <QLabel>
#include <QPushButton>
#include <QGridLayout>
#include <QDialog>

#ifndef MSGBOXDLG_H
#define MSGBOXDLG_H


class MsgBoxDlg : public QDialog
{
    Q_OBJECT

public:
    MsgBoxDlg(QWidget* parent=0);
private slots:
    void showQuestionMsg();
    void showInformationMsg();
    void showWariningMsg();
    void showCriticalMsh();
    void showAboutMsg();
    void showAboutQtMsg();
private:
    QLabel *label;
    QPushButton *questionBtn;
    QPushButton *informationBtn;
    QPushButton *warningBtn;
    QPushButton *criticalBtn;
    QPushButton *aboutBtn;
    QPushButton *aboutQtBtn;
    QGridLayout *mainLayout;

};

#endif // MSGBOXDLG_H
