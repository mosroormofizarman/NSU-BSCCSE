#include <iostream>
#include"stacktype.cpp"

using namespace std;

int main()
{
   StackType<int> st;

   if(st.IsEmpty())
    cout<<"Stack is Empty"<<endl;
   else
    cout<<"stack is not Empty"<<endl;
   //st.Pop();
   st.Push(5);
   st.Push(7);
   st.Push(4);
   st.Push(2);
      if(st.IsEmpty())
    cout<<"Stack is Empty"<<endl;
   else
    cout<<"stack is not Empty"<<endl;

       if(st.IsFull())
    cout<<"Stack is Full"<<endl;
   else
    cout<<"stack is not Full"<<endl;

    StackType<int> tmp;

    while(!st.IsEmpty())
    {
     //cout<<st.Top()<<"\t";
     tmp.Push(st.Top());
     st.Pop();
    }
    cout<<endl;
    while(!tmp.IsEmpty())
    {
     cout<<tmp.Top()<<"\t";
     st.Push(tmp.Top());
      tmp.Pop();
    }
st.Push(3);
    while(!st.IsEmpty())
    {
     //cout<<st.Top()<<"\t";
     tmp.Push(st.Top());
     st.Pop();
    }
    cout<<endl;
     while(!tmp.IsEmpty())
    {
     cout<<tmp.Top()<<"\t";
     st.Push(tmp.Top());
      tmp.Pop();
    }
cout<<endl;
  if(st.IsFull())
    cout<<"Stack is Full"<<endl;
   else
    cout<<"stack is not Full"<<endl;
 return 0;
}
