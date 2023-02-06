/* C program to check whether a triangle is Equilateral, Isosceles or Scalene.
  i\p: 5,5,2
  o\p: isosceles */

#include <stdio.h>

void main()
{
    signed int side1, side2, side3;

    printf("Enter the size of 1st side of the triangle: ");
    scanf("%d", &side1);
    printf("Enter the size of 2nd side of the triangle: ");
    scanf("%d", &side2);
    printf("Enter the size of 3rd side of the triangle: ");
    scanf("%d", &side3);

    printf("Entered size of sides of a triangle represents an ");
	
    if ((side1 == side2) && (side2 == side3))
    {
        printf("Equilateral Triangle!.");
    }
	
    else if ((side1 == side2) || (side2 == side3) || (side1 == side3))
    {
        printf("Isosceles Triangle!.");
    }
	
    else
    {
        printf("Scalene Triangle!.");
    }
}