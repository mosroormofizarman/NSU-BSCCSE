#include <iostream>
#include "sortedtype.h"
#include "sortedtype.cpp"
using namespace std;

int main()
{

    SortedType<int> s;
    cout << "Length is = " << s.LengthIs() << endl;
    s.InsertItem(5);
    s.InsertItem(7);
    s.InsertItem(4);
    s.InsertItem(2);
    s.InsertItem(1);


    int n1 = 6;
    bool b1;
    s.RetrieveItem(n1,b1);
    if(b1==true)
    {
        cout << "Item is found" << endl;
    }
    else
    {
       cout << "Item is not found" << endl;
    }

    int n2 = 5;
    bool b2;
    s.RetrieveItem(n2,b2);
    if(b2==true)
    {
        cout << "Item is found" << endl;
    }
    else
    {
       cout << "Item is not found" << endl;
    }

    bool q= s.IsFull();
    if(q==true)
    {
        cout<<"List is full"<<endl;
    }
    else
    {
        cout<<"List is not Full"<<endl;
    }

    s.DeleteItem(1);


    bool v=s.IsFull();
    if(v==true)
    {
        cout<<"List is full"<<endl;
    }
    else
    {
        cout<<"List is not full"<<endl;
    }



    return 0;
}
