#ifndef CONTACT_H
#define CONTACT_H

#include <QWidget>
#include <Qlabel>
#include <QLineEdit>
#include <QCheckBox>
#include <QGridLayout>


class Contact : public QWidget
{
    Q_OBJECT
public:
    explicit Contact(QWidget *parent = 0);
private:
    QLabel *EmailAddressLabel;
    QLineEdit *EmailAddressLineEdit;
    QLabel *AddressLabel;
    QLineEdit *AddressLineEdit;
    QLabel *CodeLabel;
    QLineEdit *CodeLineEdit;
    QLabel *MoviTelLabel;
    QLineEdit *MoviTelLineEdit;
    QCheckBox *MOviTekCheckBook;
    QLabel *ProTelLabel;
    QLineEdit *ProTelLineEdit;
    QGridLayout *mainLayout;

signals:

public slots:
};

#endif // CONTACT_H
