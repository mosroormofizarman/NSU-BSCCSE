
#include<stdio.h>

void main()
{
    int i, j, n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int a[n][n];

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n");

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i<j)
            {
                printf("\t%d", a[i][j]);
            }
        }
        printf("\n");
    }
}
