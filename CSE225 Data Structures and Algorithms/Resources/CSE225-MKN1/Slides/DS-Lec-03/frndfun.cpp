#include<iostream>
using namespace std;
class B;

class A
{
  private:
  int i;
  int j;

  friend B;
  void disp(){cout<<i<<endl;}
};

class B
{
public:
	void set(int n)
	{
	  A a;
	  a.i=n;
	  a.j=n+1;
	  a.disp();
	}
};
int main()
{
  B b;
  b.set(2);
  b.set(100);

  return 0;
}
