#include<stdio.h>

int countSearchKey(int arr[], int size, int key){
    int i,c =0;
    for(i=0;i<size;i++){
       if(arr[i]==key){c++;}
    }
    return c;
}

void main(){
    int n,i,s;
    printf("Enter array size: ");
    scanf("%d", &n);
    int a[n];
    printf("Array elements : ");
    for(i=0; i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("Search key : ");
    scanf("%d", &s);
    int m = countSearchKey(a,n,s);
    printf("search key appears %d times", m);
}

