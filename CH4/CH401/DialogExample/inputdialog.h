#include <QLabel>
#include <QPushButton>
#include <QGridLayout>
#include <QDialog>

#ifndef INPUTDIALOG_H
#define INPUTDIALOG_H


class InputDialog : public QDialog
{
    Q_OBJECT

public:
    InputDialog(QWidget* parent=0);
private slots:
    void ChangeName();
    void ChangeSex();
    void ChangeAge();
    void ChangeScore();
private:
    QLabel *nameLabel1;
    QLabel *sexLabel1;
    QLabel *ageLabel1;
    QLabel *nameLabel2;
    QLabel *sexLabel2;
    QLabel *ageLabel2;
    QLabel *scoreLabel1;
    QLabel *scoreLabel2;
    QPushButton *sexBtn;
    QPushButton *nameBtn;
    QPushButton *ageBtn;
    QPushButton *scoreBtn;
    QGridLayout *mainLayout;
};

#endif // INPUTDIALOG_H
