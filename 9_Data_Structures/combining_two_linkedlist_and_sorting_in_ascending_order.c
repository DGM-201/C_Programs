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
void sort_ascending();

int main()
{
    unsigned int options = 0;

    printf("\nEnter your choice!\n");
    printf("Enter '1' to insert data to structure 1.\n");
    printf("Enter '2' to insert data to structure 2.\n");
    printf("Enter '3' to MERGE and SORT DATA in ASCENDING order.\n");
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
        sort_ascending();
        break;

    default:
        printf("Invalid Input / Exiting!.\n");
        break;
    }
    return 0;
}

void push_to_linkedlist1()
{
    struct linkedlist1 *temp = NULL;
    temp = calloc(1, sizeof(struct linkedlist2));

    if (temp == NULL)
    {
        printf("ERROR!: Memory not ALLOCATED!.\n");
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
    struct linkedlist2 *temp = NULL;
    temp = calloc(1, sizeof(struct linkedlist2));

    if (temp == NULL)
    {
        printf("ERROR!: Memory not ALLOCATED!.\n");
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
    struct linkedlist1 *temp = NULL;
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
    struct linkedlist2 *temp = NULL;
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
    struct linkedlist1 *temp = NULL;
    struct linkedlist1 *last_element = NULL;

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

void sort_ascending()
{
    struct linkedlist1 *temp = NULL;
    int len = 0, i = 0, j = 0, temp = 0;
    int a[len];

    temp = head1;
    len = display_merged_linkedlist();

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