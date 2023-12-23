#include<stdio.h>
int main()
{
    int num, pow, temp_pow, result=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter the power: ");
    scanf("%d",&pow);
    temp_pow=pow;
    while(pow>0)
    {
        result=result*num;
        pow--;
    }
    printf("%d to the power of %d is %d\n",num,temp_pow,result);
    return 0;
}
