#include<stdio.h>

int maximumnumber(int num)
{
    if(num>99 || num<10)
        printf("Enter a valid two digit number\n");
    else
    {
         if(num%10>num/10)
            printf("Maximum Digit is: %d\n",num%10);
        else if(num/10>=num%10)
            printf("Maximum Digit is: %d\n",num/10);
        else
            printf("Enter a valid number \n");
    }
}


int main()
{
    int a, max;
    printf("Enter the number: ");
    scanf("%d",&a);
    max=maximumnumber(a);
    return 0;
}
