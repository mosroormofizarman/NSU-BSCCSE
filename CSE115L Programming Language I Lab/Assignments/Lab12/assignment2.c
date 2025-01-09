#include<stdio.h>
#include<math.h>

void main(){
    int n,r;
    printf("r: ");
    scanf("%d", &r);
    printf("n: ");
    scanf("%d", &n);
    printf("Sum = %d\n", sum(r,n));
}

int sum(int r, int n){
    if(n==0)
        return 1;
    else
        return pow(r,n)+sum(r,n-1);
}


