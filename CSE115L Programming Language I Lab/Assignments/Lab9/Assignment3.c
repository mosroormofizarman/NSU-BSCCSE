#include<stdio.h>

void main()
{
    int i,j,k,n;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            for(j=1; j<=i; j++)
            {
                if(j%2 == 0)
                    printf("%d ",j);
            }
        }
        else
        {
            for(j=1; j<=i; j++)
            {
                if(j%2 != 0)
                    printf("%d ",j);
            }

        }

        printf("\n");
    }
}

