#include<stdio.h>

int odd_finder(int n)
{
    if(n%2!=0)
        printf("1: Odd\n");
    else
        printf("0: Not Odd\n");
}

int main()
{
    int num;
    printf("Enter the number to find whether the number is odd or even: ");
    scanf("%d",&num);
    odd_finder(num);
    return 0;
}
