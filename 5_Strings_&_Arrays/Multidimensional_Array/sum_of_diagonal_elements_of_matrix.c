// Write a program to find sum of diagonal elements of a 2-dimensional array.

#include <stdio.h>

int main()
{
    unsigned int i, j, sum = 0;

    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (i = 0; i < 3; i++)
    {
        sum = sum + matrix[i][i] + matrix[i][3 - i - 1];
    }

    printf("The sum of diagonal elements of a matrix is %d.\n", sum);
}