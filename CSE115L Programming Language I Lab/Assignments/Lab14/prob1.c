#include<stdio.h>

void search(char arr[], char key){
    int i,f =0;
    for(i=0;arr[i]!='\0';i++){
       if(arr[i]==key){f=1;}
    }
    if(f==1){printf("found");}
    else{printf("not found");}
}

void main(){
    char a[100], b;
    printf("Enter string : ");
    gets(a);
    printf("Search key : ");
    scanf("%c", &b);
    search(a, b);
}
