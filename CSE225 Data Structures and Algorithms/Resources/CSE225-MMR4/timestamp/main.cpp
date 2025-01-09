#include <iostream>

using namespace std;

int main()
{
    int length;
    cout << "Please enter the length:" << endl;
    cin>>length;

    int *a=new int[length];
    for(int iterate=0; iterate<length;iterate++)
    {

        cout<<"please enter the elements:"<<endl;
        cin>>a[iterate];
    }
    for(int pri=0; pri<length; pri++)
    {
        cout<<"elements are:"<<a[pri]<<endl;
    }
    delete[]a;
    a=NULL;
    return 0;
}
