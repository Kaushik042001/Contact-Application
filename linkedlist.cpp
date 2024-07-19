// linkedlist.cpp
#include "linkedlist.h"

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::~LinkedList() {
    while (head) {
        Node* next = head->next;
        delete head->contact;
        delete head;
        head = next;
    }
}

void LinkedList::appendContact(Contact* contact) {
    Node* newNode = new Node;
    newNode->contact = contact;
    newNode->next = head;
    head = newNode;
}

Contact* LinkedList::findContact(QString name) {
    Node* current = head;
    while (current) {
        if (current->contact->getName() == name) {
            return current->contact;
        }
        current = current->next;
    }
    return nullptr;
}

void LinkedList::removeContact(QString name) {
    if (!head) {
        return;
    }

    if (head->contact->getName() == name) {
        Node* temp = head;
        head = head->next;
        delete temp->contact;
        delete temp;
        return;
    }

    Node* current = head;
    while (current->next) {
        if (current->next->contact->getName() == name) {
            Node* temp = current->next;
            current->next = temp->next;
            delete temp->contact;
            delete temp;
            return;
        }
        current = current->next;
    }
}
