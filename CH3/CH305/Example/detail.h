#ifndef DETAIL_H
#define DETAIL_H

#include <QWidget>
#include <QLabel>
#include <QComboBox>
#include <QLineEdit>
#include <QTextEdit>
#include <QGridLayout>

class Detail : public QWidget
{
    Q_OBJECT
public:
    explicit Detail(QWidget *parent = 0);

private:
    QLabel *NationalLabel;
    QComboBox *NationalLabelComBox;
    QLabel *ProvinceLabel;
    QComboBox *ProvinceComBox;
    QLabel *CityLabel;
    QLineEdit *CityLineEdit;
    QLabel *IntroductionLabel;
    QTextEdit *IntroductionTextEdit;
    QGridLayout *mainLayout;

signals:


public slots:
};

#endif // DETAIL_H
