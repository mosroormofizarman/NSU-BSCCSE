#include<stdio.h>

void main(){
    int sem;
    printf("Enter semester no : ");
    scanf("%d", &sem);
    switch(sem){
        case 0:
            printf("Invalid Semester");
            break;
        case 1:
        case 2:
        case 3:
            printf("You are a Freshman");
            break;
        case 4:
        case 5:
        case 6:
            printf("You are a Sophomore");
            break;
        case 7:
        case 8:
        case 9:
            printf("You are a Junior");
            break;
        case 10:
        case 11:
        case 12:
            printf("You are a Senior");
            break;
        default:
            printf("You must graduate soon!");
            break;
    }
}

