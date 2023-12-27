#include<stdio.h>

int sum(int num)
{
    if(num<=9)
        return num;
    return num%10+sum(num/10);
}

int main()
{
    int result=0;
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    result=sum(n);
    printf("Result: %d\n",result);
    return 0;
}
