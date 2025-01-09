#include <iostream>
#include"QueueTypeLL.cpp"

using namespace std;

int main()
{
    QueueTypeLL<int> q;
    if(q.isEmpty())
    cout<<"Queue is Empty"<<endl;
    else
    cout<<"Queue is not Empty"<<endl;

    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    q.Enqueue(40);

    if(q.isEmpty())

    cout<<"Queue is Empty"<<endl;
    else
    cout<<"Queue is not Empty"<<endl;

    if(q.isFull())
    cout<<"Queue is Full"<<endl;
    else
    cout<<"Queue is not Full"<<endl;

   q.printQueue();

   q.Dequeue();
   q.printQueue();
   q.Dequeue();

q.printQueue();
    return 0;
}
