// C Program to sort linked list in ascending order.

#include <stdio.h>
#include <stdlib.h>

struct sorting *head = NULL, *last = NULL;

struct sorting
{
    int data;
    struct sorting *next;
};

void insert_data();
void sort_ascending();
int display_linkedlist();

int main()
{
    int n;
    while (1)
    {
        printf("\nEnter your choice!\n");
        printf("Enter '1' to insert data.\n");
        printf("Enter '2' to sort data in ascending order.\n");
        printf("Enter '3' to display the elements in linked_list.\n");
        printf("Press any Key to EXIT!.\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            insert_data();
            break;

        case 2:
            sort_ascending();
            break;

        case 3:
            display_linkedlist();
            break;

        default:
            printf("Invalid Input / Exiting!.\n");
        }
    }
    return 0;
}

void insert_data()
{
    struct sorting *temp;
    temp = calloc(1, sizeof(struct sorting));
    printf("Enter the data:\n");
    scanf("%d", &temp->data);

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        last->next = temp;
    }
    last = temp;
    printf("Inserted data is %d\n", temp->data);
}

void sort_ascending()
{
    struct sorting *temp;
    int len, i, j;
    len = display_linkedlist();
    temp = head;
    int a[len];
    for (i = 0; i < len; i++)
    {
        a[i] = temp->data;
        temp = temp->next;
    }
    for (i = 1; i < len; i++)
    {
        for (j = 0; j <= len - 1; j++)
        {
            if (a[i] < a[j])
            {
                int temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sorted linked list is: ");
    for (i = 0; i < len; i++)
    {
        printf("\n%d \t", a[i]);
    }
}

int display_linkedlist()
{
    unsigned int count = 0;
    struct sorting *temp;

    temp = head;
    printf("Your unsorted linked list elements are: \n");
    while (temp != NULL)
    {
        printf("%d \t", temp->data);
        temp = temp->next;
        count = count + 1;
    }
    return count;
}