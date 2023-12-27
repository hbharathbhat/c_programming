#include<stdio.h>

int sumOfEven()
{
    int input;
    printf("Enter the numbers: ");
    scanf("%d",&input);
    if(input==-1)
        return 0;
    if(input%2==0)
        return input+sumOfEven();
    return sumOfEven();
}

int main()
{
    int result=0;
    result=sumOfEven();
    printf("Sum of Even Numbers in the sequence: %d",result);
    return 0;
}
