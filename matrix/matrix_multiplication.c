#include<stdio.h>
#define row1 3
#define row2 3
#define column1 3
#define column2 3

int main()
{
    int i,j,matrix1[row1][column1],matrix2[row2][column2],result[3][3];
    matrix1[row1][column1]={1,2,3,4,5,6,7,8,9};
    matrix2[row2][column2]={1,2,3,4,5,6,7,8,9};
    /*for(i=0;i<row1;i++)
    {
        for(j=0;j<column1;j++)
        {
            printf("Enter the 1st matrix[%d][%d] element: ",i,j);
            scanf("%d ",&matrix1[i][j]);
        }
    }
    for(i=0;i<row2;i++)
    {
        for(j=0;j=column2;j++)
        {
            printf("Enter the 2nd matrix[%d][%d] element: ",i,j);
            scanf("%d ",&matrix2[i][j]);
        }
    }*/

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            result[i][j]=(matrix1[i][j]*matrix2[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d ",result[i][j]);
        }
        printf("\n");
    }
}
