#include<stdio.h>
#define size 5

int main()
{
    int arr[size];
    int i;

    printf("Enter 5 numbers of the array: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++)
    {
        if(arr[i]==arr[i-1]*arr[i+1])
            printf("Good Neighbors\n");
        else
            printf("No Good Neighbors\n");
    }
    return 0;
}
