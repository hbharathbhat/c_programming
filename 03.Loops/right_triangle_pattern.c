#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the triangle height: ");
    scanf("%d",&n);

    //Part I
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    printf("\n");

    //Part II
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
return 0;

}
