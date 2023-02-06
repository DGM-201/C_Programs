// Write a C program to perform addition of 2 dimensional array.

#include<stdio.h>
int matrix_multiply();

void main()
{
    unsigned int i, j;
    signed int array_a[2][2], array_b[2][2];
    printf("**Matrix Addition**\n");
    printf("\nEnter the first matrix a: ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d", &array_a[i][j]);
        }
    }
    printf("\nEnter the second matrix b: ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d", &array_b[i][j]);
        }
    }
    matrix_multiply(array_a,array_b);
}

int matrix_multiply(int matrix_a[2][2], int matrix_b[2][2])
{
    unsigned int i, j;
    signed int sum_matrix[2][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum_matrix[i][j] = matrix_a[i][j] + matrix_b[i][j];
        }
    }
    printf("\nMatrix addition of a and b is:\n");
    for(i=0;i<2;i++)
    {
        printf("\n");
        for(j=0;j<2;j++)
        {
            printf("%d\t",sum_matrix[i][j]);
        }
    }
}