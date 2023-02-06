// C program to print a pattern
// Pyramid. Input to be taken, no of rows
// Ex:             1
//               1 2 1
//             2 3 4 3 2
//           3 4 5 6 5 4 3
// Here number of rows are '4'

#include <stdio.h>

void main()
{
    int i, n, rows, k = 0, counter = 0, counter1 = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (n = 1; n <= rows - i; n++)
        {
            printf("  ");
            ++counter;
        }
        while (k != 2 * i - 1)
        {
            if (counter <= rows - 1 && i!=1)
            {
                printf("%d ", (i-1) + k );
                counter++;
            }
            else if (counter <= rows - 1 && i==1)
            {
                printf("%d ", i);
            }
            else
            {
                ++counter1;
                printf("%d ", ((i-1) + k - 2 * counter1));
            }
            k++;
        }
        counter1 = counter = k = 0;
        printf("\n");
    }
}