#include<stdio.h>
#include <string.h>

void main(){
    char st[50];
    int i,count_v=0,count_c=0;
    scanf("%[^\n]", st);
    for(i= 0;i < strlen(st); i++){
        if(st[i]=='a'||st[i]=='e'||st[i]=='o'||st[i]=='i'||st[i]=='u'||st[i]=='A'||st[i]=='E'||st[i]=='O'||st[i]=='I'||st[i]=='U'){
            count_v++;
        }else{
            count_c++;
        }
    }
    printf("vowel = %d, consonant = %d", count_v, count_c);
}
