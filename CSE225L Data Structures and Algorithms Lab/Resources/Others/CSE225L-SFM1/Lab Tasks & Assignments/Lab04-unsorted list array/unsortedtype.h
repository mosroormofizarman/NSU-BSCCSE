#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED

const int MAX_ITEMS = 5;

template<class ItemType>
class UnsortedType
{
    public:
        UnsortedType();
        void makeEmpty();
        bool isFull();
        int lengthIs();
        void insertItem(ItemType);
        void deleteItem(ItemType);
        void retrieveItem(ItemType&, bool&);
        void resetList();
        void getNextItem(ItemType&);
        void printList();

    protected:
        int length;
        ItemType data[MAX_ITEMS];
        int currentPosition;

};


#endif // UNSORTEDTYPE_H_INCLUDED
