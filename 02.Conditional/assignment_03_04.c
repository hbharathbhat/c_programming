#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);

    if(number>0)
    {
        printf("1\n");
        printf("%d\n",number);
    }
    else if(number<0)
    {
        printf("-1\n");
        printf("%d\n",number*(-1));
    }
    else
        printf("0\n");

    return 0;
}

