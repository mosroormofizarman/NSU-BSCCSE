#ifndef SORTEDTYPE_H
#define SORTEDTYPE_H

const int MAX=5;

template<class ItemType>
class sortedtype
{
private:
        int length;
         ItemType info[MAX];
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
