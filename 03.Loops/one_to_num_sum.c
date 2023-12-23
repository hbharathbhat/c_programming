#include<stdio.h>
int main()
{
    int num, i, result=0;
    printf("Enter the number you want: ");
    scanf("%d",&num);

    for(i=0;i<=num;i++)
    {
        result=result+i;
    }
    printf("Total: %d",result);
    return 0;
}
