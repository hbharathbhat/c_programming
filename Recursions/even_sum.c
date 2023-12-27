#include<stdio.h>


int even_sum(int num)
{
    int input;
    printf("Enter the sequence: ");
    scanf("%d ",&input);
    if(input==-1)
        return 0;
    int sum=input+sumof(input-1);
    if(sum%2==0)
        return 1;
    if(sum%2!=0)
        return 0;
}

int main()
{
    int result=1;
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    result=even_sum(n);
    printf("Result: %d\n",result);
    return 0;
}

