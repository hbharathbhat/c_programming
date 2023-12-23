#include<stdio.h>
#define size 10

int main()
{
    int pushups[size],i;
    for(i=0;i<=9;i++)
    {
        printf("Enter the number of push-ups you did on Day %d: ", i+1);
        scanf("%d",&pushups[i]);
    }

    for(i=9;i>=0;i--)
    {
        printf("%d days ago you did %d pushups\n",10-i-1,pushups[i]);
    }

    return 0;

}
