// Implement a stack data structure using C programming language.

#include <stdio.h>

void push();
void print_stack();
void pop();

#define STACK_SIZE 5

unsigned int stack_array[STACK_SIZE];
signed int top = -1;

int main()
{
    unsigned int options;
    printf("\nEnter '1' to PUSH the element into the stack.\n");
    printf("Enter '2' to PRINT all the element in the stack.\n");
    printf("Enter '3' to POP a element in the stack.\n");
    printf("Press any other key to exit!.\n");
    printf("Enter your choice!.\n");
    scanf("%d", &options);
    switch (options)
    {
    case 1:
        push();
        break;
    case 2:
        print_stack();
        break;
    case 3:
        pop();
        break;
    default:
        printf("Invalid entry! / Exiting the stack!.\n");
    }
    return 0;
}

void push()
{
    ++top;
    unsigned int input_data;
    if (top == STACK_SIZE)
    {
        printf("Stack Overflow!.");
    }
    else
    {
        printf("Enter the element: ");
        scanf("%d", &input_data);
        stack_array[top] = input_data;
        printf("You have pushed %d into the stack!.", stack_array[top]);
    }
    main();
}

void print_stack()
{
    signed int i = 0;
    if (top == -1)
    {
        printf("Stack is Empty!.");
    }
    else
    {
        printf("Your stack elements are: ");
        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack_array[i]);
        }
    }
    main();
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is Empty!\n");
    }
    else
    {
        printf("You have popped / deleted the element %d\n", stack_array[top--]);
    }
    main();
}