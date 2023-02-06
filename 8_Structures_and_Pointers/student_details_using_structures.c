#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
    char NAME[32];
    char STUDENT_ID[32];
    unsigned int CLASS;
};


// int main()
// {
//     struct student details;

//     printf("\nEnter name of the student: ");
//     fflush(stdin);
//     gets(details.NAME);

//     printf("Enter Student ID: ");
//     fflush(stdin);
//     gets(details.STUDENT_ID);

//     printf("Class: ");
//     scanf("%d", &details.CLASS);

//     printf("\nStudent name is '%s'\n", details.NAME);
//     printf("Student ID:  %s\n", details.STUDENT_ID);
//     printf("Class: %d\n", details.CLASS);

//     return 0;
// }

// Using Malloc

int main()
{
    struct student details;

    char *name = malloc(sizeof(char));
    char *student_id = malloc(sizeof(char));
    unsigned int *class = malloc(sizeof(int));

    printf("\nEnter name of the student: ");
    fflush(stdin);
    gets(name);
    strcpy(details.NAME, name);

    printf("Enter Student ID: ");
    fflush(stdin);
    gets(student_id);
    strcpy(details.STUDENT_ID, student_id);

    printf("Class: ");
    scanf("%d", &class);
    details.CLASS = *class;

    printf("\nStudent name is '%s'\n", details.NAME);
    printf("Student ID:  %s\n", details.STUDENT_ID);
    printf("Class: %d\n", details.CLASS);

    return 0;
}