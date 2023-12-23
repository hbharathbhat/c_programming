#include<stdio.h>

int main()
{
    int grade[5],i,lowest_grade;
    printf("Enter the grades: ");

    for(i=0;i<=4;i++)
        scanf("%d",&grade[i]);
    lowest_grade=grade[0];
    printf("\n");
    for(i=0;i<=4;i++)
    {
        if(grade[i]<lowest_grade)
            lowest_grade=grade[i];
    }
    printf("Lowest Grade: %d\n",lowest_grade);

    return 0;
}
