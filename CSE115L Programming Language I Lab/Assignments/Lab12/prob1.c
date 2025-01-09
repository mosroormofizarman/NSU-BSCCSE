#include<stdio.h>
#include<math.h>

float sum (int n);
void main(){
    int n;
    scanf("%d", &n);
    printf("Sum = %.1f\n", sum(n));
}

float fact(int n){
    if(n==0)
        return 1.0;
    else
        return n*fact(n-1);
}

float sum(int n){
    if(n==1){
        return 1.0;
    }else{
        /*
        int i;
        for(i=1; i<=n; i++){
            fact*=i;
        }
        */
        //printf("%f\n", fact);
        //printf("%f\n", n/fact);
        return ((n/fact(n)) + sum(n-1));
    }
}


