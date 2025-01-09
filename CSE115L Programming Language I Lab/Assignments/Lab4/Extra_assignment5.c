#include<stdio.h>

void main(){
    int x, y, d;
    char c;
    printf("Enter Direction: ");
    scanf("%c", &c);
    printf("Enter No. units towards direction: ");
    scanf("%d", &d );
    printf("Enter current coordinate (x and y positions): ");
    scanf("%d %d", &x, &y);
    switch(c){
        case 'W':
            x+=d;
            break;
        case 'E':
            x-=d;
            break;
        case 'N':
            y+=d;
            break;
        case 'S':
            y-=d;
            break;
    }

    printf("New coordinate: (%d,%d)", x,y);

}

