#include<stdio.h>
int main()
{
    char opcode;
    int num1,num2;
    int result=0;
    printf("Enter the operation to be executed(+,-,*,/): ");
    scanf("%c",&opcode);

    printf("Enter two Numbers: \n");
    scanf("%d%d",&num1,&num2);

    switch(opcode)
    {
    case '+':
        result=num1+num2;
        printf("Addition of %d and %d is: %d\n",num1, num2, result);
        break;
    case '-':
        result=num1-num2;
        printf("Subtraction of %d and %d is: %d\n",num1, num2, result);
        break;
    case '*':
        result=num1*num2;
        printf("Multiplication of %d and %d is: %d\n",num1, num2, result);
        break;
    case '/':
        result=num1/num2;
        printf("Division of %d by %d is: %d\n",num1, num2, result);
        break;
    case '%':
        result=num1%num2;
        printf("Modulus of %d and %d is: %d\n",num1, num2, result);
        break;
    default:
        printf("ERROR\n");
        break;
    }
return 0;
}
