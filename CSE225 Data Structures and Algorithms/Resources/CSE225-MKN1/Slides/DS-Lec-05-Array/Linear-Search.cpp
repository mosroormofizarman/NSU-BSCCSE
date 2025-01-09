#include<iostream>
using namespace std;
int main()
{
int arr[] = { 55, 26, 17, 8, 9, 10,12,14,15,18,19,22,23,6,27,29,31,33,34,35 };
 int n = sizeof(arr) / sizeof(arr[0]);
    int i, num, index;

    cout<<"\nEnter a Number to Search: ";
    cin>>num;
    for(i=0; i<n; i++)
    {
        if(arr[i]==num)
        {
            index = i;
            break;
        }
    }
    if(i>=0&&i<n)
    cout<<"\nFound at Index No."<<index;
    else
        cout<<"\nNot Found.";
    cout<<endl;
    return 0;
}
