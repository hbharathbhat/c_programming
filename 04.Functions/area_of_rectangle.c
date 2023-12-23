#include<stdio.h>

int areaofrectangle(int height, int width)
{
    int area;
    area=width*height;
    return area;
}

int main()
{
    int a,b,area;
    printf("Enter the height of the rectangle: ");
    scanf("%d",&a);
    printf("Enter the width of the rectangle: ");
    scanf("%d",&b);
    area=areaofrectangle(a,b);
    printf("Area of the rectangle is: %d sq units\n",area);
    return 0;

}
