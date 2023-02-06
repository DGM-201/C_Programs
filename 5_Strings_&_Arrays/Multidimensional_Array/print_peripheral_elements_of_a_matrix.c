// Write a program to display only peripheral of a matrix.

#include <stdio.h>

int main()
{
    unsigned int i, j;

    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printf("Peripheral elements of the matrix are: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == 0 || j == 0 || i == 3 - 1 || j == 3 - 1)
            {
                printf("%d\t", matrix[i][j]);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
    return 0;
}