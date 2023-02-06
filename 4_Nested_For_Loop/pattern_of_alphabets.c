// Program using nested loops to generate following pattern
//              z  y  x   w   v   w   x   y  z
//                z   y   x   w   x    y   z 
//                    z   y   x    y    z
//                         z   y    z
//                             z

#include <stdio.h>

void main()
{
    int i, j, k, l, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" ");
        }
        char ch1 = 'Z';
        for (k = 1; k <= rows - i + 1; k++)
        {
            printf("%c ", ch1);
            ch1--;
        }
        char ch2 = 'W';
        for (l = 1; l <= rows - i + 1; l++)
        {

            printf("%c ", ch2);
            ch2++;
        }
        printf("\n");
    }
}