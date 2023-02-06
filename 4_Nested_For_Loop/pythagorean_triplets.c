// Program to find the Pythagorean triplets from range 1 to 100.

#include <stdio.h>
#include <math.h>

int main()
{
    unsigned int i, j, k;
    printf("Pythagorean Triplets are: \n");
	
    for (i = 1; i < 100; i++)
    {
        for (j = i; j < 100; j++)
        {
            for (k = j; k < 100; k++)
            {
                if ((i*i + j*j) == (k*k))
                {
                    printf("%d + %d = %d\n", i, j, k);
                }
            }
        }
    }
	
    return 0;
}