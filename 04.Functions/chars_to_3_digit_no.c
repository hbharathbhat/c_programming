#include<stdio.h>

int chars_to_digit(char letter01, char letter02, char letter03)
{
    if(letter01>='0' && letter02<='9')
    {
        if(letter02>='0' && letter02<='9')
        {
            if(letter03>='0' && letter03<='9')
            {
                return letter01;
                return letter02;
                return letter03;
            }
        }
    }
    else return 0;
}

int main()
{
    char let1,let2,let3;
    printf("Enter the 1st character: ");
    scanf("%c", &let1);
    printf("Enter the 2nd character: \n");
    scanf("%c", &let2);
    printf("Enter the 3rd character: \n");
    scanf("%c", &let3);
    printf("%c",chars_to_digit(let1,let2,let3));
    return 0;
}
