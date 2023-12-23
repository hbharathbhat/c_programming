#include<stdio.h>

int main()
{
    int phonenumber[10], i, max_num, max_index;
    for(i=0;i<=9;i++)
    {
        printf("Enter your your phone number digit %d: ",i+1);
        scanf("%d",&phonenumber[i]);
    }

    max_num=phonenumber[0];

    for(i=0;i<=9;i++)
    {
        if(max_num<phonenumber[i])
        {
            max_num=phonenumber[i];
            max_index=i;
        }
    }

    printf("Maximum Number: %d\n",max_num);
    printf("Index of Maximum Number: %d\n",max_index);
    return 0;
}
