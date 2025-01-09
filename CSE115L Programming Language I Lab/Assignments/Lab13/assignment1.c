#include<stdio.h>
#include <string.h>

void main(){
    char st[50];
    int i;
    scanf("%[^\n]", st);
    for(i= strlen(st)-1; i>=0;i--){
        printf("%c", st[i]);
    }
}
