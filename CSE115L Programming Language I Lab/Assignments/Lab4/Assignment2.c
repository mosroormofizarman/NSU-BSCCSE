#include<stdio.h>

void main(){
    int x,y, am_500, am_100, am_50, am_20, am_10, am_5, am_2, am_1;
    printf("Enter amount:");
    scanf("%d", &x);
    printf("Enter number of notes:\n");
    printf("500: ");
    scanf("%d", &am_500);
    printf("100: ");
    scanf("%d", &am_100);
    printf("50: ");
    scanf("%d", &am_50);
    printf("20: ");
    scanf("%d", &am_20);
    printf("10: ");
    scanf("%d", &am_10);
    printf("5: ");
    scanf("%d", &am_5);
    printf("2: ");
    scanf("%d", &am_2);
    printf("1: ");
    scanf("%d", &am_1);
    int total;
    total = 500*am_500+100*am_100+50*am_50+20*am_20+10*am_10+5*am_5+2*am_2+1*am_1;
    if(total>=x){
        printf("Farhan can pay the bill by using the following counts of different notes:\n");
        y=x/500;
        if(y>=am_500){
            printf("500: %d\n", am_500);
            x = x-(am_500*500);
        }else if(y<=am_500){
            printf("500: %d\n", y);
            x = x-(y*500);
        }
        y=x/100;
        if(y>=am_100){
            //printf("%d\n", x);
            printf("100: %d\n", am_100);
            x = x-(am_100*100);
        }else if(y<=am_100){
            printf("100: %d\n", y);
            x = x-(y*100);
        }
        y=x/50;
        if(y>=am_50){
            printf("50: %d\n", am_50);
            x = x-(am_50*50);
        }else if(y<=am_50){
            printf("50: %d\n", y);
            x = x-(y*50);
        }
        y=x/20;
        if(y>=am_20){
            printf("20: %d\n", am_20);
            x = x-(am_20*20);
            //printf("%d\n", x);
        } else if(y<=am_20){
            printf("20: %d\n", y);
            x = x-(y*20);
        }
        y=x/10;
        if(y>=am_10){
            printf("10: %d\n", am_10);
            x = x-(am_10*10);
        } else if(y<=am_10){
            printf("10: %d\n", y);
            x = x-(y*10);
        }
        y=x/5;
        if(y>=am_5){
            printf("5: %d\n", am_5);
            x = x-(am_5*5);
        } else if(y<=am_5){
            printf("5: %d\n", y);
            x = x-(y*5);
        }
        y=x/2;
        if(y>=am_2){
            printf("2: %d\n", am_2);
            x = x-(am_2*2);
        } else if(y<=am_2){
            printf("2: %d\n", y);
            x = x-(y*2);
        }
        y=x/1;
        if(y>=am_1){
            printf("1: %d\n", am_1);
            x = x-(am_1*1);
        } else if(y<=am_1){
            printf("1: %d\n", y);
            x = x-(y*1);
        }
    }else{
        printf("Farhan can't pay");
    }


}





