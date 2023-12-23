#include<stdio.h>

int main()
{
    int i,j,a[3][4]={{3,2,5,6},{5,4,8,9},{4,8,7,10}};

    for(i=0;i<=3;i++)
    {
        printf("a[0][%d]=%d ",i,a[0][i]);
    }
    printf("\n");
    for(i=0;i<=3;i++)
    {
        printf("a[1][%d]=%d ",i,a[1][i]);
    }
    printf("\n");
    for(i=0;i<=3;i++)
    {
        printf("a[2][%d]=%d ",i,a[2][i]);
    }
    printf("\n\n");

    for(i=0;i<=3;i++)
    {
        printf("%d ",a[0][i]);
    }
    printf("\n");
    for(i=0;i<=3;i++)
    {
        printf("%d ",a[1][i]);
    }
    printf("\n");
    for(i=0;i<=3;i++)
    {
        printf("%d ",a[2][i]);
    }
    printf("\n");
    return 0;
}
