// C program to find area of different shapes like triangle, rectangle and circle.

#include<stdio.h>
#include<math.h>

#define M_PI 3.14159265358979323846

int main()
{
    int enter;
    printf("Enter '1' to find area of Triangle\n");
    printf("Enter '2' to find area of Rectangle\n");
    printf("Enter '3' to find area of Circle\n");
    printf("**Note: Enter positive integer values only!**\n");
    scanf_s("%d", &enter);

    switch (enter)
    {
    case 1:
    {
        float base, height;
        printf("You have choosen to find area of triangle.\n");
        printf("Enter the height and base in this format base,height:\n");
        scanf_s("%f%f", &base, &height);
        float area = 0.5*base*height;
        printf("Area of triangle is %f", area);
    }
    break;

    case 2:
    {
        float length, breadth;
        printf("You have choosen to find area of rectangle.\n");
        printf("Enter the length and breadth:\n");
        scanf_s("%f%f", &length, &breadth);
        float area = length * breadth;
        printf("Area of rectangle is %f", area);
    }
    break;

    case 3:
    {
        float radius;
        printf("You have choosen to find area of circle.\n");
        printf("Enter the radius:\n");
        scanf_s("%f", &radius);
        float area = M_PI * pow(radius,2);
        printf("Area of circle is %f", area);
    }
    break;

    default: printf("Invalid Input!.");
    break;
    }

    return 0;
}