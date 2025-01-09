#ifndef QUEUETYPELL_H
#define QUEUETYPELL_H
#include<iostream>
#include<new>

using namespace std;

template<class ItemType>
class NodeType
{
public:
    ItemType data;
    NodeType *next;
};

template<class ItemType>
class QueueTypeLL
{
private:
    NodeType<ItemType> *frnt;
    NodeType<ItemType> *rear;
public:
     QueueTypeLL();
    ~QueueTypeLL();
    void Enqueue(ItemType);
    void Dequeue();
    bool isFull () const;
	bool isEmpty() const;
	void makeEmpty();
	void printQueue() const;
	//void printRear() const;
	//void printfront() const;
};


#endif // STACKTYPELL_H
