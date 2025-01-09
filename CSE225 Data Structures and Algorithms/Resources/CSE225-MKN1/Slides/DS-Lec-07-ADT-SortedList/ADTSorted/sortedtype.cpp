#include "sortedtype.h"

template <class ItemType>
sortedtype<ItemType>::sortedtype()
{
    length = 0;
    currentPos = - 1;
}

template <class ItemType>
void sortedtype<ItemType>::MakeEmpty()
{
    length=0;
}

template <class ItemType>
bool sortedtype<ItemType>::isFull()
{
    return(length==MAX_ITEM);
}

template <class ItemType>
bool sortedtype<ItemType>::isEmpty()
{
    return(length==0);
}

template <class ItemType>
int sortedtype<ItemType>::LengthIs()
{
    return length;
}
template <class ItemType>
void sortedtype<ItemType>::ResetList()
{
    currentPos=-1;
}

template <class ItemType>
void sortedtype<ItemType>::GetNextItem(ItemType &item)
{
    currentPos++;
    item=info[currentPos];
}
template <class ItemType>
void sortedtype<ItemType>::InsertItem(ItemType item)
{
  if(!isFull()){
    int i = 0;
    bool moreToSearch = (i < length);
    while (moreToSearch) //Finding the index for adding
    {
        if(item > info[i])
        {
            i++;
            moreToSearch = (i < length);
        }
        else if(item < info[i])
            moreToSearch = false;
    }
//Making room for new element
for (int index = length; index > i; index--)
info[index] = info[index - 1];
info[i] = item;//Adding New element
length++;//Increase the length
  }
}
template <class ItemType>
void sortedtype<ItemType>::DeleteItem(ItemType item)
{
    int location = 0;

    while (item != info[location]&&location<length)
        location++;

    if(location<length)
    {
        for (int index = location + 1; index < length; index++)
        info[index-1] = info[index];
         length--;
        }


}
template <class ItemType>
void sortedtype<ItemType>::searchItem(ItemType& item, bool& found)
{
    int midPoint, first=0, last=length-1;
    bool moreToSearch = (first <= last);
    found = false;
    while (moreToSearch && !found)
    {
        midPoint = (first + last) / 2;
        if(item < info[midPoint])
        {
            last = midPoint-1;
            moreToSearch = (first <= last);
        }
        else if(item > info[midPoint])
        {
            first = midPoint + 1;
            moreToSearch = (first <= last);
        }
        else if (item==info[midPoint])
        {
            found = true;
            item = info[midPoint];
        }
        else
            found=false;
    }
}

template <class ItemType>
sortedtype<ItemType>::~sortedtype()
{
    //cout<<"Destructor"<<endl;
}
