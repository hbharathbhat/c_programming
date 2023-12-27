#include<stdio.h>

int lucas(int num)
{
    if(num==0)
        return 2;
    if(num==1)
        return 1;
    return lucas(num-1)+lucas(num-2);
}

int main()
{
    int n;
    int result;
    printf("Enter the number: ");
    scanf("%d",&n);
    result=lucas(n);
    printf("Result: %d\n",result);
    return 0;
}
