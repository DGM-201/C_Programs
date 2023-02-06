/* Display the columns interchanged
Ex: input: 1 2 3
           4 5 6
           7 8 9
Output:
3 2 1
6 5 4
9 8 7 */

#include <stdio.h>

int main()
{
    unsigned int i, j;
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printf("Matrix columns reversed output is: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d \t", matrix[i][2 - j]);
            // matrix[i][size - j -1]
            // printing column in reverse
        }
        printf("\n");
    }
}