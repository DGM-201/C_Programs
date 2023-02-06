// C Program to find joint prime numbers between 1 to 100.

#include <stdio.h>

#define RANGE 100

unsigned int check_prime_or_not();

int main()
{
    unsigned int num = 0, flag = 0;

    // Numbers Generator
    for (num = 3; num < RANGE; num++)
    {
        // Checking Number Prime or Not

        if (check_prime_or_not(num) && check_prime_or_not(num + 2))
        {
            printf("(%d, %d)\n", num, (num + 2));
        }
    }

    return 0;
}

unsigned int check_prime_or_not(unsigned int num)
{
    unsigned int i = 0;

    // Number is divided by 2 to optimize the code

    for (i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0; // False (Not a Prime)
        }
    }

    return 1; // True (Prime)
}