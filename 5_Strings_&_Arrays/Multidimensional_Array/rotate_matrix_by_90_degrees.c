/* Write a program rotate a matrix 90 degree anticlockwise
input: 1 2 3
       4 5 6
       7 8 9

output: 3 6 7
        2 5 8
        1 4 7   */

#include <stdio.h>

int main()
{
    unsigned int i, j;

    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printf("Matrix rotated by 90 degrees! is: \n");
    for (i = 2; i <= 2; i--)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d \t", matrix[j][i]);
        }
        printf("\n");
    }
    return 0;
}