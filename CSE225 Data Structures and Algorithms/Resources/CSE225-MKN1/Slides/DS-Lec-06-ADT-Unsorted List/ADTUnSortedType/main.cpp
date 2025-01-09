#include <iostream>
#include"adtunsortedtype.h"
#include"adtunsortedtype.cpp"

using namespace std;

int main()
{
    ADTUnSortedType<int> un;
  int i;
    if (un.IsEmpty())
        cout<<"The list is empty "<<endl;
            else
        cout<<"The list is not empty"<<endl;
        un.PutItem(35);
        un.PutItem(45);
        un.PutItem(5);
        un.PutItem(15);

    cout<<"The length of the list is :"<<un.GetLength()<<endl;

      if (un.IsEmpty())
        cout<<"The list is empty "<<endl;
            else
        cout<<"The list is not empty"<<endl;

     for(i=0;i<un.GetLength();i++)
        cout<<" "<<un.GetNextItem();
        cout<<endl;
    i=un.SearchItem(15);
    cout<<"The index is :"<<i<<endl;

    un.DeleteItem(35);

    un.ResetList();
    for(i=0;i<un.GetLength();i++)
        cout<<"  " <<un.GetNextItem();

    return 0;
}
