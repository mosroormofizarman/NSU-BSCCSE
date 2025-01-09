#include<stdio.h>

void main(){
    int x, result;
    printf("Enter the n for 1^2+2^2+...+n^2 series: ");
    scanf("%d", &x);
    result = x*(x-1)*(2*x-1)/6;
    printf("Sum = %d", result);
}



