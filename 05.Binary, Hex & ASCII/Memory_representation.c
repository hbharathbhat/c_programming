#include<stdio.h>
int main()
{
    char mychar;
    printf("Enter the Character: ");
    scanf("%c",&mychar);

    printf("Character: %c\n",mychar);
    printf("Decimal ASCII Code: %d\n",mychar);
    printf("Hexadecimal ASCII Code: 0x%x\n",mychar);
    return 0;
}
