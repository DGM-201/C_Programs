// C Program to print border elements of a matrix.

#include <stdio.h>

int main()
{
    unsigned int size, i, j;

    printf("Enter the size of square matrix: ");
    scanf("%d", &size);

    signed int a[size][size];

    printf("Enter the elements of array: \n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Border elements of the matrix are: \n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (i == 0 || j == 0 || i == size - 1 || j == size - 1)
            {
                printf("%d\t", a[i][j]);
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