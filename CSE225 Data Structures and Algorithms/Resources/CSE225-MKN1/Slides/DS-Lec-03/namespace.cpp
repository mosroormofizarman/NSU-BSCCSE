#include <iostream>

//using namespace std;

namespace ns1
{
    int x=9;
    int value(){ return 3*x; }
}
namespace ns2
{
    const double x = 100;
    double value() {  return 2*x; }
}
int main()
{
       std::cout<<"Enter a value for ns1 x\n";
       std::cin>>ns1::x;
        // Access variable x directly
    std::cout <<"Access variable x directly at ns1:"<<ns1::x << '\n';
    // Access value function within ns1
    std::cout <<"Value at namespace ns1:"<< ns1::value() << '\n'<<std::endl;


     std::cout <<"Access variable x directly at ns2:"<<ns2::x << '\n';
    // Access value function within ns2
    std::cout << "Value at namespace ns2:"<<ns2::value() << '\n';




    return 0;
}
