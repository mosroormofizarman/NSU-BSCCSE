// C++ program to implement delete operation in a unsorted array
#include <iostream>
using namespace std;
// To search a key to be deleted
int findElement(int arr[], int n,int key);

// Function to delete an element
int deleteElement(int arr[], int n, int key)
{
    int k = findElement(arr, n, key);
    if (k == - 1)
    {
        cout << "Element not found";
        return n;
    }
    arr[k]=arr[n-1];
    return n-1;
}

// Function to implement search operation
int findElement(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == key)
            return i;

    return - 1;
}

// Driver code
int main()
{
    int i;
    int arr[] = {10,50,30,40,20,55,75};

    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    cout << "Array before deletion\n";
    cout<<"The lenth of the array is :"<<n<<endl;
    for (i = 0; i < n; i++)
    cout << arr[i] <<" " ;

    n = deleteElement(arr, n, key);

    cout << "\n\nArray after deletion of :"<<key<<endl;
    cout<<"The lenth of the array is :"<<n<<endl;
    for (i = 0; i < n; i++)
    cout << arr[i] << " ";

    return 0;
}
