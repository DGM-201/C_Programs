// Program to interchange the elements of diagonal elements.

#include <stdio.h>

int main()
{
    unsigned int i, j;
    signed int temp;

    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (i = 0; i < 3; i++)
    {
        temp = matrix[i][i];
        matrix[i][i] = matrix[i][3 - i - 1];
        matrix[i][3 - i - 1] = temp;
    }

    printf("After the diagonal elements swapped!.\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d \t", matrix[i][j]);
        }
        printf("\n");
    }
}