// C program to find valid color.

#include<stdio.h>

int main()
{
    char color_first_letter;
    printf("**Note: Only rainbow colors are supported!**\n");
    printf("Enter the first letter of your color:\ne.g\nV-Violet,\nI-Indigo etc.\n");
    scanf("%c", &color_first_letter);
    switch (color_first_letter)
    {
    case 'v': case 'V': printf("You have entered V-Violet, which is a valid color!");
    break;
    case 'i': case 'I': printf("You have entered I-Indigo, which is a valid color!");
    break;
    case 'b': case 'B': printf("You have entered B-Blue, which is a valid color!");
    break;
    case 'g': case 'G': printf("You have entered G-Green, which is a valid color!");
    break;
    case 'y': case 'Y': printf("You have entered Y-yellow, which is a valid color!");
    break;
    case 'o': case 'O': printf("You have entered O-Orange, which is a valid color!");
    break;
    case 'r': case 'R': printf("You have entered R-Red, which is a valid color!");
    break;
    default: printf("Invalid Color!");
    break;
    }
    return 0;
}