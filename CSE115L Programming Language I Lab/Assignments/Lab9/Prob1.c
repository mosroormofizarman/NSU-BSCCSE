#include<stdio.h>

void main(){
    int i,n,m,flag;
    scanf("%d",&m);
    for(n=2;n<=m;n++){
        //printf("%d",n);
        flag=1;
        for(i=2;i<n;i++){
            if(n%i==0){
                flag=0; break;
            }
        }
        if(flag == 0){
            printf("%d\n",n);
        }
    }
}
