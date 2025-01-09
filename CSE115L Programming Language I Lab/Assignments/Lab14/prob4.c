#include <stdio.h>

float getAverage(int arr [], int size)
{
    int i;
    float avg;
    float sum;
    for (i=0; i< size; i++)
    {
        sum += arr[i] ;
    }
    avg = sum/size;
    return avg;
}

void main()
{
    int n,i,s;
    printf("Enter array size: ");
    scanf("%d", &n);
    int a[n];
    printf("Array elements : ");
    for(i=0; i<n;i++){
        scanf("%d", &a[i]);
    }
    float avg = getAverage( a , n );
    printf("Average = %f \n", avg);
    printf("The elements > average are: ");
    for(i=0; i<n;i++){
        if(a[i] > (int)avg){
            printf("%d ", a[i]);
        }
    }
}


