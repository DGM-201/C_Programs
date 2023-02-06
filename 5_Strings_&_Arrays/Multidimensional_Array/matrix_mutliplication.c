// Write a C program to perform multiplication of 2 dimensional array.

#include<stdio.h>
int matrix_multiply();

void main()
{
    unsigned int i, j;
    signed int array_a[2][2], array_b[2][2];
    printf("**Matrix Multiplication**\n");
    printf("\nEnter the first matrix a: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d", &array_a[i][j]);
        }
    }
    printf("\nEnter the second matrix b: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d", &array_b[i][j]);
        }
    }
    matrix_multiply(array_a, array_b);
}

int matrix_multiply(int matrix_a[2][2], int matrix_b[2][2])
{
    unsigned int i, j, k;
    signed int matrix_multiplied[2][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            matrix_multiplied[i][j] = 0;
            for(k=0;k<2;k++);
            {
                matrix_multiplied[i][j] += matrix_a[i][k] * matrix_b[k][j];
            }
        }
    }
    printf("\nMatrix Multiplication is:\n");
    for(i=0;i<2;i++)
    {
        printf("\n");
        for(j=0;j<2;j++)
        {
            printf("%d\t", matrix_multiplied[i][j]);
        }
    }
}