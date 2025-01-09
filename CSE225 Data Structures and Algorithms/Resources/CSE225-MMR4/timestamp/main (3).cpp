#include<iostream>
#include"itemtype.h"
#include"sortedtype.h"
using namespace std;

int main()
{
    SortedType s;
    if(s.IsFull())
        cout<<"full"<<endl;
    else
        cout<<"not full"<<endl;
    ItemType it[6];
    for(int i=0;i<5;i++)
    {
        int age;
        string name;
        cin>>age;
        getline(cin,name);
        it[i].Initialize(age,name);
        s.InsertItem(it[i]);
    }
    s.PrintListContents();
    int temp;
    cin>>temp;
    bool flag =false;
    for(int i=0;i<5;i++)
    {
        if(it[i].getValue()==temp)
            flag =true;
            break;
    }
    if(flag)
        cout<<"contain"<<endl;
    else
        cout<<"not contain"<<endl;
    int index;
    int b;
    cin>>b;
    for(int i=0;i<5;i++)
    {

        if(it[i].getValue()==b){
            index=i;
            break;
        }

    }
    s.DeleteItem(it[index]);
    s.ResetList();
    s.PrintListContents();
    it[5].Initialize(35,"Ananta ");
    s.InsertItem(it[5]);
    s.ResetList();
    int sum=0;
    for(int i=0;i<s.LengthIs();i++){
         ItemType temp;
         temp=s.GetNextItem();
         int value=temp.getValue();
         sum+=value;

    }
    int l=s.LengthIs();
    double avg=0;
    avg=sum/l;
    cout<<l<<endl;







}
