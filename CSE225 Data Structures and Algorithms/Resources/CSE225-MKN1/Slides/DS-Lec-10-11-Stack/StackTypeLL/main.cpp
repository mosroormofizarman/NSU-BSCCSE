#include <iostream>
#include"StackTypeLL.cpp"
using namespace std;

int main()
{
    //char i;
    StackTypeLL<int> s;
if(s.isEmpty())cout<<"The stack is empty"<<endl;
   else cout<<"The stack is not empty"<<endl;

if(s.isFull())cout<<"The stack is Full"<<endl;
   else cout<<"The stack is not Full"<<endl;

    s.Push(10);
    s.Push(15);
    s.Push(34);

   if(s.isEmpty())cout<<"The stack is empty"<<endl;
   else cout<<"The stack is not empty"<<endl;

   if(s.isFull())cout<<"The stack is Full"<<endl;
   else cout<<"The stack is not Full"<<endl;

    s.printStack();

    return 0;
}
