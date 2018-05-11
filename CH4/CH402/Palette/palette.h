#ifndef PALETTE_H
#define PALETTE_H

#include <QDialog>
#include <QComboBox>
#include <QLabel>
#include <QTextEdit>
#include <QPushButton>
#include <QLineEdit>

class Palette : public QDialog
{
    Q_OBJECT

public:
    Palette(QWidget *parent = 0);
    ~Palette();
    void createCtrlFrame();
    void createContentFrame();
    void fillColorList(QComboBox *);

private slots:
    void showWindow();
    void showWindowText();
    void showButton();
    void showButtonText();
    void showBase();

private:
   QFrame *ctrFrame;
   QLabel *windowLabel;
   QComboBox *windowComboBox;
   QLabel *windowTextLabel;
   QComboBox *windowTextComboBox;
   QLabel *buttonLabel;
   QComboBox *buttonComboBox;
   QLabel *buttonTextLabel;
   QComboBox *buttonTextComboBox;
   QLabel *baseLabel;
   QComboBox *baseComboBox;
   QFrame *contentFrame;
   QLabel *label1;
   QComboBox *comboBox1;
   QLabel *label2;
   QLineEdit *LineEdit2;
   QTextEdit *textEdit;
   QPushButton *OkBtn;
   QPushButton *CancelBtn;

};

#endif // PALETTE_H
