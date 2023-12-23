#include<stdio.h>

int even_finder(int n)
{
    if(n%2==0)
        printf("1: Even\n");
    else
        printf("0: Not Even\n");

}

int main()
{
    int num;
    printf("Enter the number to find whether the number is odd or even: ");
    scanf("%d",&num);
    even_finder(num);
    return 0;
}
