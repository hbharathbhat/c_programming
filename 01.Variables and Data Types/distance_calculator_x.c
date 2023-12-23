#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float x1,x2,y1,y2;
    float dist;

    printf("Enter the x Co-ordinate: ");
    scanf("&f",&x1);

    printf("Enter the x Co-ordinate: ");
    scanf("&f",&x2);

    printf("Enter the y Co-ordinate: ");
    scanf("&f",&y1);

    printf("Enter the y Co-ordinate: ");
    scanf("&f",&y2);

    dist=sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));

    printf("Distance: %f\n",dist);

    return 0;
}

