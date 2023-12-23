#include<stdio.h>
int main()
{
    int i, num, j, result=0;
    printf("Enter the number you want: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        if(i%3==0 && i%5==0)
        {
            printf("%d, ",i);
            result=result+i;
        }
    }

    printf("\nResult: %d\n",result);
    return 0;
}
