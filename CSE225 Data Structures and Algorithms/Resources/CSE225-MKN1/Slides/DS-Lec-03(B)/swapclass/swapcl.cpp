#include <iostream>
#include "swapcl.h"

using namespace std;

swapcl::swapcl()
{
    //ctor
}

void swapcl::getdata()
{
cout<<"Enter two numbers:";
cin>>a>>b;
}

void swapcl::swapv()
{
int temp;
temp=a;
a=b;
b=temp;
}
void swapcl::display()
{
cout<<"a="<<a<<"\tb="<<b;
}
swapcl::~swapcl()
{
    //dtor
}
