/*
Program to generate the random number and check if the user guesses this
random number within 5 number of tries.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Function Prototype
void guess();

int main()
{
    unsigned int i, n, random_number;
    time_t t;
    n = 5;

    printf("**************************************\n");
    printf(" Welcome to Guess the Number Game!... \n");
    printf("**************************************\n");
	
    printf("Rules: You will have 5 attempts to Guess the Correct Number!.\n");

    /* Intializes random number generator */
    srand((unsigned)time(&t));

    /* Print 5 random numbers from 1 to 50 */
    for (i = 0; i < n; i++)
    {
        random_number = rand() % 49;
        random_number = random_number + 1;
    }
    
    guess(random_number); // Calling Function

    return 0;
}

// Function Definition
void guess(unsigned int rand_num)
{
    unsigned int guessed_number, attempts = 0;

    while (attempts < 5)
    {
        printf("Enter the number in range of 1 - 50!\n");
        scanf("%d", &guessed_number);

        if (guessed_number == rand_num)
        {
            printf("Congrats!, You Guessed it correctly!.\n");
            break;
        }

        else if (guessed_number < rand_num)
        {
            printf("You guessed a number that is lesser than the random number!.\n");
            attempts++;
        }

        else if (guessed_number > rand_num && guessed_number <= 50)
        {
            printf("You guessed a number that is greater than the random number!.\n");
            attempts++;
        }
		
        else
        {
            printf("Please enter a number that is less than 50!.\n");
            attempts = attempts;
        }

        printf("**********************************\n");
        printf("   You have %d attempts left!.    \n", 5 - attempts);
        printf("**********************************\n");

        if((5 - attempts) == 0)
        {
            printf("The Random Number is %d\n", rand_num);
            printf("** BETTER LUCK NEXT TIME **\n");
        }
    }
    
    printf("**********************************\n");
    printf("     THANK YOU! FOR PLAYING.      \n");
    printf("**********************************\n");
}