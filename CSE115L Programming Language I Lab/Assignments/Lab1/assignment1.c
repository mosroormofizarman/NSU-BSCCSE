#include<stdio.h>
void main(){
    float a, b, sum, diff;
    printf("Enter the first number: ");
    scanf("%f",&a);
    printf("Enter the second number: ");
    scanf("%f",&b);
    sum = a+b;
    diff = a-b;
    printf("Sum = %f \n", sum);
    printf("Difference = %f", diff);
}
