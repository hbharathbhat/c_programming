#include<stdio.h>
#define SIZE 7

int main()
{
    int phonenumber[SIZE], i, max_num, max_index;
    for(i=0;i<SIZE;i++)
    {
        printf("Enter your your phone number digit %d: ",i+1);
        scanf("%d",&phonenumber[i]);
    }

    max_num=phonenumber[0];

    for(i=0;i<SIZE;i++)
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

