/* 2. Attached is the marks scored at a university. The structure of the file is as such

1:64,90,44,51,48,36 -> <Student ID>:<marks in sub1>,<marks in sub2>,<marks in sub3>,<marks in sub4>,
<marks in sub5>,<marks in sub6>

The university is wanting to find the answers to below.
a.	Who are the top three scorers?
b.	How many of them have failed? The criteria being, if they have scored less than 35 in a subject,
    then they are considered as failed candidates
c.	How many of them have scored a hundred in at least one subject?
d.	What are the top 10 scores in Maths, considering the 4th subject is the marks of Math? */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 500

void read_file();
void write_file();
void rank_list();
void failures_list();
void outofout_list();
void math_toppers();

struct student_marks_list
{
    unsigned int student_id;
    unsigned int sub1_marks;
    unsigned int sub2_marks;
    unsigned int sub3_marks;
    unsigned int sub4_marks;
    unsigned int sub5_marks;
    unsigned int sub6_marks;
    unsigned int total_marks;
    struct student_marks_list *next;
};

struct student_marks_list *top = NULL;

int main()
{
    // Calling Functions

    read_file();

    rank_list();

    failures_list();

    outofout_list();

    math_toppers();

    return 0;
}

void read_file()
{
    unsigned int i = 0;
    FILE *fp;
    fp = fopen("marks.txt", "r");

    for (i = 0; i < SIZE; i++)
    {
        struct student_marks_list *temp = NULL;

        temp = calloc(1, sizeof(struct student_marks_list));

        if (temp == NULL)
        {
            printf("MEMORY ALLOCATION FAILED!.");
        }
        else
        {
            fscanf(fp, "%d %d %d %d %d %d %d", &temp->student_id, &temp->sub1_marks, &temp->sub2_marks, &temp->sub3_marks, &temp->sub4_marks, &temp->sub5_marks, &temp->sub6_marks);
            temp->total_marks = temp->sub1_marks + temp->sub2_marks + temp->sub3_marks + temp->sub4_marks + temp->sub5_marks + temp->sub6_marks;
            temp->next = top;
            top = temp;
        }
    }

    fclose(fp);
}

void write_file(char string[50])
{
    struct student_marks_list *temp;
    temp = top;
    FILE *fptr;
    int i = 0;

    fptr = fopen(string, "w");
    fprintf(fptr, "                                     RANK LIST                                          \n");
    fprintf(fptr, "RANK\tStudent_ID\tSub1_Marks\tSub2_Marks\tSub3_Marks\tSub4_Marks\tSub5_Marks\tSub6_Marks\tTotal_Marks\n");

    for (i = 1; i < (SIZE + 1); i++)
    {
        fprintf(fptr, "%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", i, temp->student_id, temp->sub1_marks, temp->sub2_marks, temp->sub3_marks, temp->sub4_marks, temp->sub5_marks, temp->sub6_marks, temp->total_marks);
        temp = temp->next;
    }

    fclose(fptr);
}

void rank_list()
{
    unsigned int i;
    struct student_marks_list *previous = NULL, *next = NULL;
    struct student_marks_list temp;

    for (i = 0; i < 500; i++)
    {
        previous = top;

        while (previous->next != NULL)
        {
            next = previous;
            previous = previous->next;

            if (previous->total_marks > next->total_marks)
            {
                temp.student_id = previous->student_id;
                temp.sub1_marks = previous->sub1_marks;
                temp.sub2_marks = previous->sub2_marks;
                temp.sub3_marks = previous->sub3_marks;
                temp.sub4_marks = previous->sub4_marks;
                temp.sub5_marks = previous->sub5_marks;
                temp.sub6_marks = previous->sub6_marks;
                temp.total_marks = previous->total_marks;

                previous->student_id = next->student_id;
                previous->sub1_marks = next->sub1_marks;
                previous->sub2_marks = next->sub2_marks;
                previous->sub3_marks = next->sub3_marks;
                previous->sub4_marks = next->sub4_marks;
                previous->sub5_marks = next->sub5_marks;
                previous->sub6_marks = next->sub6_marks;
                previous->total_marks = next->total_marks;

                next->student_id = temp.student_id;
                next->sub1_marks = temp.sub1_marks;
                next->sub2_marks = temp.sub2_marks;
                next->sub3_marks = temp.sub3_marks;
                next->sub4_marks = temp.sub4_marks;
                next->sub5_marks = temp.sub5_marks;
                next->sub6_marks = temp.sub6_marks;
                next->total_marks = temp.total_marks;
            }
        }
    }

    write_file("OUTPUT1_Rank_List.txt");
}

void failures_list()
{
    struct student_marks_list *temp;
    FILE *fptr;
    int count = 1;
    temp = top;

    fptr = fopen("OUTPUT2_Failures_List.txt", "w");

    fprintf(fptr, "                                 FAILURES LIST                                          \n");
    fprintf(fptr, "Count\tStudent_ID\tSub1_Marks\tSub2_Marks\tSub3_Marks\tSub4_Marks\tSub5_Marks\tSub6_Marks\tTotal_Marks\n");

    while (temp->next != NULL)
    {
        if (temp->sub1_marks < 35 || temp->sub2_marks < 35 || temp->sub3_marks < 35 || temp->sub4_marks < 35 || temp->sub5_marks < 35 || temp->sub6_marks < 35)
        {
            fprintf(fptr, "%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", count++, temp->student_id, temp->sub1_marks, temp->sub2_marks, temp->sub3_marks, temp->sub4_marks, temp->sub5_marks, temp->sub6_marks, temp->total_marks);
        }
        temp = temp->next;
    }
    fclose(fptr);
}

void outofout_list()
{
    struct student_marks_list *temp;
    FILE *fptr;
    int count = 1;
    temp = top;

    fptr = fopen("OUTPUT3_OutofOut_List.txt", "w");

    fprintf(fptr, "                                 OUTOFOUT LIST                                          \n");
    fprintf(fptr, "Count\tStudent_ID\tSub1_Marks\tSub2_Marks\tSub3_Marks\tSub4_Marks\tSub5_Marks\tSub6_Marks\tTotal_Marks\n");

    while (temp->next != NULL)
    {
        if (temp->sub1_marks == 100 || temp->sub2_marks == 100 || temp->sub3_marks == 100 || temp->sub4_marks == 100 || temp->sub5_marks == 100 || temp->sub6_marks == 100)
        {
            fprintf(fptr, "%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", count++, temp->student_id, temp->sub1_marks, temp->sub2_marks, temp->sub3_marks, temp->sub4_marks, temp->sub5_marks, temp->sub6_marks, temp->total_marks);
        }
        temp = temp->next;
    }
    fclose(fptr);
}

void math_toppers()
{
    struct student_marks_list *temp;
    FILE *fptr;
    int count = 1;
    temp = top;

    fptr = fopen("OUTPUT4_Math_Toppers_List.txt", "w");

    fprintf(fptr, "      MATH TOPPERS LIST      \n");
    fprintf(fptr, "Count\tStudent_ID\tSub4_Marks\n");

    while (temp->next != NULL)
    {
        if (temp->sub4_marks == 100)
        {
            fprintf(fptr, "%d\t\t%d\t\t%d\n", count++, temp->student_id, temp->sub4_marks);
        }
        temp = temp->next;
    }
    fclose(fptr);
}