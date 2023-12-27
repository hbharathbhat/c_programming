#include<stdio.h>

void print(int num)
{
    if(num>=1)
    {
       print(num-1);
       printf("%d ",num);
    }
}

void print1(int num)
{
    if(num>=1)
    {
        printf("%d ",num);
        print(num-1);
    }
}

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    print(num);
    printf("\n");
    print1(num);
    return 0;
}
