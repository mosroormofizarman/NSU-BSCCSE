#include<stdio.h>
#define PI 3.1415
void main(){
    float r, a, p;
    printf("Enter the radius: ");
    scanf("%f",&r);
    a = PI * r *r;
    p = 2* PI *r;
    printf("Area of the circle: %f \n", a);
    printf("Perimeter of the circle: %f \n", p);
}
