// C Program to Transpose a Matrix.

#include <stdio.h>
#include <math.h>

void main()
{
    int i, j, row, col, temp;
    
    printf("Enter row and column of matrix by giving space:\n");
    scanf("%d%d", &row, &col);

    int a[row][col];
    printf("Enter the elements:\n");
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Original Matrix\n");
    for (i = 1; i <= row; i++)
    {
        printf("\n");
        for (j = 1; j <= col; j++)
        {
            printf("%d\t", a[i][j]);
        }
    }
    
    // Transpose Logic
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j < i; j++)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    printf("\nTranspose Matrix");
    for (i = 1; i <= row; i++)
    {
        printf("\n");
        for (j = 1; j <= col; j++)
        {
            printf("%d\t", a[i][j]);
        }
    }
}