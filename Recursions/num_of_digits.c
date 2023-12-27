#include<stdio.h>

int noOfDigits(int num)
{
    if(num<=9)
        return 1;
    return 1+noOfDigits(num/10);
}

int main()
{
    int result=1;
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    result=noOfDigits(n);
    printf("Result: %d\n",result);
    return 0;
}
