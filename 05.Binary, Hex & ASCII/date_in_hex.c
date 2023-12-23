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

    printf("Date in Hexadecimal: 0x%x.0x%x.0x%x\n",date, month, year);
    return 0;
}
