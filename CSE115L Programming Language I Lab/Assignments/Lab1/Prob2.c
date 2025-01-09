#include<stdio.h>
#include<math.h>

//find height and area from right triangle's given hypotenuse and base

void main(){
    double b,hp,h,a;
    printf("Enter base: ");
    scanf("%lf", &b);
    printf("\nEnter hypotenuse: ");
    scanf("%lf", &hp);
    h = sqrt(pow(hp,2)-pow(b,2));
    a = 0.5*b*h;
    printf("Height is: %.2lf \n", h);
    printf("Area is: %.2lf", a);
}


