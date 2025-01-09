#ifndef QUEUETYPE_H
#define QUEUETYPE_H

const int MAX = 5;
class FullQueue
// Exception class thrown
// by Push when stack is full.
{};
class EmptyQueue
// Exception class thrown
// by Pop and Top when stack is emtpy.
{};

template <class ItemType>
class QUEUEType
{
    public:
        QUEUEType();
        bool IsFull();
        bool IsEmpty();
        void EnQueue(ItemType);
        void DeQueue();
        ItemType frontPrint();
        ItemType rearPrint();
        void makeEmpty();
    private:
        int ft;
        int rear;
        ItemType  items[MAX];
};

#endif // QUEUETYPE_H
