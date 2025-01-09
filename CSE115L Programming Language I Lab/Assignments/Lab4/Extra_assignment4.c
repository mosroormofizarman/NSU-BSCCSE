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
    if(c == 'N'){
        x+=d;
    } else if(c == 'S'){
        x-=d;
    } else if(c == 'E'){
        y+=d;
    } else if(c == 'W'){
        y-=d;
    }
    printf("New coordinate: (%d,%d)", x,y);

}
