#include<stdio.h>

char toLower(char c)
{
    if(c>='A' && c<='Z')
        return c-'A'+'a';
    else return -1;
}

int main()
{
    char letter;
    printf("Enter the character: ");
    scanf("%c",&letter);
    printf("%c",toLower(letter));
    return 0;
}
