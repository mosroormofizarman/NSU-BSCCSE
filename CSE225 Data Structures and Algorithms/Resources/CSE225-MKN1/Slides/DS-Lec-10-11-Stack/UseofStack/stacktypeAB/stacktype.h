#ifndef STACKTYPE_H
#define STACKTYPE_H
#include<string>
//#include<stack>


const int MAX_ITEMS = 30;


class FullStack
// Exception class thrown
// by Push when stack is full.
{};
class EmptyStack
// Exception class thrown
// by Pop and Top when stack is emtpy.
{};

template <class ItemType>
class StackType
{
    public:
        StackType();
        bool IsFull();
        bool IsEmpty();
        void Push(ItemType);
        void Pop();
        ItemType Top();
    //private:
        int top;
        ItemType  items[MAX_ITEMS];
};
#endif // STACKTYPE_H
