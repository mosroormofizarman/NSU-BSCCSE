#include<iostream>
using namespace std;

template<class T>
T id(T x )
{
return x;
}

template<class T1, class T2>
T2 ex(T1 x, T2 y)
{
	cout<<x<<endl;;
	return y;
}

template<class T>
int f()
{
	T y;
	//int(y);
	return y;
}

main()
{
	cout<<id(12)<<endl;
	cout<<id("string")<<endl;
	cout<<id(true)<<endl;
	cout<<ex(1,2)<<endl;
	cout<<ex("abc","def")<<endl;
	cout<<f<double>()<<endl;; //must supply the type of the template
	cout<<f<int>()<<endl;;

}
