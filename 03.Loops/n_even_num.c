#include<stdio.h>
int main()
{
    int num, i, result=0;
    printf("Enter the number you want: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        result=result+2;
        printf("%d, ",result);
    }
    return 0;
}
