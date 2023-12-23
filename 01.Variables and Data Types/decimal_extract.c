#include<stdio.h>

int main()
{
    float a,n;
    printf("Enter the number in decimal format: ");
    scanf("%f",&n);
    a=n-(int)n;
    printf("Integer part: %d\n",(int)n);
    printf("Decimal part: %0.5f\n",a);
    return 0;
}
