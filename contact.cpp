// contact.cpp
#include "contact.h"

Contact::Contact(QString name, QString phoneNumber) : name_(name), phoneNumber_(phoneNumber) {}

QString Contact::getName() const {
    return name_;
}

QString Contact::getPhoneNumber() const {
    return phoneNumber_;
}
