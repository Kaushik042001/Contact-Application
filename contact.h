#ifndef CONTACT_H
#define CONTACT_H

#pragma once

#include <QObject>

class Contact : public QObject
{
    Q_OBJECT

public:
    Contact(QString name, QString phoneNumber);
    QString getName() const;
    QString getPhoneNumber() const;

private:
    QString name_;
    QString phoneNumber_;
};

#endif // CONTACT_H
