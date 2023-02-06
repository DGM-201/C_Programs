// C Program to check matrix is a Symmetric Matrix or not!

#include <stdio.h>

void main()
{
    unsigned int size, i, j, flag;

    printf("Enter the size of square matrix: ");
    scanf("%d", &size);

    signed int matrix[size][size];

    printf("Enter the matrix elements: \n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (matrix[i][j] == matrix[j][i])
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 0)
    {
        printf("The matrix entered is not a symmetric matrix!.");
    }
    else
    {
        printf("The entered matrix is symmetric!.");
    }
}