#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two numbers: \n");
    scanf("%d%d",&num1,&num2);
    if(num1==num2)
        printf("EQUAL\n");
    else
        printf("UNEQUAL\n");
    return 0;
}
