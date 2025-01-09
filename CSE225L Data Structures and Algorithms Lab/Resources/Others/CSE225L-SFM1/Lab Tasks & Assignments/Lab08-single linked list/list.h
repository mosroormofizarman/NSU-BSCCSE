#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include<bits/stdc++.h>
using namespace std;
class ListEmpty{};

class PositionOutOfBound{};

struct node {
    int data;
    node *next;
};

template<class T>
class SinglyLinkedList{
protected:
    node *head, *curptr;
    int length;

public:
    SinglyLinkedList();
    ~SinglyLinkedList();
    virtual bool isEmpty();
    virtual int listSize();
    virtual void display();
    virtual int searchItem(T);

    virtual void insertAtStart(T);
    virtual void insertAtEnd(T);
    virtual void insertAtPosition(T, int);

    virtual void deleteStart();
    virtual void deleteEnd();
    virtual void deleteAtPosition(int);

    virtual int getValue(int);
    virtual void setValue(int, T);
    virtual bool hasNext();
    virtual T nextItem();
    virtual void reset();

};
#endif // LIST_H_INCLUDED
