#include<stdio.h>

void main(){
    int rev = 0, i;
    char n[100];
    printf("Enter a number: ");
    scanf("%s", &n);

    for(i=0; n[i] != '\0'; i++){
        switch(n[i]){
            case '0':
                printf("Zero "); break;
            case '1':
                printf("One "); break;
            case '2':
                printf("Two "); break;
            case '3':
                printf("Three "); break;
            case '4':
                printf("Four "); break;
            case '5':
                printf("Five "); break;
            case '6':
                printf("Six "); break;
            case '7':
                printf("Seven "); break;
            case '8':
                printf("Eight "); break;
            case '9':
                printf("Nine "); break;
        }

    }
}
