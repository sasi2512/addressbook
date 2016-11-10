#include <QLabel>
#include <QLineEdit>
#include <QTextEdit>
#include <QFormLayout>
#include "qtcontactform.h"



QtContactForm::QtContactForm(QWidget *parent) : 
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QLineEdit()),
        pincodeField(new QLineEdit()),
        phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit())
{
    addRow("First Name <font color = 'red'> * </font>" , firstNameField);
    addRow("Last Name", lastNameField);
    addRow("Address", addressField);
    addRow("Pincode", pincodeField);
    addRow("Phone Number <font color = 'red'> * </font>", phoneNumberField);
    addRow("Email", emailField);
}

void QtContactForm::clear()
{
    firstNameField->setText("");
    lastNameField->setText("");
    addressField->setText("");
    pincodeField->setText("");
    phoneNumberField->setText("");
    emailField->setText("");
}
