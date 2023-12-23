#include<stdio.h>

int main()
{
    int sec,hours,minutes,rem_sec;
    printf("Enter the time in seconds: ");
    scanf("%d",&sec);
    hours=(sec/3600);
    minutes=(sec-hours*3600)/60;

    rem_sec=(sec-hours*3600)%60;

    printf("%d hours(s) ",hours);
    printf("%d minutes ",minutes);
    printf("%d seconds\n",rem_sec);
    return 0;
}
