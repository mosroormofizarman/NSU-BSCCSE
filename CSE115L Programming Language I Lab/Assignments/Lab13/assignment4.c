#include<stdio.h>
#include <string.h>

void main(){
    char st[50];
    int i, flag =0;
    scanf("%s", st);
    int j=strlen(st)-1;
    for(i= 0; i<=j;i++){
        if(st[i] != st[j]){
            flag=1; break;
        }
        j--;
    }
    if(flag==1){
        printf("not palindrome");
    }else{
        printf("palindrome");
    }
}
