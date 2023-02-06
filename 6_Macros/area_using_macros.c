// C program to find areas of circle, rectangle and sqaure using macro

#include<stdio.h>
#include<math.h>

#define CIRCLE(r) (3.14*r*r)
#define RECTANGLE(l, b) (l*b)
#define SQUARE(l) (l*l)

int main()
{
    unsigned int radius, length, breadth, len;
    printf("\nEnter the value of radius: ");
    scanf("%d", &radius);
    printf("Area of Circle is %f", CIRCLE(radius));

    printf("\nEnter the value of length and breadth of rectangle: ");
    scanf("%d%d", &length,&breadth);
    printf("Area of Rectangle is %d", RECTANGLE(length, breadth));

    printf("\nEnter the value of length of sqaure: ");
    scanf("%d", &len);
    printf("Area of Square is %d", SQUARE(len));
    return 0;
}