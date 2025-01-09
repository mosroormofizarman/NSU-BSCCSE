#include "QueueType.h"

template <class ItemType>
QUEUEType<ItemType>::QUEUEType()
{
    ft = -1;
    rear=-1;
}

template <class ItemType>
bool QUEUEType<ItemType>::IsEmpty()
{
    return (ft == -1);
}

template <class ItemType>
bool QUEUEType<ItemType>::IsFull()
{
return ((ft==0&&rear==MAX-1)||(ft==rear+1));
    }

template <class ItemType>
void QUEUEType<ItemType>::EnQueue(ItemType newItem)
{
    if( IsFull() ) throw FullQueue();
    if(IsEmpty()) {ft=0;rear=0; }
     else
     rear=(rear+1)%MAX;

      items[rear] = newItem;
}

template <class ItemType>
void QUEUEType<ItemType>::DeQueue()
{
    if( IsEmpty() ) throw EmptyQueue();
    if((ft==rear)&&(ft!=-1)) {ft=-1;rear=-1;}
    else
     ft=(ft+1)%MAX;
}

template <class ItemType>
ItemType QUEUEType<ItemType>::frontPrint()
{
    if (IsEmpty()) throw EmptyQueue();
    return items[ft];
}

template <class ItemType>
ItemType QUEUEType<ItemType>::rearPrint()
{
    if (IsEmpty()) throw EmptyQueue();
    return items[rear];
}

template <class ItemType>
void QUEUEType<ItemType>::makeEmpty()
{
ft=-1;
rear=-1;
}
