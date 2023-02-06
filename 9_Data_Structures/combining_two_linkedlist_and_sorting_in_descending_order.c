// C Program to sort linked list in ascending order.

#include <stdio.h>
#include <stdlib.h>

struct linkedlist1 *head1 = NULL, *last1 = NULL;
struct linkedlist2 *head2 = NULL, *last2 = NULL;

struct linkedlist1
{
    int data;
    struct linkedlist1 *next;
};

struct linkedlist2
{
    int data;
    struct linkedlist2 *next;
};

void push_to_linkedlist1();
void push_to_linkedlist2();
void display_linkedlist1();
void display_linkedlist2();
int display_merged_linkedlist();
void sort_descending();

int main()
{
    unsigned int options;
    printf("\nEnter your choice!\n");
    printf("Enter '1' to insert data to structure 1.\n");
    printf("Enter '2' to insert data to structure 2.\n");
    printf("Enter '3' to MERGE and SORT DATA in DESCENDING Order.\n");
    printf("Press any Key to EXIT!.\n");
    scanf("%d", &options);
    switch (options)
    {
    case 1:
        push_to_linkedlist1();
        break;

    case 2:
        push_to_linkedlist2();
        break;

    case 3:
        sort_descending();
        break;

    default:
        printf("Invalid Input / Exiting!.\n");
        break;
    }
    return 0;
}

void push_to_linkedlist1()
{
    struct linkedlist1 *temp;
    temp = calloc(1, sizeof(struct linkedlist2));

    if (temp == NULL)
    {
        printf("ERROR!: Memory not Initilaized!.\n");
    }
    else
    {
        printf("Enter the data to be pushed into the first structure:\n");
        scanf("%d", &temp->data);
        if (head1 == NULL)
        {
            head1 = temp;
        }
        else
        {
            last1->next = temp;
        }
        last1 = temp;
        printf("Data Pushed is %d.\n", temp->data);
    }
    main();
}

void push_to_linkedlist2()
{
    struct linkedlist2 *temp;
    temp = calloc(1, sizeof(struct linkedlist2));

    if (temp == NULL)
    {
        printf("ERROR!: Memory not Initilaized!.\n");
    }
    else
    {
        printf("Enter the data to be pushed into the second structure:\n");
        scanf("%d", &temp->data);
        if (head2 == NULL)
        {
            head2 = temp;
        }
        else
        {
            last2->next = temp;
        }
        last2 = temp;
        printf("Data Pushed is %d.\n", temp->data);
    }
    main();
}

void display_linkedlist1()
{
    struct linkedlist1 *temp;
    temp = head1;

    printf("Elements in linked list 1 are: \n");
    while (temp != NULL)
    {
        printf("%d \t", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void display_linkedlist2()
{
    struct linkedlist2 *temp;
    temp = head2;

    printf("Elements linked list 2 are: \n");
    while (temp != NULL)
    {
        printf("%d \t", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int display_merged_linkedlist()
{
    unsigned int count = 0;
    struct linkedlist1 *temp;
    struct linkedlist1 *last_element;

    display_linkedlist1();
    display_linkedlist2();

    temp = head1;
    while (temp != NULL)
    {
        last_element = temp;
        temp = temp->next;
    }
    last_element->next = (struct linkedlist1 *)head2;

    temp = head1;
    printf("Elements in Merged linked list are: \n");
    while (temp != NULL)
    {
        printf("%d \t", temp->data);
        temp = temp->next;
        count = count + 1;
    }
    return count;
}

void sort_descending()
{
    struct linkedlist1 *temp;
    int len, i, j;
    len = display_merged_linkedlist();
    temp = head1;
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
            if (a[i] > a[j])
            {
                int temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nSorted linked list is: \n");
    for (i = 0; i < len; i++)
    {
        printf("%d \t", a[i]);
    }
    main();
}