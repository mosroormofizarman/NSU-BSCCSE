#include<stdio.h>

//celsius to farenheit

void main(){
    float c,f;
    printf("Enter temperature in celsius: ");
    scanf("%f", &c);
    f= c*9/5+32;
    printf("Temperature in farenheit = %.1f", f);
}


