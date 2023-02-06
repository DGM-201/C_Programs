// C program to get and display details of Employee details using structures.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee
{
    char student_name[32];
    char student_id[32];
    char address[200];
    char blood_group[20];
};

void main()
{
    unsigned int user_number, i;
    printf("**Employee details**\n");
    printf("Enter the number of users you want to input: ");
    scanf("%d", &user_number);

    struct employee details[user_number];

    char employeename[32];
    char employeeid[32];
    char address[200];
    char bloodgroup[20];

    for (i = 0; i < user_number; i++)
    {
        printf("\nEnter employee name: \n");
        fflush(stdin);
        gets(employeename);
        strcpy(details[i].student_name, employeename);

        printf("Enter employee Id : \n");
        fflush(stdin);
        gets(employeeid);
        strcpy(details[i].student_id, employeeid);

        printf("Enter address: \n");
        fflush(stdin);
        gets(address);
        strcpy(details[i].address, address);

        printf("Enter blood group: \n");
        fflush(stdin);
        gets(bloodgroup);
        strcpy(details[i].blood_group, bloodgroup);

        printf("\nEmployee details of User No.%d is: \n", i);
        printf("Employee Name: %s\nEmployee ID: %s\nAddress: %s\n", employeename, employeeid, address);
        printf("Blood Group: %s\n", bloodgroup);
    }
}