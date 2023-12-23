#include<stdio.h>
int main()
{
    int date, month, year;
    printf("Enter the Date: ");
    scanf("%d",&date);
    printf("Enter the Month: ");
    scanf("%d",&month);
    printf("Enter the Year: ");
    scanf("%d",&year);

    if(month==1 || month==3 || month==5 || month==7 || month==9 || month==11)
    {
        if(date==31)
            printf("01.%d.%d",month+1,year);
        else
            printf("%d.%d.%d",date+1,month,year);
    }
    else if(month==4 || month==6 || month==8 || month==10)
    {
        if(date==30)
            printf("01.%d.%d",month+1,year);
        else
            printf("%d.%d.%d",date+1,month,year);
    }
    else if(month==12)
    {
        if(date==31)
            printf("01.01.%d",year+1);
        else
            printf("%d.%d.%d",date+1,month,year);
    }

    else if(month==2)
    {
        if(year%4==0)
        {
            if(date==29)
            printf("01.%d.%d",month+1,year);
        else
            printf("%d.%d.%d",date+1,month,year);
        }
        else
        {
            if(date==28)
            printf("01.%d.%d",month+1,year);
        else
            printf("%d.%d.%d",date+1,month,year);
        }
    }
    else
        printf("Enter a a valid order");
return 0;
}
