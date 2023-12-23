#include<stdio.h>
int main()
{
    int number;
    printf("Enter your number: ");
    scanf("%d",&number);
    if(number/100>=1)
        printf("Triple Digit");
    else
        printf("Double Digit");
    return 0;
}
