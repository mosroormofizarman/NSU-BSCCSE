#include<stdio.h>

void main(){
    int p ,t , r;
    float i;
    printf("Enter Principal: ");
    scanf("%d", &p);
    printf("Enter Time: ");
    scanf("%d", &t);
    printf("Enter Rate: ");
    scanf("%d", &r);
    i = p*t*r/100;
    printf("Simple Interest  = %.2f", i);

}

