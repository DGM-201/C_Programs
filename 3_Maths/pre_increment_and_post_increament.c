// C Program to demonstrate Pre-Increament and Post-Increament

#include <stdio.h>

int main()
{
    unsigned int a = 10, b = 0;
    b = a++;
    printf("%d\n", b);
    b = a;
    printf("%d\n", b);
    b = ++a;
    printf("%d", b);
    return 0;
}