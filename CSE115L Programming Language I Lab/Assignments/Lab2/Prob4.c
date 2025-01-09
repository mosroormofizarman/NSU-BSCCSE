#include<stdio.h>

void main(){
    int  p,n,t;
    float a,r;
    printf("Enter P: ");
    scanf("%d", &p);
    printf("Enter r: ");
    scanf("%f", &r);
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter t: ");
    scanf("%d", &t);
    a = p*pow((1 + r/n),n*t);
    printf("Annual Compound  Interest  = %.2f", a);

}


