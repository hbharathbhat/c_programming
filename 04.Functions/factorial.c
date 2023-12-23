#include<stdio.h>

int factorial(int num)
{
    int i, result=1;
    for(i=1;i<=num;i++)
    {
        result=result*i;
    }
    return result;
}

int main()
{
    int fact=1,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    fact=factorial(n);
    printf("Factorial of %d is %d\n",n,fact);
    return 0;
}


