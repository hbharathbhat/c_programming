#include<stdio.h>
#include<stdlib.h>

int main()
{
    //This program finds the nth term in the arithmetic sequence
    float an,a1,n,d,sn;
    printf("Enter the first element: ");
    scanf("%f",&a1);
    printf("Enter the number of element: ");
    scanf("%f",&n);
    printf("Enter the difference: ");
    scanf("%f",&d);
    an=a1+(n-1)*d;

    sn=(a1+an)*n/2;
    printf("nth element is: %0.1f\n",an);
    printf("Sum of arithmetic sequence: %0.1f\n",sn);

    return 0;
}
