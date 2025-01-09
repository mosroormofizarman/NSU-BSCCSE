#include<stdio.h>
#define PI 3.1415
float circumference(int r);
float area(int r);
void main(){
    int r;
    scanf("%d", &r);
    printf("diameter = %d\n", dia(r));
    printf("circumference = %.1f\n", circumference(r));
    printf("area = %.1f", area(r));
}

int dia(int r){
    return 2*r;
}

float circumference(int r){
    return 2*PI*r;
}

float area(int r){
    return PI*r*r;
}
