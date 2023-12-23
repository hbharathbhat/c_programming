#include<stdio.h>
int main()
{
    int bin, dec, dec1,temp,i,j,a[i];
    printf("Enter a binary 8 digit number: ");
    scanf("%d",&bin);
    temp=bin;
    for(j=31;j>=0;j++)
    {
        for(i=31;i>=0 ;i++)
    {
        temp=temp&0x01;
        dec=temp*2^i;
        a[i]=dec;
        bin>>1;
    }
    dec1=a[i];
    }

    printf("%d\n",temp);
    printf("%d\n",dec1);

    return 0;
}
