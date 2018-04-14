#ifndef STACKEDWIDGET_H
#define STACKEDWIDGET_H

#include <QDialog>
#include <QListWidget>
#include <QStackedWidget>
#include <QLabel>

class stackedWidget : public QDialog
{
    Q_OBJECT

public:
    stackedWidget(QWidget *parent = 0);
    ~stackedWidget();
private:
    QListWidget *list;
    QStackedWidget *stack;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
};

#endif // STACKEDWIDGET_H
