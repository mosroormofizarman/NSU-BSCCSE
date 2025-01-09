#include"sortedtype.cpp"
#include <iostream>

using namespace std;
int main()
{
    sortedtype<int> sortlist;

    if(sortlist.isEmpty())
        cout<<"The list is Empty"<<endl;
    else
        cout<<"The list is not Empty"<<endl;

    cout<<"The length is :"<<sortlist.LengthIs()<<endl; //0

    sortlist.InsertItem(40);
     sortlist.InsertItem(10);
     sortlist.InsertItem(20);
      sortlist.InsertItem(30);

     sortlist.ResetList();

      int item;
      for(int i=0;i<sortlist.LengthIs();i++)
      {
          sortlist.GetNextItem(item);
          cout<<" "<<item;
      }
      cout<<endl<< "After Delete 20"<<endl;
    sortlist.DeleteItem(20);
   sortlist.ResetList();
  for(int i=0;i<sortlist.LengthIs();i++)
      {
          sortlist.GetNextItem(item);
          cout<<" "<<item;
      }

    return 0;
}
