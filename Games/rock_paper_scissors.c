/* Write a program to play a game with computer e.g. Rock, Paper, Scissor.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CHANCE 10

unsigned int random_number_generator();
void game_play();
void points_table();

unsigned int player_points = 0;
unsigned int computer_points = 0;

int main()
{
    unsigned int options;

    printf("WELCOME to!...\n");
    printf("****************************************\n");
    printf("*      ROCK, PAPER, SCISSOR GAME!      *\n");
    printf("****************************************\n");

    printf("PRESS 0 to START the GAME!...\n");
    printf("PRESS any Key to QUIT the GAME!...\n");
    printf("After entering the game you cannot QUIT the GAME!...\n");
    scanf("%d", &options);

    switch (options)
    {
    case 0:
    {
        printf("*********************************************************************************\n");
        printf("** RULES OF THE GAME!. **\n\n");
        printf("THERE ARE TWO PLAYER IN THE GAME 1.USER/HUMAN/PLAYER vs 2.COMPUTER !.\n");
        printf("THERE WILL BE 10 CHANCES GIVEN TO A PLAYER IN THE GAME!.\n");
        printf("FOR EACH WIN YOU WILL RECEIVE 1 POINTS!.\n");
        printf("WHOEVER HAVING THE HIGHEST POINTS AFTER TEN CHANCES WILL WIN THE GAME!.\n");
        printf("*********************************************************************************\n");

        game_play();

        break;
    }
    default:
        printf("EXITING...");
        break;
    }
    return 0;
}

unsigned int random_number_generator()
{
    unsigned int i = 0, random_number = 0;

    time_t t;

    srand((unsigned)time(&t));

    random_number = rand() % 3;
    random_number = random_number + 1;

    return random_number;
}

void game_play()
{
    unsigned int rand_num = 0, i = 0, choice = 0;

    for (i = 0; i < CHANCE; i++)
    {
        rand_num = random_number_generator();

        printf("\n\nENTER YOUR CHOICE!.\n");
        printf("'1' for ROCK \t '2' for PAPER \t '3' for SCISSOR!\n");
        scanf("%d", &choice);

        // Rock vs Paper
        if (rand_num == 1 && choice == 2)
        {
            player_points++;
            printf("COMPUTER: ROCK \t VS \t PLAYER: PAPER\n");
            printf("+1 Point for PLAYER!.\n");
        }

        // Rock vs Scissor
        else if (rand_num == 1 && choice == 3)
        {
            computer_points++;
            printf("COMPUTER: ROCK \t VS \t PLAYER: SCISSOR\n");
            printf("+1 Point for COMPUTER!.\n");
        }

        // Paper vs Rock
        else if (rand_num == 2 && choice == 1)
        {
            computer_points++;
            printf("COMPUTER: PAPER \t VS \t PLAYER: ROCK\n");
            printf("+1 Point for COMPUTER!.\n");
        }

        // Paper vs Scissor
        else if (rand_num == 2 && choice == 3)
        {
            player_points++;
            printf("COMPUTER: PAPER \t VS \t PLAYER: SCISSOR\n");
            printf("+1 Point for PLAYER!.\n");
        }

        // Scissor vs Rock
        else if (rand_num == 3 && choice == 1)
        {
            player_points++;
            printf("COMPUTER: SCISSOR \t VS \t PLAYER: ROCK\n");
            printf("+1 Point for PLAYER!.\n");
        }

        // Scissor vs Paper
        else if (rand_num == 3 && choice == 2)
        {
            computer_points++;
            printf("COMPUTER: SCISSOR \t VS \t PLAYER: PAPER\n");
            printf("+1 Point for COMPUTER!.\n");
        }

        else if (rand_num == choice)
        {
            // No change in points.
            computer_points = computer_points;
            player_points = player_points;

            if (rand_num == 1 && choice == 1)
            {
                printf("COMPUTER: ROCK \t VS \t PLAYER: ROCK\n");
                printf("DRAW!.\n");
            }
            else if (rand_num == 2 && choice == 2)
            {
                printf("COMPUTER: PAPER \t VS \t PLAYER: PAPER\n");
                printf("DRAW!.\n");
            }
            else
            {
                printf("COMPUTER: SCISSOR \t VS \t PLAYER: SCISSOR\n");
                printf("DRAW!.\n");
            }
        }
        else
        {
            printf("Enter a valid number! e.g 1, 2 or 3!");
            i--;
        }
    }
    points_table();
}

void points_table()
{
    printf("+----------------+----------------+\n");
    printf("|           POINTS TABLE          |\n");
    printf("+----------------+----------------+\n");
    printf("|     PLAYER     |     COMPUTER   |\n");
    printf("+----------------+----------------+\n");
    printf("|        %d       |        %d       |\n", player_points, computer_points);
    printf("+----------------+----------------+\n");

    if (player_points > computer_points)
    {
        printf("******************************\n");
        printf("*          YOU WON!          *\n");
        printf("******************************\n");
    }
    else
    {
        printf("Sorry, better luck next time!.");
    }
}