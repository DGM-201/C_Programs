/* Program to sort the ARFCNs based on the power level and store it in another output file using
linked list. (input file given) */

#include <stdio.h>
#include <stdlib.h>

void read_file();
void display_linkedlist();
void sort();
void write_file();

struct sort
{
    int serial_no;
    int data;
    struct sort *next;
};

struct sort *head = NULL;

void main()
{
    unsigned int i = 0;

    // Calling functions

    printf("Reading file");

    read_file();

    for (i = 0; i < 5; i++)
    {
        printf(".");
    }

    printf("\nSorting");

    for (i = 0; i < 5; i++)
    {
        printf(".");
    }

    printf("\nSorted list is: \n");
    sort();

    printf("\nOutputing file");

    write_file();

    for (i = 0; i < 5; i++)
    {
        printf(".");
    }

    printf("\nTask Complete!");
}

void read_file()
{
    FILE *file_pointer = NULL;
    int i = 0;

    file_pointer = fopen("in.txt", "r");

    for (i = 1; i <= 8; i++)
    {
        struct sort *newnode = NULL;

        newnode = calloc(1, sizeof(struct sort));

        if (newnode == NULL)
        {
            printf("MEMORY ALLOCATION FAILED!");
        }
        else
        {
            fscanf(file_pointer, "%d %d", &newnode->serial_no, &newnode->data);
            newnode->next = head;
            head = newnode;
        }
    }

    fclose(file_pointer);
}

void display_linkedlist()
{
    struct sort *temp;
    temp = head;

    while (temp != NULL)
    {
        printf("%d %d\n", temp->serial_no, temp->data);
        temp = temp->next;
    }
}

void sort()
{
    struct sort *prev, *next;
    prev = head;
    int i = 0, count = 0, temp = 0, temp1 = 0;

    while (prev->next != NULL)
    {
        prev = prev->next;
        count++;
    }

    for (i = 0; i < count; i++)
    {
        prev = head;
        while (prev->next != NULL)
        {
            next = prev;
            prev = prev->next;
            if (prev->data < next->data)
            {
                temp = prev->serial_no;
                temp1 = prev->data;
                prev->serial_no = next->serial_no;
                prev->data = next->data;
                next->serial_no = temp;
                next->data = temp1;
            }
        }
    }

    display_linkedlist();
}

void write_file()
{
    struct sort *temp;
    temp = head;
    FILE *fptr;
    int i = 0;

    fptr = fopen("out.txt", "w");

    for (i = 1; i <= 8; i++)
    {
        fprintf(fptr, "%d %d\n", temp->serial_no, temp->data);
        temp = temp->next;
    }

    fclose(fptr);
}