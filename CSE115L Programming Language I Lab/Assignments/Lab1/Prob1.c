#include<stdio.h>

//average of five numbers

void main(){
    float a,b,c,d,e,avg;
    printf("Enter 5 numbers: ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    avg = (a+b+c+d+e)/5;
    printf("Average is: %.2f", avg);
}

