#include<stdio.h>

void findMinMax(int a,int b, int *ptrA,int *ptrB)
{
    if(a>b)
    {
        *ptrA=a;
        *ptrB=b;
    }
    else
    {
        *ptrB=a;
        *ptrA=b;
    }

}

void main()
{
    int a=5,b=7;
    int max, min;
    findMinMax(a,b,&max,&min);
    printf("Max between %d and %d = %d \n",a,b,max);
    printf("Min between %d and %d = %d \n",a,b,min);
    return 0;
}
