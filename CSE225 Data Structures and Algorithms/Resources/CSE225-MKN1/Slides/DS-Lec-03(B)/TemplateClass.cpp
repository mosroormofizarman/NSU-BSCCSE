#include<iostream>
using namespace std;

template<class X>
class input
{
  X data;
public:
input(char *s,X min,X max);
 };

template<class X>
input<X>::input(char *s,X min,X max)
{
   do{
      cout<<s<<":";
      cin>>data;
     }while(data<min||data>max);
}
main()
{
  input<int>i("enter int",0,10);
  input<char>c("enter char",'A','Z');
  cout<<"--end--";
  return 0;
}
