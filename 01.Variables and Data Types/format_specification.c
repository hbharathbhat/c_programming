#include<stdio.h>
#include<stdlib.h>

int main()
{
    /*
    %f Floating Point Numbers;
    %d integers;
    %c characters
    */
    printf("Your age %d\n", 20);
    printf("I'm %d year old this year and my sister is %d years old.\n",21,16);
    printf("My grade is %d\n",93.7);
    printf("My grade is %f\n",93.7);
    printf("My grade is %.1f\n",93.7);

    printf("We have %d coins in the bank\n", 100);
    printf("We have %f coins in the bank\n", 125.7);
    printf("Year = %d\n", 2020);
    printf("Your average grade is: %f \n", 95.13);
    printf("num1 = %d, num2 = %d, sum = %d \n", 5, 7, 5+7);
    printf("num1 = %f, num2 = %f, sum = %f \n", 5.2, 7.3, 9.5);
    printf("num1 = %d, num2 = %d, sub = %d \n", 5, 3, 5-3);
    printf("a = %d, b = %d, sum = a + b = %d \n", 3, 5, 3+5);
    printf("a = %d, b = %d, sum = %d + %d = %d \n", 3, 5, 3, 5, 3+5);
    printf("a = %d, b = %d, sum = a + b = %d + %d = %d \n\n", 3, 5, 3, 5, 3+5);

    printf("\t**********\n\t**********\n\t**********\n\t**********\n\t**********\n\n");
    printf("\t1*********\n\t12********\n\t123*******\n\t1234******\n\t12345*****\n\n");
    printf("\t*     *\n\t *   * \n\t  * *  \n\t   *   \n\t  * *  \n\t *   * \n\t*     *\n\n");

    int age;
    double temp;
    age=21;
    temp=23.5;

    printf("My age is %d\n",age);
    printf("Today's Temperature is %f\n",temp);
    printf("Today's Temperature is %.1f\n",temp);

    int grade1=80;
    int grade2=100;
    printf("Average %.2d \n\n",((grade1+grade2)/2));

    //Reading the user input
    printf("\tAverage Calculator\n\n");
    int grade01;
    int grade02;
    printf("Enter your grade 01: ");
    scanf("%d",&grade01);
    printf("Enter your grade 02: ");
    scanf("%d",&grade02);
    printf("Your Average marks: %d\n\n",(grade01+grade02)/2);

    //Born Year Calculator
    printf("\tBorn Year calculator\n\n");
    int agee;
    int year;
    printf("Enter the present year: ");
    scanf("%d",&year);
    printf("Enter your age: ");
    scanf("%d",&agee);
    printf("Your born Year: %d\n\n",(year-agee));

    return 0;
}
