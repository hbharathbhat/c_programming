#include<stdio.h>
#define rows 4
#define columns 3

int main()
{
    int matrix[rows][columns],i,j;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("Enter the matrix[%d][%d] element: ",i,j);
            scanf("%d ",&matrix[i][j]);
        }
    }

    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%3d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
