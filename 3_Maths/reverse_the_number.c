// C Program to reverse a given number.

#include <stdio.h>

void reverse_method1();
void reverse_method2();

int main()
{
    int number = 0;

    printf("Enter the number: ");
    scanf("%d", &number);

    // reverse_method1(number);
    reverse_method2(number);
}

// void reverse_method1(int num) // Using Recursion
// {
//     int new_num = 0, rev = 0;

//     rev = num % 10;
//     new_num = num / 10;

//     printf("%d", rev);

//     if (new_num != 0)
//     {
//         reverse_method1(new_num);
//     }
// }

void reverse_method2(int num)
{
    int rem = 0, reverse_num = 0, i = 0, count = 0, swap[100], temp;

    while (num != 0)
    {
        rem = num % 10;
        reverse_num = rem + (10 * reverse_num);
        num = num / 10;
    }

    printf("\nReversed Number: %d", reverse_num);

    while (reverse_num != 0)
    {
        rem = reverse_num % 10;
        swap[i] = rem;
        reverse_num = reverse_num / 10;
        i++;
        count++;
    }

    for (i = count - 1; i > 0; i--)
    {
        temp = swap[i];
        swap[i] = swap[i - 1];
        swap[i - 1] = temp;
        i--;
    }

    printf("\nSwapped Number: ");
    for (i = count - 1; i >= 0; i--)
    {
        printf("%d", swap[i]);
    }
}