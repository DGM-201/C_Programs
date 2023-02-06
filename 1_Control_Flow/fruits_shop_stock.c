// C program to find available fruits in shops

#include<stdio.h>

int main()
{
    char fruit_first_letter;
    printf("Please enter the first letter of your fruit to verify if it is in stock or not!:\n");
    printf("e.g\nWe have A-Apple,\nB-Banana,\nM-Muskmelon,\nsimilarly 3 more fruits in stock:\n");
    scanf("%c", &fruit_first_letter);
    if (fruit_first_letter == 'A' || fruit_first_letter == 'a') printf("We have Apple!");
    else if (fruit_first_letter == 'B' || fruit_first_letter == 'b') printf("We have Banana!");
    else if (fruit_first_letter == 'M' || fruit_first_letter == 'm') printf("We have Muskmelon!");
    else if (fruit_first_letter == 'W' || fruit_first_letter == 'w') printf("We have Watermelon!");
    else if (fruit_first_letter == 'O' || fruit_first_letter == 'o') printf("We have Orange!");
    else printf("Sorry, We don't have that fruit in stock, come again later!");
    return 0;
}