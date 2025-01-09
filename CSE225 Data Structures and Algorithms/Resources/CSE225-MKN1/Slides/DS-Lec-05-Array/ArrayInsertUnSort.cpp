// C++ program to implement insert operation in an unsorted array.
#include <iostream>
#define MAX 10
using namespace std;

int insertunSorted(int arr[], int n, int key)
{
    if (n == MAX) //checking overflow
        return n;
    arr[n]=key;   //adding the item

    return (n+1);  // update the length of the array
}
// Driver Code
int main()
{
  int arr[MAX] = {12, 9, 16, 56};
    //int MAX=20;
    int n = 4;
    int i, key = 26;

    cout << "\n Before Insertion: ";
    cout<<"\n The lenth of the array is : "<<n<<endl;
    for (i = 0; i < n; i++)
        cout << arr[i]<< " ";

    // Inserting key
    n = insertunSorted(arr, n, key);
    cout << "\n After Insertion: " <<key<<endl;
    cout<<"\n The lenth of the array is : "<<n<<endl;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
