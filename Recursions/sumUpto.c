#include<stdio.h>

int sumupto(int num)
{
    if(num==1)
        return 1;
    return num+sumupto(num-1);
}


int main()
{
    int n, result=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    result=sumupto(n);
    printf("Result: %d\n",result);
    return 0;
}
