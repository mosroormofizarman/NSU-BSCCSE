#include <iostream>
using namespace std;

// A template function to implement bubble sort.
template <class T>
void bubbleSort(T a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j] < a[j-1])
              swap(a[j], a[j - 1]);
}

// Driver Code
int main() {
    int a[5] = {10, 50, 30, 40, 20};
    int n = 5;

    float b[5] = {10.5, 50.7, 30.9, 40.4, 20.2};
    int n1 = 5;
    // calls template function
    bubbleSort(a, 5);
         cout << " Sorted array for integer : ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    bubbleSort(b,5);
    cout << " Sorted array for float : ";
    for (int i = 0; i < n1; i++)
        cout << b[i] << " ";
    cout << endl;

  return 0;
}
