// C Program to print rombus pattern in matrix.

#include <stdio.h>

int main()
{
    unsigned int i, j, size;

    printf("Enter the size of the matrix: ");
    scanf("%d", &size);

    signed int a[size][size];
    printf("Enter the array elements: ");

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (i + j == 2 || i + j == 4 || i + j == 6)
            {
                if (i == 4 && j == 0 || i == 0 && j == 4 || i == 2 && j == 2)
                {
                    printf("\t");
                }
                else
                {
                    printf("%d\t", a[i][j]);
                }
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