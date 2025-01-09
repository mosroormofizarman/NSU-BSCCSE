#include<stdio.h>

int countSpace(char arr[]){
    int i,c =0;
    for(i=0;arr[i]!='\0';i++){
       if(arr[i]==' '||arr[i]=='\t'){
            c++;
       }
    }
    return c;
}

void main(){
    char a[100];
    printf("Enter string : ");
    gets(a);
    int m = countSpace(a);
    printf("%d",m);
}

