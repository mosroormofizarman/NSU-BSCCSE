#include <iostream>
#include"sortedtype.cpp"
#include"sortedtype.h"

using namespace std;

int main()
{
    sortedtype<int> sl;
     sl.InsertItem(15);
     sl.InsertItem(25);
     sl.InsertItem(10);
     sl.InsertItem(100);
     int i=0,item;
     for(i=0;i<sl.LengthIs();i++)
     {sl.GetNextItem(item);
        cout<<" "<<item;}
        cout<<endl;
    sl.DeleteItem(15);
    sl.ResetList();
    cout<<"After delete 15"<<endl;
for(i=0;i<sl.LengthIs();i++)
     {sl.GetNextItem(item);
        cout<<" "<<item;}
        cout<<endl;

    ///cout << "Hello world!" << endl;
    return 0;
}
