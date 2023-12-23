#include<stdio.h>


void printmaxmin(int n1,int n2)
{
    if(n1>n2)
    {
        printf("Maximum: %d\n",n1);
        printf("Minimum: %d\n",n2);
    }
    else
    {
        printf("Maximum: %d\n",n2);
        printf("Minimum: %d\n",n1);
    }
}

int main()
{
    int a,b;
    printf("Enter the number 01: ");
    scanf("%d",&a);
    printf("Enter the number 02: ");
    scanf("%d",&b);
    printmaxmin(a,b);
    return 0;
}

