#include <iostream>
#include "sortedtype.h"
#include "sortedtype.cpp"
#include "timestamp.h"

using namespace std;

int main()
{
    SortedType <int> st;

    int length;
    length=st.LengthIs();
    cout<<endl<<"---------------------------------------"<<endl<<endl;
    cout<<length<<endl;

    st.InsertItem(5);
    st.InsertItem(7);
    st.InsertItem(4);
    st.InsertItem(2);
    st.InsertItem(1);

    length=st.LengthIs();

    for(int i=0; i<length; i++)
    {
        int temp;
        st.GetNextItem(temp);
        cout<<temp<<" ";
    }
    int l=st.LengthIs();
    cout<<l<<endl;
    int temp=4;
    bool flag=false;
    st.RetrieveItem(temp,flag);
    if(flag)
        cout<<"item not found"<<endl;
    else
        cout<<"item is found"<<endl;
    st.ResetList();
    st.DeleteItem(1);
    st.ResetList();
    if(st.IsFull())
        cout<<"full"<<endl;
    else
        cout<<"not full"<<endl;
   for(int i=0;i<st.LengthIs();i++){
    int temp;
    st.GetNextItem(temp);
    cout<<" "<<temp<<endl;
   }


    return 0;
}
