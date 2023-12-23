#include<stdio.h>

int main()
{
    int a,b,temp;
    a=10;
    b=20;
    temp=0;

    temp=a;
    a=b;
    b=temp;

    printf("a= %d\n",a);
    printf("b= %d\n",b);
    printf("temp= %d\n",temp);
    return 0;
}
