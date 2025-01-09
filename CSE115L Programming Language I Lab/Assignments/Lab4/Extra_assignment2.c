#include<stdio.h>

void main(){
    int sem;
    printf("Enter semester no : ");
    scanf("%d", &sem);
    if(sem == 0){
        printf("Invalid Semester");
    } else if(sem>=1 && sem<=3){
        printf("You are a Freshman");
    } else if(sem>=4 && sem<=6){
        printf("You are a Sophomore");
    } else if(sem>=7 && sem<=9){
        printf("You are a Junior");
    } else if(sem>=10 && sem<=12){
        printf("You are a Senior");
    } else{
        printf("You must graduate soon!");
    }
}
