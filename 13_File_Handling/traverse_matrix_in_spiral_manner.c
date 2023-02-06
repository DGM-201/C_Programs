/* 2.	Write a program to traverse the matrix in spiral shape.

Ex:   1  2  3  4
      5  6  7  8
      9  10 11 12
      13 14 15 16

Output: 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 */

#include <stdio.h>

// #define r 3
// #define c 3

int main()
{
    int r, c;

    printf("Enter the size of row: ", r);
    scanf("%d", &r);

    printf("Enter the size of coloum: ", c);
    scanf("%d", &c);

    int a[r][c];
    int i, j, left = 0, right = c - 1, top = 0, bottom = r - 1;

    printf("Enter the Matrix elements: \n", a[r][c]);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Entered matrix: \n");
    for (i = 0; i < r; i++)
    {
        printf("\n");
        for (j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j]);
        }
    }

    while (left <= right && top <= bottom)
    {

        for (i = left; i <= right; ++i)
        {
            printf("%d ", a[top][i]);
        }
        top++;

        for (i = top; i <= bottom; ++i)
        {
            printf("%d ", a[i][right]);
        }
        right--;

        if (top <= bottom)
        {
            for (i = right; i >= left; --i)
            {
                printf("%d ", a[bottom][i]);
            }
            bottom--;
        }

        if (left <= right)
        {
            for (i = bottom; i >= top; --i)
            {
                printf("%d ", a[i][left]);
            }
            left++;
        }
    }

    return 0;
}