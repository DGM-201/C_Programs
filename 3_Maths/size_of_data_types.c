#include <stdio.h>

int main()

{
    printf("Size of integer  = %zd\n", sizeof(int));
    printf("Size of character  = %zd\n", sizeof(char));
    printf("Size of long  = %zd\n", sizeof(long));
    printf("Size of long long  = %zd\n", sizeof(long long));
    printf("Size of double  = %zd\n", sizeof(double));
    printf("Size of long double  = %zd\n", sizeof(long double));

    return 0;
}