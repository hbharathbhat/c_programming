#include<stdio.h>

int factorial(int num)
{
    if(num==1)
        return 1;
    return num*factorial(num-1);
}


int main()
{
    int result=1;
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    result=factorial(n);
    printf("Result: %d\n",result);
    return 0;
}
