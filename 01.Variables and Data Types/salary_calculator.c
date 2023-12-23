#include<stdio.h>

int main()
{
    float salary,days,hours,total;
    printf("Enter the wage per hour (in INR): ");
    scanf("%f",&salary);
    printf("Number of hours worked per day: ");
    scanf("%f",&hours);
    printf("Enter the number of days in the month(28/29/30/31): ");
    scanf("%f",&days);
    total=salary*days*hours;
    printf("Your total Salary: Rs %0.1f\n",total);
    return 0;
}
