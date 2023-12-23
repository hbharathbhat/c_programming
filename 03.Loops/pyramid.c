#include<stdio.h>
int main()
{
    int num, i, j, k, bs, cv=1;
    printf("Enter the number you want: ");
    scanf("%d",&num);
    bs=num-1;

    for(i=1;i<=num;i++)
    {
        for(k=bs;k>=1;k--)
            printf(" ");

        for(j=1;j<=i;j++)
        {
            printf(" %d ",cv);
            cv+=1;
        }
        printf("\n");
        bs--;

    }
return 0;
}
