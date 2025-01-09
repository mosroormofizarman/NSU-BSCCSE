#include "sortedtype.h"


template<class ItemType>
sortedtype<ItemType>::sortedtype()
{
    length=0;
    currentPos=-1;
}

template<class ItemType>
sortedtype<ItemType>::~sortedtype()
{
    //dtor
}

template<class ItemType>
void sortedtype<ItemType>:: MakeEmpty()
{
length=0;
}
template<class ItemType>
void sortedtype<ItemType>:: InsertItem(ItemType item)
{
 int i=0;
 bool moretosearch =(i<length);
 if(!isFull())
 {
  while(moretosearch)
  {
      if(item>info[i])
       {
        i++;
        moretosearch=(i<length);
       }
       else
        moretosearch=false;
  }
   int index;
  for(index=length;index>i;index--)
      info[index]=info[index-1];

    info[i]=item;

  length++;

 }

}
template<class ItemType>
void sortedtype<ItemType>:: DeleteItem(ItemType item)
{
 int loc=0;
 while(item!=info[loc]&&loc<length)
    loc++;

 if(loc<length)
 {
     for(int i=loc+1;i<length;i++)
        info[i-1]=info[i];
     length--;
 }
}

template<class ItemType>
bool sortedtype<ItemType>:: isFull()
{
 return(length==MAX);
}
template<class ItemType>
bool sortedtype<ItemType>:: isEmpty()
{
  return(length==0);
}
template<class ItemType>
int sortedtype<ItemType>:: LengthIs()
{
  return length;
}
template<class ItemType>
void sortedtype<ItemType>:: searchItem(ItemType&, bool&)
{

}
template<class ItemType>
void sortedtype<ItemType>:: ResetList()
{
 currentPos=-1;
}
template<class ItemType>
void sortedtype<ItemType>:: GetNextItem(ItemType& item)
{
    currentPos++;
    item=info[currentPos];

}
