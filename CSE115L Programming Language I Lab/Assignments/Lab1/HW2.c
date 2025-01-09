#include<stdio.h>

void main(){
    int x, result;
    printf("Enter the n for 1+2+3+...+n series: ");
    scanf("%d", &x);
    result = x*(x-1)/2;
    printf("Sum = %d", result);
}


