#include<stdio.h>
#include<math.h>

void main(){
    float a , b, c, x , y;
    printf("Enter a: ");
    scanf("%f", &a);
    printf("\nEnter b: ");
    scanf("%f", &b);
    printf("\nEnter c: ");
    scanf("%f", &c);
    x = (-b+sqrt(pow(b,2)-4*a*c))/2*a;
    y = (-b-sqrt(pow(b,2)-4*a*c))/2*a;
    printf("x  = %f and %f", x,y);
}
