/*1. Write a program to extract student id, marks and grade encoded in the following format.


Input: 0x43,0x78: output: student id: 0x21: Marks: 94; grade: 1st class

(grade: 0: 1st class, 1: 2nd class, 2: 3rd class, 3: Fail) */

#include <stdio.h>

void main()
{

    int data1 = 0, data2 = 0, student_id = 0, grade = 0, marks = 0;

    printf("Enter the Student ID and Marks(Lower Part) in hexadecimal format: ");
    scanf("%x", &data1);
    printf("Enter the Marks(Upper Part) and Grade in hexadecimal format: ");
    scanf("%x", &data2);

    student_id = data1 >> 1;

    printf("Student ID is 0x%x or %d.\n", student_id, student_id);

    grade = data2 & 0x00000003;

    if (grade == 0)
    {
        printf("RANK: 1st Class\n");
    }

    else if (grade == 1)
    {
        printf("RANK: 2nd CLASS\n");
    }

    else if (grade == 2)
    {
        printf("RANK: 3rd CLASS\n");
    }

    else
    {
        printf("FAIL\n");
    }

    data1 = ((data1 & 0x00000001) << 6);
    data2 = data2 >> 2;
    marks = data1 | data2;

    printf("Total marks is %d\n", marks);
}