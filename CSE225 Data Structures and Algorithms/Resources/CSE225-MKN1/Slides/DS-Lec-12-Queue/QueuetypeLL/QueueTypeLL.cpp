#ifndef QUEUETYPELL_CPP
#define QUEUETYPELL_CPP
#include "QueueTypeLL.h"

template<class ItemType>
QueueTypeLL<ItemType>::QueueTypeLL()
{
    cout<<"Constructing\n";
    frnt=NULL;
    rear=NULL;
}

template<class ItemType>
QueueTypeLL<ItemType>::~QueueTypeLL()
{
    cout<<"Destructing\n";
    makeEmpty();
}

template<class ItemType>
void QueueTypeLL<ItemType>::makeEmpty()
{
    NodeType<ItemType> *temp;
    while(frnt!=NULL)
    {
        temp=frnt;
        frnt=frnt->next;
        delete temp;
    }
}

template<class ItemType>
void QueueTypeLL<ItemType>::Enqueue(ItemType item)
{
    cout<<"Enqueue::"<<item<<endl;
    NodeType<ItemType> *temp = new NodeType<ItemType>;
    temp->data = item;
    temp->next = NULL;
    if(frnt==NULL){frnt=temp;rear=temp;}
    else
    {rear->next = temp;
    rear=temp;}
}

template<class ItemType>
void QueueTypeLL<ItemType>::Dequeue()
{
    if(isEmpty());

    else if(frnt==rear)
    { cout<<frnt->data<<": is deleted from the Queue"<<endl;
      frnt=NULL; rear=NULL;}
    else
    {
    NodeType<ItemType> *temp;
    cout<<frnt->data<<": is deleted from the Queue"<<endl;
    temp = frnt;
    frnt = frnt->next;
    delete temp;
    }
   //cout<<frnt->data<<": is deleted from the Queue"<<endl;

}

template<class ItemType>
void QueueTypeLL<ItemType>::printQueue() const
{
   cout<<"FRONT:"<<frnt->data<<endl;
   cout<<"REAR:"<<rear->data<<endl;
   cout<<"FRONT=>";
    NodeType<ItemType> *temp = frnt;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"<=REAR";
cout<<endl;
}

template<class ItemType>
bool QueueTypeLL<ItemType>::isEmpty() const
{
    return (frnt==NULL);
}

template<class ItemType>
bool QueueTypeLL<ItemType>::isFull() const
{
    NodeType<ItemType> *temp;

    try
    {
        temp = new NodeType<ItemType>;
        delete temp;
        return false;
    }
    catch(bad_alloc e){
    return true;
    }

    return (frnt==NULL);
}

#endif // STACKTYPELL_CPP

