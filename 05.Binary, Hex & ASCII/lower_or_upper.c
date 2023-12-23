#include<stdio.h>

int main()
{
    char character;
    printf("Enter the character: ");
    scanf("%c",&character);
    if(character>='A' && character<='Z')
        printf("Uppercase\n");
    else if(character>='a' && character<='z')
        printf("Lowercase\n");
    else if(character>='0' && character<='9')
        printf("Digit\n");
    else
        printf("Others\n");
    return 0;
}
