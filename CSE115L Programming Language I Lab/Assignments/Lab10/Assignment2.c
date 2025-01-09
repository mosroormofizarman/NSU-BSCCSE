#include<stdio.h>

void main(){
    int a,b;
    scanf("%d %d", &a,&b);
    printf("%d^%d = %d\n", a,b,base(a,b));
}

int base(int a, int b){
    int i, sum=1;
    for(i=1; i<=b; i++){
        sum *= a;
    }
    return sum;
}



