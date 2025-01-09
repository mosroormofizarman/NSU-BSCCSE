// C++ program to implement insert operation in an sorted array.
#include <iostream>
using namespace std;

int insertSorted(int arr[], int n, int key, int MAX)
{
    if (n >= MAX)
        return n;

    int i;
    for (i=n-1; (i>=0&&arr[i]>key);i--)
        arr[i+1]=arr[i];

    arr[i+1]=key;

    return (n+1);
}

/* Driver code */
int main()
{
    int arr[20] = { 12, 16, 20, 40, 50, 70,90,92,98,102 };
    int MAX = 20;
    int n = 6;
    int i, key = 26;

    cout<< "\nBefore Insertion: ";
    for (i=0; i<n; i++)
        cout << arr[i] << " ";

    // Inserting key
    n = insertSorted(arr, n, key, MAX);

    cout << "\nAfter Insertion: ";
    for (i = 0; i < n; i++)
        cout << arr[i]<< " ";

    return 0;
}
