/* Find the factors of odd numbers in an array, and exclude numbers that are
having factors of '3'. */

#include <stdio.h>

int main()
{
    unsigned int i, j;
    int numbers[10] = {2, 3, 4, 5, 6, 7, 8, 9, 15, 25};
    for (i = 0; i < 10; i++)
    {
        if (numbers[i] % 2 != 0 && numbers[i] % 3 != 0)
        {
            for (j = 1; j <= numbers[i]; j++)
            {
                if (numbers[i] % j == 0)
                {
                    printf("Factor of %d is %d.\n", numbers[i], j);
                }
            }
        }
    }
    return 0;
}