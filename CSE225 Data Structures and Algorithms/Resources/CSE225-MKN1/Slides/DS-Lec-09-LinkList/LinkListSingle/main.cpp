#include <iostream>
#include"linklist.cpp"

using namespace std;

int main()
{
    LinkList<int> ll;

    ll.InsertFirst(15);
    ll.InsertFirst(10);
    ll.Display();


    ll.InsertLast(50);
    ll.Display();

    cout<<" adding 70 After 15"<<endl;
    ll.InsertMiddle(15,70);

    ll.Display();

    cout<<"After Deleting the First Element"<<endl;
    ll.DeleteFirst();
    ll.Display();

    cout<<"After Deleting the Last Element"<<endl;
    ll.DeleteLast();
    ll.Display();

    return 0;
}
