#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#pragma once

#include "contact.h"

class LinkedList
{
public:
    LinkedList();
    ~LinkedList();

    void appendContact(Contact* contact);
    Contact* findContact(QString name);
    void removeContact(QString name);

private:
    struct Node {
        Contact* contact;
        Node* next;
    };

    Node* head;
};


#endif // LINKEDLIST_H
