// Write a function to convert decimal to hexadecimal number using recursion

#include<stdio.h>
void printhex();

int main()
{
    unsigned int n;
	
    printf("Enter a number to convert to an hexdecimal number: ");
    scanf("%i",&n);
	
    printhex(n);
}

void printhex(unsigned int value)
{
    unsigned int remainder;
    remainder = value%16;
    value = value/16;
	
    if(value!=0)
    {
        printhex(value);
    }
	
    printf("%x", remainder);
}