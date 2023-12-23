#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float x1,x2,y1,y2;
    float dist;

    printf("Enter the x Co-ordinate: \n");
    scanf("&f\n",&x1);

    printf("Enter the x Co-ordinate: \n");
    scanf("&f\n",&x2);

    printf("Enter the y Co-ordinate: \n");
    scanf("&f\n",&y1);

    printf("Enter the y Co-ordinate: \n");
    scanf("&f\n",&y2);

    dist=sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));

    printf("Distance: %f\n",dist);

    return 0;
}
