#include<stdio.h>
#include<math.h>

void main(){
    float x, a, y, b, m;
    printf("Enter co-ordinates of first point(x,y): ");
    scanf("%f %f", &x, &y);
    printf("Enter co-ordinates of second point(x,y): ");
    scanf("%f %f", &a, &b);
    m = (y-b)/(x-a);
    printf("Slope = %.4f", slope);
}



