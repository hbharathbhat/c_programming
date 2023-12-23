#include<stdio.h>
int main()
{
    int num, pow, i, result=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter the power: ");
    scanf("%d",&pow);

    for(i=1;i<=pow;i++)
    {
        result=result*num;
    }
    printf("%d to the power of %d is %d\n",num,pow,result);
    return 0;

}
