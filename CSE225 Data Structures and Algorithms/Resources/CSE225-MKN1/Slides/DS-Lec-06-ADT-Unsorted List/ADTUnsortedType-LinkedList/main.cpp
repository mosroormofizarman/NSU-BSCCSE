#include <iostream>
#include "ItemType.h"
#include "UnsortedType.h"

using namespace std;

int main()
{
    ItemType i1[5];
    for (int i=0; i<5; i++)
    {
        i1[i].Print();
    }

    cout<<endl;
    cout<<endl;

    i1[0].Initialize(5);
    i1[1].Initialize(9);
    i1[2].Initialize(3);
    i1[3].Initialize(95);
    i1[4].Initialize(85);

    for (int i=0; i<5; i++)
    {
        i1[i].Print();
    }

    cout<<endl;
    cout<<endl;

    UnsortedType u;

    cout<<u.GetLength();

    cout<<endl;
    cout<<endl;

    ItemType i2[4];

    i2[0].Initialize(5);
    i2[1].Initialize(7);
    i2[2].Initialize(6);
    i2[3].Initialize(9);

    u.PutItem(i2[0]);
    u.PutItem(i2[1]);
    u.PutItem(i2[2]);
    u.PutItem(i2[3]);

    u.PrintList();

    ItemType i3;

    i3.Initialize(1);
    u.PutItem(i3);
    u.PrintList();

    ItemType i4[4];
    i4[0].Initialize(4);
    i4[1].Initialize(5);
    i4[2].Initialize(9);
    i4[3].Initialize(10);

    bool found;

    u.GetItem(i4[0],found);
    if(!found)
        cout<<"Item NOT found"<<endl;
    else
        cout<<"Item IS found"<<endl;

    u.GetItem(i4[1],found);
    if(!found)
        cout<<"Item NOT found"<<endl;
    else
        cout<<"Item IS found"<<endl;

    u.GetItem(i4[2],found);
    if(!found)
        cout<<"Item NOT found"<<endl;
    else
        cout<<"Item IS found"<<endl;

    u.GetItem(i4[3],found);
    if(!found)
        cout<<"Item NOT found"<<endl;
    else
        cout<<"Item IS found"<<endl;

    cout<<endl;

    if(u.IsFull())
        cout<<"List is full"<<endl;
    else
        cout<<"List in not full"<<endl;
         cout<<endl;

    ItemType i5[3];

    i5[0].Initialize(5);
    i5[1].Initialize(1);
    i5[2].Initialize(6);

    u.DeleteItem(i5[0]);
    if(u.IsFull())
        cout<<"List is full"<<endl;
    else
        cout<<"List is not full"<<endl;
         cout<<endl;


    u.DeleteItem(i5[1]);
    u.PrintList();
    cout<<endl;
    cout<<endl;
    u.DeleteItem(i5[2]);
    u.PrintList();
    cout<<endl;
    cout<<endl;

    return 0;
}
