#include<stdio.h>
#include<stdlib.h>

int main()
{
    int grade;
    printf("Enter your marks: ");
    scanf("%d",&grade);
    if (grade>=60)
        printf("Congratulations :)\n");
    else
        printf("You've failed, please try again\n");
    return 0;
}
