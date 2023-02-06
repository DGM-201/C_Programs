// String is an one dimensional array of characters
// In other words Array of characters is named as strings
// Strings are mutable by giving index value
/*
Since array and strings are same and array and pointers are interconvertible
they both have initial address values and last address is identified by null characters.
*/ 

#include<stdio.h>
#include<string.h>

void main()
{
    char name[] = "DINESH";
    printf("%s\n", name);
	
    char *pname;
    pname = name; // You don'
    pname = pname + 3;
	
    *pname = 'I';
	
    printf("%s\n",pname);
    printf("%s\n", name);
	
    name[4] = '\0';
    printf("%s\n", name);
}