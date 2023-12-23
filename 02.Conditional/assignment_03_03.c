#include<stdio.h>
int main()
{
    int number,d1,d2,d3;
    printf("Enter a three digit number: \n");
    scanf("%d",&number);
    d1=number/100;
    d2=(number/10)-(d1*10);
    d3=(number%10);
    printf("%d ",d1);
    printf("%d ",d2);
    printf("%d\n",d3);
    if(d1<=d2)
    {
        if(d2<=d3)
            printf("ASCENDING (%d < %d < %d)\n",d1,d2,d3);
        else
            printf("NOT ASCENDING\n");
    }
    else
        printf("NOT ASCENDING\n");

    return 0;
}
