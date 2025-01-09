#include<stdio.h>

void main(){
    float a, b;
    char c;
    printf("Enter operator: ");
    scanf("%c", &c);
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch(c){
        case '+':
            printf("%.1f + %.1f = %.1f", a, b, a+b);
            break;
        case '-':
            printf("%.1f - %.1f = %.1f", a, b, a-b);
            break;
        case '*':
            printf("%.1f * %.1f = %.1f", a, b, a*b);
            break;
        case '/':
            printf("%.1f / %.1f = %.1f", a, b, a/b);
            break;

    }
}


