#include <iostream>
#include"swapcl.h"
using namespace std;
int main()
{
swapcl s;
s.getdata();
cout<<"\n Before swap:\n";
s.display();
s.swapv();
cout<<"\n\nAfter swap:\n";
s.display();
return 0;
}
