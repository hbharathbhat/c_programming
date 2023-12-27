#include<stdio.h>

int totalChar(char alphabet)
{
    char input;
    printf("Enter the alphabets: ");
    scanf("%c",&input);

    if(input=='$')
        return 0;
    if(input==alphabet)
        return 1+totalChar(alphabet);
    return totalChar(alphabet);

}


int main()
{
    char alpha;
    int result=0;
    printf("Enter the alphabet: ");
    scanf("%c",&alpha);
    result=totalChar(alpha);
    printf("%d",result);
    return 0;
}
