#include<stdio.h>

int main()
{
    //Sum of three digits in a three digit number
    int a,o,t,h,ans;
    printf("Enter the triple digit number: ");
    scanf("%d",&a);
    h=a/100;
    t=(a-h*100)/10;
    o=(a-(h*100)-(t*10));

    printf("hundreds: %d\n",h);
    printf("tens: %d\n",t);
    printf("ones: %d\n",o);
    ans=h+t+o;
    printf("Sum: %d\n\n",ans);

    //Reverse of 3 digit number
    printf("Reverse order: %d%d%d\n",o,t,h);
    return 0;
}
