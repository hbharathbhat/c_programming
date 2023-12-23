
/* Multiplication by Russian peasant method*/


#include<stdio.h>
int f(int a, int b);
int main()
{
        int a,b;
        printf("Enter two numbers below ::\n ");
        printf("\nEnter 1st number :: ");
        scanf("%d",&a);
        printf("\nEnter 2nd number :: ");
        scanf("%d",&b);
        printf("\nMultiplication of two numbers :: ");
        printf("%d\n",f(a,b));

        return 0;

}
int f(int a, int b)
{
        if(a==0) /*if we write if(a==1) return b; then 0 * b can not be computed, so this condition*/
                return 0;
        if(a%2!=0)  /*if a is odd*/
            return b + f(a/2, b*2);
            return f(a/2, b*2);
}
