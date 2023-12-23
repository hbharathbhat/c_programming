#include<stdio.h>

int sequencegenerator(int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("9");
}


int main()
{
    int num;
    printf("Enter the number of 9's: ");
    scanf("%d",&num);
    sequencegenerator(num);
    return 0;
}
