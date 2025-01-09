#ifndef LINKLIST_H
#define LINKLIST_H

template <class ItemType>
class LinkList
{
    struct NodeType
    {
        ItemType info;
        NodeType* next;
    };

    public:
         LinkList();
        ~LinkList();

        bool IsEmpty();
        int LengthIs();

        void MakeEmpty();

        void InsertFirst(ItemType);
        void InsertMiddle(ItemType,ItemType);
        void InsertLast(ItemType);

        void DeleteFirst();
        void DeleteMiddle(ItemType);
        void DeleteLast();
        void Display();
    private:
        NodeType* head;
        NodeType* tail;
        int length;
        //NodeType* currentPos;
};

#endif // LINKLIST_H
