/* Write a program to
1.	Read/print data in the given 2 files and store in doubly linked list
2.	Delete the duplicate nodes
3.	Sort the data in ascending order
4.	Print to output file after merging
5.	Store the data in a file */

#include <stdio.h>
#include <stdlib.h>

struct doubly_linked_list
{
    struct doubly_linked_list *previous;
    int data;
    struct doubly_linked_list *next;
};

struct doubly_linked_list *top = NULL;
struct doubly_linked_list *bottom = NULL;

unsigned int node_count = 0;

void file_read();
void add_to_linked_list();
void display();
void sort();
void remove_duplicates();
void write_file();

int main()
{
    file_read("sort1.txt");
    file_read("sort2.txt");

    printf("Merged linked list:\n");
    display();

    sort();
    printf("\nSorted data: \n");
    display();

    remove_duplicates();
    printf("\nDuplicates Removed: \n");
    display();

    printf("\nFile Created named 'OUTPUT.txt'");
    write_file();
}

void file_read(char file_name[])
{
    int data = 0;
    FILE *file_pointer = NULL;

    file_pointer = fopen(file_name, "r");

    while (!feof(file_pointer))
    {
        fscanf(file_pointer, "%d", &data);
        add_to_linked_list(data);
    }

    fclose(file_pointer);
}

void add_to_linked_list(int data)
{
    struct doubly_linked_list *temp = NULL;

    temp = malloc(sizeof(struct doubly_linked_list));

    if (temp == NULL)
    {
        printf("Memory Allocation Failed.!");
    }
    else
    {
        if (top == NULL && bottom == NULL)
        {
            temp->previous = NULL;
            temp->data = data;
            temp->next = NULL;

            top = temp;
            bottom = temp;

            node_count++;
        }
        else
        {
            bottom->next = temp;

            temp->previous = bottom;
            temp->data = data;
            temp->next = NULL;

            bottom = temp;

            node_count++;
        }
    }
}

void display()
{
    struct doubly_linked_list *temp = top;

    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}

// Sorting data of double linked list in ascending order.
void sort()
{
    struct doubly_linked_list *prev = top, *next = NULL;

    int i = 0, temp = 0;

    for (i = 0; i < node_count; i++)
    {
        prev = top;
        while (prev->next != NULL)
        {
            next = prev;
            prev = prev->next;

            if (prev->data < next->data)
            {
                temp = prev->data;
                prev->data = next->data;
                next->data = temp;
            }
        }
    }
}

void write_file()
{
    struct doubly_linked_list *temp = top;

    FILE *file_pointer = NULL;

    file_pointer = fopen("OUTPUT.txt", "w");

    fprintf(file_pointer, "Merged Sorted Output with Duplicates Removed!.\n");

    while (temp != NULL)
    {
        fprintf(file_pointer, "%d\n", temp->data);
        temp = temp->next;
    }

    fclose(file_pointer);
}

void remove_duplicates()
{
    struct doubly_linked_list *prev = top, *next = prev->next;

    while (next != NULL)
    {
        if (prev->data == next->data)
        {
            prev->next = next->next;
            free(next);

            next = prev->next;
            next->previous = prev;

            prev = next;
            next = prev->next;
        }
        else
        {
            prev = next;
            next = next->next;
        }
    }
}