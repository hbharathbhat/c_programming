#include<stdio.h>

int main()

{
    int i=2,j=3,n,m;
    int a[2][3]={{3,2,1},{1,2,3}};
    /*printf("Enter the number of rows: ");
    scanf("%d",&i);
    printf("Enter the number of columns: ");
    scanf("%d",&j);

    printf("Hence you have a matrix of %dx%d",i,j);*/
    for(n=0;n<2;n++)
    {
        for(m=0;m<3;m++)
        {
            printf("%d ",a[n][m]);
        }
        printf("\n");
    }

    return 0;
}
