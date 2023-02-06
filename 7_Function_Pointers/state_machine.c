// C Program to implement state machine

#include <stdio.h>

enum stateType
{
    RED,
    YELLOW,
    GREEN,
    NUMBER_OF_STATES
};

enum eventType
{
    TIMEOUT,
    FORCED_GREEN,
    FORCED_RED,
    NUMBER_OF_EVENTS
};

enum stateType STATE = RED;

void changeToGreen()
{
    printf("CurrentState : %d\n", STATE);
    STATE = GREEN;
    printf("NewState : %d\n", STATE);
}

void changeToRed()
{
    printf("CurrentState : %d\n", STATE);
    STATE = RED;
    printf("NewState : %d\n", STATE);
}

void changeToYellow()
{
    printf("CurrentState : %d\n", STATE);
    STATE = YELLOW;
    printf("NewState : %d\n", STATE);
}

int main()
{
    enum eventType event;
    unsigned int input;

    void (*fp[NUMBER_OF_STATES][NUMBER_OF_EVENTS])() =
        {{changeToYellow, changeToGreen, changeToRed},
         {changeToGreen, changeToGreen, changeToRed},
         {changeToRed, changeToGreen, changeToRed}};

    printf("TIMEOUT:0\nFORCED_GREEN:1\nFORCED_RED:2\nEXIT:3\n");

    while (1)
    {
        printf("Please enter the event: ");
        scanf("%d", &input);
        if (input >= 3)
        {
            break;
        }
        else
        {
            event = (enum eventType)input;
            (*fp[STATE][event])();
        }
    }
}
