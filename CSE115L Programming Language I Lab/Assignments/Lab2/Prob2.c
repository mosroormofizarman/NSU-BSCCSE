#include<stdio.h>
#include<math.h>
//for left shifted n, then multiply by 2^n and for right shifted n, divide by 2^n
void main(){
    int n,m;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter m: ");
    scanf("%d", &m);
    printf("\nthe value of m*2^n = %f\n", m*pow(2,n));
    printf("value of m<<n = %d\n", m<<n);
    printf("the value of m/2^n  = %f\n", m/pow(2,n));
    printf("value of m>>n = %d\n", m>>n);
}

