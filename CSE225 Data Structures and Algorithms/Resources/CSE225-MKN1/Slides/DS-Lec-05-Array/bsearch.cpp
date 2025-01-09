// C++ program to implement binary search in sorted array
#include <bits/stdc++.h>
#include<iostream>
#include <time.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int key)
{
    if (high <= low)
        return -1;
    int mid = (low + high) / 2; /*low + (high - low)/2;*/
    if (key == arr[mid])
        return mid;
    if (key > arr[mid])
        return binarySearch(arr, (mid+1), high, key);
    return binarySearch(arr, low, (mid-1), key);
}

/* Driver code */
int main()
{
    // Let us search 3 in below array
int arr[] = {5,6,7,8,9,10,12,14,15,17,19,22,23,26,27,29,31,33,34,35,36,37,41,43,45,47,55 };
    int n, key;
    //n=6;
    n = sizeof(arr) / sizeof(arr[0]);
    key = 37;

    cout << "Index: " << binarySearch(arr, 0, n-1, key) << endl;
    return 0;
}
