#ifndef SORTEDTYPE_H
#define SORTEDTYPE_H
const int MAX_ITEM=5;
template<class ItemType>
class sortedtype
{
   private:
       int length;
       ItemType info[MAX_ITEM];
       int currentPos;
    public:
        sortedtype();
        void MakeEmpty();
        void InsertItem(ItemType);
        void DeleteItem(ItemType);
        bool isFull();
        bool isEmpty();
        int LengthIs();
        void searchItem(ItemType&, bool&);
        void ResetList();
        void GetNextItem(ItemType&);
        ~sortedtype();
};

#endif // SORTEDTYPE_H
