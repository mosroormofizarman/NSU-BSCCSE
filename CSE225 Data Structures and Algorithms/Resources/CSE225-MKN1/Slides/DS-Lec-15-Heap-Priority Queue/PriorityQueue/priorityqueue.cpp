#ifndef PRIORITYQUEUE_CPP
#define PRIORITYQUEUE_CPP
#include"priorityQueue.h"

template<class ItemType>
PQType<ItemType>::PQType(int max)
{
  maxItems = max;
  heap.elements = new ItemType[max];
  numItems = 0;
}

template<class ItemType>
PQType<ItemType>::~PQType()
{
  delete [] heap.elements;
}

template<class ItemType>
void PQType<ItemType>::MakeEmpty()
{
  numItems = 0;
}

template<class ItemType>
bool PQType<ItemType>::IsFull()
{
  return numItems == maxItems;
}

template<class ItemType>
bool PQType<ItemType>::IsEmpty()
{
  return numItems == 0;
}


template<class ItemType>
void PQType<ItemType>::Enqueue(ItemType newItem)
{

    heap.elements[numItems]=newItem;//add an item in last index
    numItems++;                    //increment the number
    heap.ReheapUp(0,numItems-1);  //Reheap up
}


template<class ItemType>
void PQType<ItemType>::Dequeue(ItemType& item)
{
    item=heap.elements[0];
    heap.elements[0]=heap.elements[numItems-1]; //root is replace by the last element.
    numItems--;             //Update number of element
    heap.ReheapDown(0,numItems-1);//Update the order.
}

#endif // PRIORITYQUEUE_CPP
