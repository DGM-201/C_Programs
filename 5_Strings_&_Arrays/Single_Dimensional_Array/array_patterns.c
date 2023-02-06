/* C Program to print peripheral numbers of a matrix and also its inside square elements.
             ____________________
    e.g.    | 1    2   3   4   5 |
            |      _________     |
            | 6   |7   8   9|  0 |
            |     |2   3   4|  5 |
            | 6   |7   8   9|  0 |
            |     |_________|    |
            | 1    2   3   4   5 |
            |____________________|
    It should print Sqaure 1 Elements 1,2,3,4,5,0,5,0,5,4,3,2,1,6,6,1
    Square 2: 7,8,9,4,9,8,7,2,7.
*/
#include <stdio.h>

int main()
{
    unsigned int i, j = 0;
    int array[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    printf("Outside Square!:");
    
    printf("\nTop\n");
    for (j = 0; j <= 3; j++)
    {
        printf("%d \t", array[0][j]);
    }

    printf("\nRight\n");
    for (j = 0; j <= 3; j++)
    {
        printf("%d \t", array[j][3]);
    }

    printf("\nBottom\n");
    for (j = 0; j <= 3; j++)
    {
        printf("%d \t", array[3][j]);
    }

    printf("\nLeft\n");
    for (j = 0; j <= 3; j++)
    {
        printf("%d \t", array[j][0]);
    }
    return 0;
}