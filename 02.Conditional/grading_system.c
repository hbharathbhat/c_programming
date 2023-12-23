#include<stdio.h>
int main()
{
    char grade;
    printf("Enter your Grade to know your marks Range (A to F): ");
    scanf("%c",&grade);
    if(grade=='A')
        printf("Your marks is in the Range of 90 to 100\n");
    else if(grade=='B')
        printf("Your marks is in the Range of 80 to 90\n");
    else if(grade=='C')
        printf("Your marks is in the Range of 70 to 80\n");
    else if(grade=='D')
        printf("Your marks is in the Range of 60 to 70\n");
    else if(grade=='E')
        printf("Your marks is in the Range of 50 to 60\n");
    else if(grade=='F')
        printf("Your marks is below 50\n");
    else
        printf("Error\n");
    return 0;
}
