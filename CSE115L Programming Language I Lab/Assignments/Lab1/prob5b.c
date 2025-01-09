#include<stdio.h>
#include<math.h>
#define PI 3.1215

void main(){
    float r,h;
    printf("Enter the radius: ");
    scanf("%f", &r);
    printf("\nEnter height: ");
    scanf("%f", &h);
    printf("volume of cylinder = %f", PI*pow(r,2)*h);
}

