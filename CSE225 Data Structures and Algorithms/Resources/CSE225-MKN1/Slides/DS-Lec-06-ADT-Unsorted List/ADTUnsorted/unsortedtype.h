#ifndef UNSORTEDTYPE_H
#define UNSORTEDTYPE_H

const int MAX_ITEMS = 5;

template <class ItemType>
class UnsortedType
{
    public :
        UnsortedType();// Constructor

        void MakeEmpty();         //Transformer
        void InsertItem(ItemType);
        void DeleteItem(ItemType);

        bool IsEmpty();         //Observer
        bool IsFull();
        int LengthIs();

        void GetNextItem(ItemType&);   //Iterator
        int SearchItem(ItemType);
        void ResetList();

    private:
        int length;        //number of elements in the list
        ItemType info[MAX_ITEMS];   //list is maintain by array
        int currentPos;     //index of array
};

#endif // UNSORTEDTYPE_H
