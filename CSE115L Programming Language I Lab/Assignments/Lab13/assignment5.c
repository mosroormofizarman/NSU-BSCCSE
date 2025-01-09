#include<stdio.h>
#include <string.h>

void main(){
    char st[50];
    int i,count_s=0,count_c=0;
    scanf("%[^\n]", st);
    for(i= 0;i < strlen(st); i++){
        if(st[i]>='a' && st[i]<='z'){
            count_s++;
        }else if(st[i]>='A' && st[i]<='Z'){
            count_c++;
        }
    }
    printf("small letter = %d, capital letter = %d", count_s, count_c);
}

