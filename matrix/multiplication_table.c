#include<stdio.h>
#define num 11

int main()
{
    int i, j, matrix[num][num];

    for(i=1;i<num;i++)
        for(j=1;j<num;j++)
            matrix[i][j]=i*j;

    for(i=1;i<num;i++)
    {
       for(j=1;j<num;j++)
            printf("%5d ",matrix[i][j]);
        printf("\n");
    }

    return 0;
}

