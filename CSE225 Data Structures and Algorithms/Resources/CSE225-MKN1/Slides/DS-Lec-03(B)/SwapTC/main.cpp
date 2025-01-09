#include <iostream>
#include "swaptc.h"
#include"swaptc.cpp"
using namespace std;

int main()
{
SwapTC<int> si;
cout<<"Swap for integer\n";
si.getdata();
cout<<"\n Before swap:\n";
si.display();
si.swapv();
cout<<"\n\nAfter swap:\n";
si.display();
cout<<"Swap for Float number\n";

SwapTC<float> sf;

sf.getdata();
cout<<"\n Before swap:\n";
sf.display();

sf.swapv();
cout<<"\n\nAfter swap:\n";
sf.display();

cout<<"Swap for Character\n";

SwapTC<char> sc;

sc.getdata();
cout<<"\n Before swap:\n";
sc.display();

sc.swapv();
cout<<"\n\nAfter swap:\n";
sc.display();

return 0;
}
