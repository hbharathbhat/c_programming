#include<stdio.h>

int main()
{

    float dist,speed,time;
    printf("Enter the distance to your destination: ");
    scanf("%f",&dist);
    printf("Enter the speed at which you can cruise(in km/hr): ");
    scanf("%f",&speed);
    time=dist/speed;
    printf("Time taken to travel to your Destination(in hours): %0.1f hours\n",time);
    return 0;
}
