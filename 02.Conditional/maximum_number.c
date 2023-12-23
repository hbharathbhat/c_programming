#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num1, num2;
    printf("Enter the Number 1: ");
    scanf("%d",&num1);
    printf("Enter the Number 2: ");
    scanf("%d",&num2);
    if (num1>num2)
        printf("Number 1: %d\n",num1);
    else if(num1<num2)
        printf("Number 2: %d\n",num2);
    else
        printf("Both are Equal\n");
    return 0;
}
