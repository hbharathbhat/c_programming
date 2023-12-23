#include<stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter three numbers: \n");
    scanf("%d%d%d",&num1,&num2, &num3);
    if(num1==num2)
    {
        if(num1==num3)
            printf("EQUAL\n");
        else
            printf("UNEQUAL\n");
    }
    else
        printf("UNEQUAL\n");
    return 0;
}

