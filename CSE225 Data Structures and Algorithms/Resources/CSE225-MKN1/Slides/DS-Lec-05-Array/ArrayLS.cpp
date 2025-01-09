// C++ program to implement linear
#include<bits/stdc++.h>
using namespace std;
// Function to implement search operation
int LinearSearch(int arr[], int n,  int item)
{
    int i;
    for (i=0; i<n; i++)
         {
            cout<<i<<endl;
        if (arr[i] == item)
        return i;}

    return -1;
}

// Driver Code
int main()
{
    int arr[]={12, 34, 10, 6, 40,100,0,0,0,0,0,105};

    int n = sizeof(arr)/sizeof(int);
    cout<<n<<endl;

    int item = 105;
    int position = LinearSearch(arr, n, item);
      if (position == - 1)
        cout << "Element not found"<<endl;
    else
        cout << "Element Found at Position: " << position + 1;

    return 0;
}

/*cout<<"size of char is:"<<sizeof(char)<<endl;
    cout<<"size of int is:"<<sizeof(int)<<endl;
    cout<<"size of long long int is:"<<sizeof(long long int)<<endl;
    cout<<"size of float is:"<<sizeof(float)<<endl;
    cout<<"size of double is:"<<sizeof(double)<<endl;
*/
