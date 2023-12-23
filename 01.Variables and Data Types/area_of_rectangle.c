#include<stdio.h>
#include<stdlib.h>

int main()
{

    //Area of a Rectangle
    printf("\tArea of a Rectangle\n\n");
    float width,height;
    float area;

    printf("Enter the width of the Rectangle: ");
    scanf("%f",&width);
    printf("Enter the height of the Rectangle: ");
    scanf("%f",&height);
    area=width * height;

    printf("\nArea of the Rectangle: %0.1f\n\n",area);

    float perimeter;
    perimeter=2*(width+height);

    printf("Perimeter of the rectangle is: %0.1f\n\n",perimeter);
}
