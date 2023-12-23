#include<stdio.h>
int main()
{
    int grade;
    printf("Enter your Grade: ");
    scanf("%d",&grade);
    if(grade>=90 && grade<=100)
        printf("Grade A\n");
    else if(grade>=80 && grade<=90)
        printf("Grade B\n");
    else if(grade>=70 && grade<=80)
        printf("Grade C\n");
    else if(grade>=60 && grade<=70)
        printf("Grade D\n");
    else if(grade>=50 && grade<=60)
        printf("Grade E\n");
    else
        printf("Grade F\n");
    return 0;
}
