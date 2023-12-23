#include<stdio.h>

float averagefinder(int num1, int num2, int num3)
{
    float avg;
    avg=(num1+num2+num3)/3.0;
    return avg;
}

float main()
{
    float a,b,c,average;
    printf("Enter all your three grades: ");
    scanf("%f%f%f",&a,&b,&c);
    average=averagefinder(a,b,c);
    printf("%.1f",average);
    return 0;
}
