#include<iostream>
#include "linklist.h"

using namespace std;

template <class ItemType>
LinkList<ItemType>::LinkList()
{
    //ctor
    length = 0;
    head = NULL;
    tail = NULL;
}

        //LinkList();
        //~LinkList();
        template <class ItemType>
        bool LinkList<ItemType>::IsEmpty()
        {
         return(head==NULL);
        }


template <class ItemType>
int LinkList<ItemType>::LengthIs()
    {
         return length;
    }

template <class ItemType>
void LinkList<ItemType>::MakeEmpty()
        {
    NodeType* temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        delete temp;
    }
    length = 0;
  tail=NULL;
  head=NULL;
}

template <class ItemType>
void LinkList<ItemType>::InsertFirst(ItemType item)
{
    NodeType* location = new NodeType;
    location->info = item;
    location->next=NULL;

    if(IsEmpty())
        {
        head=location;
        tail=location;
        }
    else
    {
    location->next = head;
    head = location;
    }
    length++;
}

template <class ItemType>
void LinkList<ItemType>::InsertMiddle(ItemType itemAfter, ItemType item)
{
NodeType* location = new NodeType;
location->info = item;

if(itemAfter==tail->info)InsertLast(item);
 else
   {
   NodeType *cur=new NodeType;
   cur=head;
    while(cur->next!=NULL)
      {
      if(itemAfter==cur->info)break;
       else cur=cur->next;
     }

 if(itemAfter==cur->info)
 {
  location->next=cur->next;
  cur->next=location;
  length++;
  }
 }
}

template <class ItemType>
void LinkList<ItemType>::InsertLast(ItemType item)
 {
    NodeType* location = new NodeType;

    location->info = item;
    location->next=NULL;

    if(IsEmpty())
        {head=location;
        tail=location;}
    else
    {
    tail->next = location;
    tail = location;
    }
    length++;
}

template <class ItemType>
void LinkList<ItemType>::DeleteFirst()
{
NodeType *temp =new NodeType;
temp=head;
head=head->next;
length--;
delete temp;
}

template <class ItemType>
void LinkList<ItemType>::DeleteMiddle(ItemType item)
{
 if(item==head->info)DeleteFirst();

 else if(item==tail->info)DeleteLast();

 else
 {
   NodeType *cur=new NodeType;
   NodeType *prev=new NodeType;

   prev=NULL;
   cur=head;

 for(int i=1;i<=LengthIs();i++)
   {
  if(item==cur->info)break;
    else {prev=cur; cur=cur->next;}
 }

 if(item==cur->info)
 {prev->next=cur->next; length--; delete cur;}
 }
}

template <class ItemType>
void LinkList<ItemType>::DeleteLast()
{
 NodeType *prev =new NodeType;
 NodeType *cur =new NodeType;

 cur=head;

while(cur->next!=NULL)
{
    prev=cur;
    cur=cur->next;
}
tail=prev;
tail->next=NULL;
length--;
delete cur;
}
        //void Print();
template <class ItemType>
void LinkList<ItemType>::Display()
{
    NodeType* temp;
    temp=head;
    cout<<" The Link List are: "<<endl;
    while (temp!= NULL)
    {
        cout<<" " <<temp->info;
        temp = temp->next;
        if(temp!=NULL)cout<<"-->";
    }
     cout<<endl;
}

template <class ItemType>
LinkList<ItemType>::~LinkList()
{
    //dtor
    MakeEmpty();
}
