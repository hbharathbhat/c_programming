#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("enter number 1: ");
    scanf("%d",&n1);
    printf("enter number 2: ");
    scanf("%d",&n2);
    printf("enter number 3: ");
    scanf("%d",&n3);

    if(n1>n2)
    {
        if(n1>n3)
            printf("Number 1: %d\n",n1);
        else
            printf("Number 3: %d\n",n3);
    }
    else
    {
        if(n2>n3)
            printf("Number 2: %d\n",n2);
        else
            printf("Number 3: %d\n",n3);
    }

    return 0;

}
