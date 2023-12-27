#include<stdio.h>


int totalEvenNumbers()
{
    int input;
    printf("Enter the numbers: ");
    scanf("%d",&input);
    if(input==-1)
        return 0;
    if(input%2==0)
        return 1+totalEvenNumbers();
    return totalEvenNumbers();
}

int main()
{
    int result=0;
    result=totalEvenNumbers();
    printf("Total Number of Even Numbers in the sequence: %d",result);
    return 0;
}
