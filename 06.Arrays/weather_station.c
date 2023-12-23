#include<stdio.h>
#define DAYS 7
#define number 7

void average(int num[number])
{
    float average=0;
    int i;
    for(i=0;i<number;i++)
    {
        average=average+num[i];
    }
}



int main()
{
    float temperature[DAYS], avg=0.0, lowest, hottest, avg1;
    int i, hottest_day, lowest_day;
    for(i=0;i<=6;i++)
    {
        printf("Enter the temperature of day %d: ",i+1);
        scanf("%f",&temperature[i]);
    }

    //Average
    for(i=0;i<=6;i++)
    {
        avg=avg+temperature[i];
    }
    avg=avg/7.0;

    printf("Average Temperature: %.2f\n",avg);

    //Lowest
    lowest=temperature[0];
    for(i=0;i<=6;i++)
    {
        if(lowest>temperature[i])
        {
            lowest=temperature[i];
            lowest_day=i+1;
        }
    }
    printf("Coldest day was on Day %d with %.2f Temperature\n",lowest_day,lowest);

    //Hottest
    hottest=temperature[0];
    for(i=0;i<=6;i++)
    {
        if(hottest<temperature[i])
        {
            hottest=temperature[i];
            hottest_day=i+1;
        }
    }
    printf("Hottest day was on Day %d with %.2f Temperature\n",hottest_day,hottest);


    avg1=average(temperature[DAYS]);
    printf("%d",avg1);

    return 0;


}
