#include<iostream>
using namespace std;

template <class T>
class calc
{
  public:
    T multiply(T x, T y);
    T add(T x, T y);
};


template <class T>
T calc<T>::multiply(T x, T y)
{
  return x*y;
}


template <class T>
T calc<T>::add(T x, T y)
{
  return x+y;
}

int main()
{
    calc<int> ci;
    calc<float> cf;
    calc<double> cd;

    cout<< "multiplication of 5 and 7 is :"<<ci.multiply(5,7)<<endl;
    cout<< "multiplication of 5.75 and 6.95 is :"<<cf.multiply(5.75,6.95);

}
