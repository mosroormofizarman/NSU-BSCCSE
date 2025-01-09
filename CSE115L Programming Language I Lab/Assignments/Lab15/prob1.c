#include<stdio.h>

void main(){
    int a[3][5] ={{1,2,3,4,5},
                {2,3,4,5,6},
                {3,4,5,6,7}};

    int n,i,j;
    scanf("%d", &n);
    for(i=0; i<3; i++){
        for(j=0; j<5; j++){
            printf("%d ", n*a[i][j]);
        }
        printf("\n");
    }


}
