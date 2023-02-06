/* C Program to take student name and marks and print the information like rank list all using
 malloc (dynamic memory allocation) and free it after runtime */

#include <stdio.h>
#include <stdlib.h>

void add_student_info();
void display_student_details();
void rank_details();

struct student_details
{
    char name[32];
    signed int marks_in_physics;
    signed int marks_in_chemistry;
    signed int marks_in_maths;
    signed int marks_in_elective;
};

int main()
{
    add_student_info();
    return 0;
}

void add_student_info()
{
    unsigned int size, i;
	
    printf("Enter the number of student you want to input: ");
    scanf("%d", &size);
	
    struct student_details *student[size];

    for (i = 1; i <= size; i++)
    {
        student[i] = calloc(1, sizeof(struct student_details));

        printf("Enter the details of Student Roll No.%d\n", i);

        printf("Enter the student name: ");
        scanf("%s", &student[i]->name);

        printf("Enter Physics Marks: ");
        scanf("%d", &student[i]->marks_in_physics);

        printf("Enter Chemistry Marks: ");
        scanf("%d", &student[i]->marks_in_chemistry);

        printf("Enter Maths Marks: ");
        scanf("%d", &student[i]->marks_in_maths);

        printf("Enter Elective Marks e.g. Biology/ Computer Science/ Electronics Marks: ");
        scanf("%d", &student[i]->marks_in_elective);
    }
	
    display_student_details(size, student);
}

void display_student_details(int size, struct student_details *student[])
{
    int i;
	
    for (i = 1; i <= size; i++)
    {
        printf("\nMarks sheet of Student Roll No.%d ", i);
        printf("%s is: \n", student[i]->name);
        printf("Physics: %d\n", student[i]->marks_in_physics);
        printf("Chemistry: %d\n", student[i]->marks_in_chemistry);
        printf("Maths: %d\n", student[i]->marks_in_maths);
        printf("Biology/ Computer Science/ Electronics: %d\n", student[i]->marks_in_elective);
    }
}