// Display random number from 2-100 and list the factors of the number.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random_number_factor();

int main()
{
    unsigned int i, n, random_number;
    time_t t;

    n = 5;

    /* Intializing random number generator */
    srand((unsigned)time(&t));

    /* Print 5 random numbers from 0 to 100 */
    for (i = 0; i < n; i++)
    {
        random_number = rand() % 98;
        random_number = random_number + 2;
    }

    random_number_factor(random_number); // Calling Function

    return (0);
}

void random_number_factor(unsigned int rand_num)
{
    unsigned int i;
    printf("Random Number Generated is %d.\n", rand_num);
    printf("And the factors of %d is: \n");
	
    for (i = 1; i <= rand_num; i++)
    {
        if (rand_num % i == 0)
        {
            printf("%d \t", i);
        }
    }
}