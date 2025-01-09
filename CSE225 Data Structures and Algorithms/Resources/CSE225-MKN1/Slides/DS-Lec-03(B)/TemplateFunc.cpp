#include<iostream>
using namespace std;
template<class T>
T min(T arg1,T arg2,T arg3)
{
  T v;
  if((arg1<arg2)&&(arg2<arg3))
     v=arg1;
  else if((arg2<arg1)&&(arg2<arg3))
     v=arg2;
  else
     v=arg3;
  return v;
};

int main()
{
   cout<<"min(100,200,300)=" << min<int> (100,200,300)<<endl;
   cout<<"min(2.345,1.234,3.456)=" << min<double> (2.345,1.234,3.456)<<endl;
   cout<<"min('c','a','b')=" << min<char> ('c','a','b')<<endl;

   cout<<"min(100,200,300)=" << min(100,200,300)<<endl;
   cout<<"min(2.345,1.234,3.456)=" << min(2.345,1.234,3.456)<<endl;
   cout<<"min('c','a','b')=" << min('c','a','b')<<endl;

   return 0;
}
