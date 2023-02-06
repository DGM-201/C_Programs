// C Program to print patterns of a matrix.

#include <stdio.h>

int main()
{
    unsigned int i, j;
    int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (i = 0; i <= 2; i++)
    {
        printf("\n");
        for (j = i; j == i; j++)
        {
            printf("%d ", array[i][j]);
        }
    }

    // for (i = 0; i <= 2; i++)
    // {
    //     printf("\n");
    //     printf("%d ", array[i][i]);
    // }

    return 0;
}