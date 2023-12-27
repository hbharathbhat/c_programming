#include<stdio.h>

int fibonacci(int num)
{
    if(num==0)
    {
        return 0;
    }
    if(num==1)
    {
        return 1;
    }
    return fibonacci(num-1)+fibonacci(num-2);
}

int main()
{
    int n;
    int result=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    result=fibonacci(n);
    printf("Result: %d\n",result);
    return 0;
}
