#include<stdio.h>

int swap(int a, int b)
{
    int temp;
    printf("A: %d\n", a);
    printf("B: %d\n", b);

    temp=a;
    a=b;
    b=temp;

    printf("A: %d\n", a);
    printf("B: %d\n", b);

}
int main()
{
    int a,b;
    printf("Enter the number A: ");
    scanf("%d",&a);
    printf("Enter the number B: ");
    scanf("%d",&b);
    swap(a,b);
    printf("%d : %d",a,b);
    return 0;
}
