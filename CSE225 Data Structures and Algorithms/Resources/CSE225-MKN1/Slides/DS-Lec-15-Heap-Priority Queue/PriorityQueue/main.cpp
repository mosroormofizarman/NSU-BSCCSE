#include <iostream>
#include"priorityQueue.h"
#include "priorityQueue.cpp"
using namespace std;

int main()
{
    PQType<int> pq(100);

    pq.Enqueue(8);
    pq.Enqueue(52);

    pq.Enqueue(9);
    pq.Enqueue(170);
    pq.Enqueue(10);
    pq.Enqueue(110);

    int i;
    pq.Dequeue(i);
    cout<<i<<endl;
    int j;
    pq.Dequeue(j);
    cout<<j<<endl;
    int k;
    pq.Dequeue(k);
    cout<<k<<endl;



    return 0;
}
