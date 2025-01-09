#include "DynArr.h"
#include <iostream>

using namespace std;

int main()
{
    DynArr DynArr1;
    DynArr DynArr2(5);

    DynArr2.set(0,2);
    DynArr2.set(1,1);
    DynArr2.set(2,5);
    DynArr2.set(3,3);
    DynArr2.set(4,4);

    DynArr1.allocate(10);
    DynArr1.set(0,14);
    DynArr1.set(1,24);
    cout<<"Values are::: "<<endl;

    cout<<DynArr2.get(0)<<endl;
    cout<<DynArr2.get(1)<<endl;
    cout<<DynArr2.get(2)<<endl;
    cout<<DynArr2.get(3)<<endl;
    cout<<DynArr2.get(4)<<endl;

     cout<<"Values are first object::: "<<endl;

    cout<<DynArr1.get(0)<<endl;
    cout<<DynArr1.get(1)<<endl;
    return 0;
}
