#include<iostream>
using namespace std;

class swap1
{
private:
    int a,b;
public:
    void getdata();
    void swapv();
    void display();
};

void swap1::getdata()
{
cout<<"Enter two numbers:";
cin>>a>>b;
}

void swap1::swapv()
{
int temp;
temp=a;
a=b;
b=temp;
}

void swap1::display()
{
cout<<"a="<<a<<"\tb="<<b<<"\n";
}

main()
{
swap1 s;
s.getdata();
cout<<"\n Before swap:\n";
s.display();

s.swapv();

cout<<"\n\nAfter swap:\n";
s.display();
return 0;
}
