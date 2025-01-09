#include<iostream>
#include "swaptc.h"
using namespace std;

template <class T>
SwapTC<T>::SwapTC()
{
    //ctor
}

template <class T>
void SwapTC<T>::getdata()
{
cout<<"Enter two numbers:";
cin>>a>>b;
}

template <class T>
void SwapTC<T>::swapv()
{
T temp;
temp=a;
a=b;
b=temp;
}

template <class T>
void SwapTC<T>::display()
{
cout<<"a="<<a<<"\tb="<<b<<"\n";
}


/*template <class T>
SwapTC<T>::~SwapTC()
{
    //dtor
}
*/

