#include<stdio.h>

int numberCount(int num)
{
    int input;
    printf("Please enter the number: ");
    scanf("%d",&input);
    if(input==-1)
        return 0;
    if(input<num)
        return 1+numberCount(num);
    return numberCount(num);
}

int main()
{
    int n;
    int result;
    printf("Enter the number: ");
    scanf("%d",&n);
    result=numberCount(n);
    printf("Result: %d\n",result);
    return 0;
}
