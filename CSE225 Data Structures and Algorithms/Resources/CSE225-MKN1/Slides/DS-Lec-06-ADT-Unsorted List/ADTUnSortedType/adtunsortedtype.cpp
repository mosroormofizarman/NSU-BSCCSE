#include "adtunsortedtype.h"

template <class ItemType>
ADTUnSortedType<ItemType>::ADTUnSortedType()
{
    length=0;
    cp=-1;
    //ctor
}
template <class ItemType>
ADTUnSortedType<ItemType>::~ADTUnSortedType()
{
    //dtor
}

template <class ItemType>
  bool ADTUnSortedType<ItemType>::IsFull ( )    //const;
  {
    return(length==MAX);
  }

  template <class ItemType>
  bool ADTUnSortedType<ItemType>::IsEmpty ( )  const
  {
    return(length==0);
  }

  template <class ItemType>
  int ADTUnSortedType<ItemType>::GetLength ( )  const  // returns length of list
  {
    return length;
  }

  template <class ItemType>
  int ADTUnSortedType<ItemType>::SearchItem ( ItemType  item)
  {
      int loc=-1,i=0;

      for(i=0;i<length;i++)
      {
         if(info[i]==item)
         {
             loc=i;break;
         }
         }

         if(i==length)loc=-1;

    return loc;
  }

  template <class ItemType>
  void ADTUnSortedType<ItemType>::PutItem ( ItemType  item )
  {

  if(!IsFull())
    {
    info[length]=item;
    length++;
   }
  }

  template <class ItemType>
  void ADTUnSortedType<ItemType>::DeleteItem (ItemType  item )
  {

   int i;
   i=SearchItem(item);
    info[i]=info[length-1];
    length--;
    }

template <class ItemType>
  void ADTUnSortedType<ItemType>::ResetList ( )
  {
   cp=-1;
  }

  template <class ItemType>
  ItemType ADTUnSortedType<ItemType>:: GetNextItem ()
  {
   cp++;
   return info[cp];
  }
