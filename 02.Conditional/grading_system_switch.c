#include<stdio.h>
int main()
{
    char grade;
    printf("Enter your Grade to know your marks Range (A to F): ");
    scanf("%c",&grade);
    switch(grade)
    {
    case 'A':
        printf("Your marks is in the Range of 90 to 100\n");
        break;
    case 'B':
        printf("Your marks is in the Range of 80 to 90\n");
        break;
    case 'C':
        printf("Your marks is in the Range of 70 to 80\n");
        break;
    case 'D':
        printf("Your marks is in the Range of 60 to 70\n");
        break;
    case 'E':
        printf("Your marks is in the Range of 50 to 60\n");
        break;
    case 'F':
        printf("Your marks is below 50\n");
        break;
    default:
        printf("ERROR\n");
        break;
    }
    return 0;
}
