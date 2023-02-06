// C program to get and display details of Aadhar card using structures.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aadhar
{
    unsigned int aadhar_number;
    char name[32];
    char date_of_birth[10];
    char address[100];
    char gender[10];
    char father_name[32];
};

void main()
{
// Version 1
    // struct aadhar_details id1= {123456, "Dinesh", "1/1/2001", "Bangalore", "Male", "Manju"};
    // printf("Aadhaar details of ID No.1 is:\n");

    unsigned int i, user_number, number;
    char name[32];
    char dob[10];
    char address[100];
    char gender[10];
    char fathername[32];

// Version 2
    // printf("Enter your aadhaar number: ");
    // scanf("%d", &details.aadhar_number);
    // printf("Enter your name: \n");
    // scanf("%s", &details.name);
    // printf("Enter your DOB: \n");
    // scanf("%s", &details.date_of_birth);
    // printf("Enter your address: \n");
    // scanf("%s", &details.address);
    // printf("Enter your gender: \n");
    // scanf("%s", &details.gender);
    // printf("Enter your father name: \n");
    // scanf("%s", &details.father_name);

    // printf("\nYour aadhaar details is: \n");
    // printf("Aadhaar Number: %d\nName: %s\nDOB: %s\n", details.aadhar_number, details.name, details.date_of_birth);
    // printf("Address: %s\nGender: %s\nFather Name: %s\n", details.address, details.gender, details.father_name);

// Version 3
    // for (i = 0; i < 2; i++)
    // {
    //     printf("Enter your aadhaar number: ");
    //     scanf("%d", &details[i].aadhar_number);
    //     printf("Enter your name: \n");
    //     scanf("%s", &details[i].name);
    //     printf("Enter your DOB: \n");
    //     scanf("%s", &details[i].date_of_birth);
    //     printf("Enter your address: \n");
    //     scanf("%s", &details[i].address);
    //     printf("Enter your gender: \n");
    //     scanf("%s", &details[i].gender);
    //     printf("Enter your father name: \n");
    //     scanf("%s", &details[i].father_name);
    // }

    // for (i = 0; i < 2; i++)
    // {
    //     printf("\nYour aadhaar details is: \n");
    //     printf("Aadhaar Number: %d\nName: %s\nDOB: %s\n", details[i].aadhar_number, details[i].name, details[i].date_of_birth);
    //     printf("Address: %s\nGender: %s\nFather Name: %s\n", details[i].address, details[i].gender, details[i].father_name);
    // }

//Version 4
    printf("**Aadhaar Details**\n");
    printf("Enter the number of users you want to input: ");
    scanf("%d", &user_number);
    
    struct aadhar details[user_number];

    for (i = 0; i < user_number; i++)
    {
        printf("\nEnter your aadhaar number: ");
        scanf("%d", &number);
        details[i].aadhar_number = number;

        printf("Enter your name: \n");
        scanf("%s", &name);
        strcpy(details[i].name, name);

        printf("Enter your DOB: \n");
        scanf("%s", &dob);
        strcpy(details[i].date_of_birth, dob);

        printf("Enter your address: \n");
        scanf("%s", &address);
        strcpy(details[i].address, address);

        printf("Enter your gender: \n");
        scanf("%s", &gender);
        strcpy(details[i].gender, gender);
        
        printf("Enter your father name: \n");
        scanf("%s", &fathername);
        strcpy(details[i].father_name, fathername);

        printf("\nAadhaar details of User No.%d is: \n", i);
        printf("Aadhaar Number: %d\nName: %s\nDOB: %s\n", details[i].aadhar_number, details[i].name, details[i].date_of_birth);
        printf("Address: %s\nGender: %s\nFather Name: %s\n", details[i].address, details[i].gender, details[i].father_name);
    }
}