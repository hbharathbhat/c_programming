#include<stdio.h>

int main()
{
    int a=5;
    int *p=&a;
    printf("%p\n",&a);
    printf("%p\n",p);
    printf("%d\n",p);
    printf("%d\n",a);
    return 0;
}
