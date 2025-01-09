#include<stdio.h>
#include <string.h>

int countCapital(char st[]){
    int i,count=0;
    for(i= 0;i < strlen(st); i++){
        if(st[i]>='A'&&st[i]<='Z'){
            count++;
        }
    }
    return count;
}

int countSmall(char st[]){
    int i,count=0;
    for(i= 0;i < strlen(st); i++){
        if(st[i]>='a'&&st[i]<='z'){
            count++;
        }
    }
    return count;
}

void main(){
    char st[50];
    gets(st);
    int count_c = countCapital(st);
    int count_s = countSmall(st);
    printf("capital = %d, small = %d", count_c, count_s);
}
