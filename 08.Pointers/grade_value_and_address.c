#include<stdio.h>
int main()
{
    int *p1, *p2;
    int grade1=100, grade2=80;

    p1=&grade1;
    p2=&grade2;
    printf("Grade 01: %p\n",&grade1);
    printf("Grade 02: %p\n",&grade2);
    printf("Grade 01: %p\n",p1);
    printf("Grade 02: %p\n",p2);
    printf("Grade 01: %d\n",&grade1);
    printf("Grade 02: %d\n",&grade2);
    printf("Grade 01: %d\n",grade1);
    printf("Grade 02: %d\n",grade2);
    return 0;
}
