/* Write function set_bits_from_x_to_y(x,y,i,j,a,b) where you need to get j 
bits from position i from X variable and put that in Y variable at 'a' 
position with b bits. Make sure  i and b are same. */

#include <stdio.h>

int main()

{
    unsigned int x, y;
    unsigned int i, j, a, b;

    printf("Enter the first number in hexadecimal format: ");
    scanf("%x", &x);

    printf("Enter the position from where you want to fetch: ");
    scanf("%d", &i);

    printf("Enter the number of bits to fetch from first number: ");
    scanf("%d", &j);

    printf("Enter the second number in hexadecimal format:");
    scanf("%x", &y);

    printf("Enter the position where you want to paste the fetched numbers");
    scanf("%d", &a);

    printf("Enter the number of bits to fetch from first number:");
    scanf("%d", &b);

    unsigned int x1;
    unsigned int r;

    y = (y & (~(~(~0 << b) << (a - b + 1))));

    x1 = ((x >> (i - j + 1)) & (~(~0 << j)));

    x = (x1 << (a - j + 1));

    printf("insert number of x bits in y");

    r = y | x;

    printf("After inserting bits of x in y is %x", r);
}