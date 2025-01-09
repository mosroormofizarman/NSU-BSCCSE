#include<stdio.h>

void main(){
    float w,l;
    printf("Enter the width: ");
    scanf("%f", &w);
    printf("\nEnter height: ");
    scanf("%f", &l);
    printf("perimeter of rectangle = %f\n", 2*(w+l));
    printf("area of rectangle = %f", w*l);
}

