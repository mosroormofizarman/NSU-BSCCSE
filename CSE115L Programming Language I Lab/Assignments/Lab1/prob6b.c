#include<stdio.h>

void main(){
    float a,b,c,h;
    printf("Enter two lengths of triangle: ");
    scanf("%f %f", &a, &c);
    printf("\nEnter height: ");
    scanf("%f", &h);
    printf("\nEnter base: ");
    scanf("%f", &b);
    printf("perimeter of triangle = %f\n", a+b+c);
    printf("area of triangle = %f\n", 0.5*b*h);
}


