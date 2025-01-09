#include<stdio.h>

void main(){
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    switch(((year%4 == 0) && (year%100 !=0)) || (year%400==0)){
        case 1:
            printf("leap year");
            break;
        case 0:
            printf("not leap year");
            break;
    }
}


