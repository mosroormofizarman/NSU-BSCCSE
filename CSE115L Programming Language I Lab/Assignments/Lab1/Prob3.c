#include<stdio.h>
#define PI 3.1416

//find area and perimeter of a circle from given radius

void main(){
    double r,a, p;
    printf("Enter the radius: ");
    scanf("%lf", &r);
    a = PI*r*r;
    p = 2*PI*r;
    printf("Area of the circle: %.1lf \n", a);
    printf("Perimeter of the circle: %.1lf", p);
}

