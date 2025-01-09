#include <iostream>
#include"QueueType.cpp"
using namespace std;
int main()
{

 // cout<<"test";
   QUEUEType<int> q;
   q.EnQueue(10);
   q.EnQueue(20);
    q.EnQueue(30);

  cout<< "FRONT :"<<q.frontPrint() <<"\t\t";
  cout<< "REAR :"<<q.rearPrint() <<"\t\t";
  cout<<endl;
  cout<<"After one DeQueue";
  cout<<endl;
  q.DeQueue();

 cout<< "FRONT :"<<q.frontPrint() <<"\t\t";
  cout<< "REAR :"<<q.rearPrint() <<"\t\t";
  cout<<endl;

 cout<<"After one EnQueue";
  cout<<endl;
  q.EnQueue(70);
 cout<< "FRONT :"<<q.frontPrint() <<"\t\t";
  cout<< "REAR :"<<q.rearPrint() <<"\t\t";
  cout<<endl;
//QUEUEType
 return 0;
}
