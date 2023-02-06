/* 1. Write a program to read the results from the bitmap from the
input file, store it in the linked list if each candidate has passed
the subject and print the result of individual student based on the
id given. */

#include <stdio.h>
#include <stdlib.h>

struct student_results_list
{
    unsigned int student_id;
    char kannada;
    char english;
    char maths;
    char science;
    char social;
    char cs;
    unsigned int overall_result;
    struct student_results_list *next;
};

void read_files();
void write_file();

struct student_results_list *top = NULL;
struct student_results_list *top1 = NULL;

void main()
{
    // Calling Function

    read_files();
}

void read_files()
{
    int file_end = 0;
    int file_end1 = 0;
    FILE *fptr;
    FILE *fp;

    struct student_results_list *temp = NULL;
    struct student_results_list *temp1 = NULL;

    fp = fopen("input.txt", "r");
    fptr = fopen("input_reval.txt", "r");

    while (file_end != EOF && file_end1 != EOF)
    {
        temp = calloc(1, sizeof(struct student_results_list));
        temp1 = calloc(1, sizeof(struct student_results_list));

        if (temp == NULL || temp1 == NULL)
        {
            printf("MEMORY ALLOCATION FAILED!.");
        }
        else
        {
            file_end = fscanf(fp, "%d %x", &temp->student_id, &temp->overall_result);
            temp->next = top;
            top = temp;

            file_end1 = fscanf(fptr, "%d %x", &temp1->student_id, &temp1->overall_result);
            temp1->next = top1;
            top1 = temp1;
        }
    }

    fclose(fp);
    fclose(fptr);

    write_file("OUTPUT1_INITIAL_RESULTS.txt", 1);
    write_file("OUTPUT2_REVALUATION_RESULTS.txt", 2);
}

void write_file(char string[50], unsigned int option)
{
    struct student_results_list *temp = NULL;
    temp = top->next;
    struct student_results_list *temp1 = NULL;
    temp1 = top1->next;

    unsigned int kan_result = 0, eng_result = 0, math_result = 0, sci_result = 0, soc_result = 0, comsci_result = 0;

    if (option == 1)
    {
        FILE *fptr;

        fptr = fopen(string, "w");
        fprintf(fptr, string);
        fprintf(fptr, "\n    *P = PASS                               *F = FAIL            \n");
        fprintf(fptr, "Student_ID\tKANNADA\tENGLISH\tMATHS\tSCIENCE\tSOCIAL\tCOMPUTER_SCIENCE\n");

        while (temp != NULL)
        {
            kan_result = temp->overall_result & 1;
            (kan_result == 1) ? (temp->kannada = 'P') : (temp->kannada = 'F');

            eng_result = temp->overall_result & 2;
            (eng_result == 2) ? (temp->english = 'P') : (temp->english = 'F');

            math_result = temp->overall_result & 4;
            (math_result == 4) ? (temp->maths = 'P') : (temp->maths = 'F');

            sci_result = temp->overall_result & 8;
            (sci_result == 8) ? (temp->science = 'P') : (temp->science = 'F');

            soc_result = temp->overall_result & 16;
            (soc_result == 16) ? (temp->social = 'P') : (temp->social = 'F');

            comsci_result = temp->overall_result & 32;
            (comsci_result == 32) ? (temp->cs = 'P') : (temp->cs = 'F');

            fprintf(fptr, "%d\t\t%c\t\t%c\t\t%c\t\t%c\t\t%c\t\t%c\n", temp->student_id, temp->kannada, temp->english, temp->maths, temp->science, temp->social, temp->cs);
            temp = temp->next;
        }
        fclose(fptr);
    }
    else
    {
        FILE *fptr;

        fptr = fopen(string, "w");
        fprintf(fptr, string);
        fprintf(fptr, "\n    *P = PASS                               *F = FAIL            \n");
        fprintf(fptr, "Student_ID\tKANNADA\tENGLISH\tMATHS\tSCIENCE\tSOCIAL\tCOMPUTER_SCIENCE\n");

        while (temp != NULL && temp1 != NULL)
        {
            kan_result = (temp->overall_result | temp1->overall_result) & 1;
            (kan_result == 1) ? (temp->kannada = 'P') : (temp->kannada = 'F');

            eng_result = (temp->overall_result | temp1->overall_result) & 2;
            (eng_result == 2) ? (temp->english = 'P') : (temp->english = 'F');

            math_result = (temp->overall_result | temp1->overall_result) & 4;
            (math_result == 4) ? (temp->maths = 'P') : (temp->maths = 'F');

            sci_result = (temp->overall_result | temp1->overall_result) & 8;
            (sci_result == 8) ? (temp->science = 'P') : (temp->science = 'F');

            soc_result = (temp->overall_result | temp1->overall_result) & 16;
            (soc_result == 16) ? (temp->social = 'P') : (temp->social = 'F');

            comsci_result = (temp->overall_result | temp1->overall_result) & 32;
            (comsci_result == 32) ? (temp->cs = 'P') : (temp->cs = 'F');

            fprintf(fptr, "%d\t\t%c\t\t%c\t\t%c\t\t%c\t\t%c\t\t%c\n", temp->student_id, temp->kannada, temp->english, temp->maths, temp->science, temp->social, temp->cs);
            temp = temp->next;
            temp1 = temp1->next;
        }
        fclose(fptr);
    }
}