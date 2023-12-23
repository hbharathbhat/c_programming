#include<stdio.h>

int maximumnumber(int num1,int num2)
{
    if(num1>num2)
        printf("Number 01 is the maximum number: %d\n",num1);
    else
        printf("Number 02 is the maximum number: %d\n",num2);
}


int main()
{
    int a, b, max;
    printf("Enter Number 01: ");
    scanf("%d",&a);
    printf("Enter Number 02: ");
    scanf("%d",&b);

    max=maximumnumber(a,b);
    return 0;
}
