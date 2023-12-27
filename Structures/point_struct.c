#include<stdio.h>
#include<math.h>

struct point{
    int x;
    int y;
};

int main()
{
    struct point p1, p2;
    printf("Enter the point 01 x co-ordinate: ");
    scanf("%d",&p1.x);
    printf("Enter the point 01 y co-ordinate: ");
    scanf("%d",&p1.y);
    printf("So the co-ordinate is (%d, %d)\n\n",p1.x,p1.y);

    printf("Enter the point 02 x co-ordinate: ");
    scanf("%d",&p2.x);
    printf("Enter the point 02 y co-ordinate: ");
    scanf("%d",&p2.y);
    printf("So the co-ordinate is (%d, %d)\n\n",p2.x,p2.y);

    float distance=sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
    printf("Distance between the two is %f\n",distance);
    return 0;

}
