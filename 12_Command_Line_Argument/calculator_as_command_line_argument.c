#include <stdio.h>

int main(int ac, char *av[])
{
    int i, sum = 0;

    for (i = 1; i < ac; i++)
    {
        sum = sum + (*av[i] - '0');
    }

    printf("Sum of all numbers is = %d \n", sum);
    return 0;
}