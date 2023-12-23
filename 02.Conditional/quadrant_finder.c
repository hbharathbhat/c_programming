#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the X co-ordinate: ");
    scanf("%d",&x);
    printf("Enter the Y co-ordinate: ");
    scanf("%d",&y);
    printf("%d,%d\n",x,y);

    if(x==0 && y==0)
        printf("Origin\n");
    else if(x>=0 && y>=0)
        printf("I Quadrant\n");
    else if(x<=0 && y>=0)
        printf("II Quadrant\n");
    else if(x<=0 && y<=0)
        printf("III Quadrant\n");
    else
        printf("IV Quadrant\n");
    return 0;
}
