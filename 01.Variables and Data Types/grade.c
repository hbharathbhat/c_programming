#include<stdio.h>
#include<stdlib.h>

float main()
{
    int grade1, grade2, grade3;
    float average;
    printf("Enter your grade: ");
    scanf("%d",&grade1);
    printf("Enter your grade: ");
    scanf("%d",&grade2);
    printf("Enter your grade: ");
    scanf("%d",&grade3);

    average=(grade1+grade2+grade3)/3.0;
    printf("Average: %f",average);
    return 0;
}
