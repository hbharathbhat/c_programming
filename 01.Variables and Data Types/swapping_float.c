#include<stdio.h>

int main()
{
    float a,b,temp;
    a=10.2;
    b=20.3;
    temp=0;

    printf("\tBefore values\n");
    printf("a= %0.1f\n",a);
    printf("b= %0.1f\n\n",b);

    temp=a;
    a=b;
    b=temp;


    printf("\tAfter values\n");
    printf("a= %0.1f\n",a);
    printf("b= %0.1f\n",b);
    printf("temp= %0.1f\n",temp);
    return 0;
}

