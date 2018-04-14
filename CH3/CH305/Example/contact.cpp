#include "contact.h"

Contact::Contact(QWidget *parent) : QWidget(parent)
{
    EmailAddressLabel = new QLabel(tr("电子邮件:"));
    EmailAddressLineEdit = new QLineEdit;
    AddressLabel = new QLabel(tr("联系地址:"));
    AddressLineEdit = new QLineEdit;
    CodeLabel = new QLabel(tr("邮政编码:"));
    CodeLineEdit = new QLineEdit;
    MoviTelLabel =  new QLabel(tr("联系电话:"));
    MoviTelLineEdit = new QLineEdit;
    MOviTekCheckBook = new QCheckBox(tr("接收留言"));
    mainLayout = new QGridLayout(this);
    mainLayout->setMargin(15);
    mainLayout->setSpacing(10);
    mainLayout->addWidget(EmailAddressLabel,0,0);
    mainLayout->addWidget(EmailAddressLineEdit,0,1);
    mainLayout->addWidget(AddressLabel,1,0);
    mainLayout->addWidget(AddressLineEdit,1,1);
    mainLayout->addWidget(CodeLabel,2,0);
    mainLayout->addWidget(CodeLineEdit,2,1);
    mainLayout->addWidget(MoviTelLabel,3,0);
    mainLayout->addWidget(MoviTelLineEdit,3,1);
    mainLayout->addWidget(MOviTekCheckBook,3,2);
    mainLayout->addWidget(ProTelLabel,4,0);
    mainLayout->addWidget(ProTelLineEdit,4,1);
    mainLayout->setSizeConstraint(QLayout::SetFixedSize);

}
