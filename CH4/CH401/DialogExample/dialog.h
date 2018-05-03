#ifndef DIALOG_H
#define DIALOG_H
#include "inputdialog.h"
#include "msgboxdlg.h"
#include <QDialog>
#include <QLineEdit>
#include <QGridLayout>

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();
private:
    QPushButton *fileBtn;
    QLineEdit *fileLineEdit;
    QGridLayout *mainLayout;
    QPushButton *colorBtn;
    QFrame *colorFrame;
    QPushButton *fontBtn;
    QLineEdit *fontLineEdit;
    QPushButton *inputBtn;
    InputDialog *inputDlg;
    QPushButton *msgBtn;
    MsgBoxDlg *msgDlg;

private slots:
    void showFile();
    void showColor();
    void showFont();
    void showInputDlg();
    void showMsgDlg();

};

#endif // DIALOG_H
