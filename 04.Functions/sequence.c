#include<stdio.h>

int sequence(int num)
{

    int i;
    if(num>10)
        for(i=1;i<=num;i++)
            printf("9");
    else
        for(i=1;i<=num;i++)
            printf("%d",i);
    printf("\n");
}

int main()
{
    int n;
    printf("Enter the length: ");
    scanf("%d",&n);
    sequence(n);
    return 0;
}
