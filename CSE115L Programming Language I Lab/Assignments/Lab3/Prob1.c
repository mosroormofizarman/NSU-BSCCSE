#include<stdio.h>

void main(){
    int month, days;
    printf("Enter month number: ");
    scanf("%d", &month);
    if(month==2){days =28;}
    else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){days=31;}
    else{days=30;}
    printf("number of days = %d", days);
}
