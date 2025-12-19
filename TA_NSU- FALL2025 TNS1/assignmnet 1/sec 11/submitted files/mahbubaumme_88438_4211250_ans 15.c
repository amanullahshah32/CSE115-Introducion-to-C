#include <stdio.h>
#include <string.h>

struct Student
{
    int ID;
    char Name[50];
    float Cgpa;
    int Age;
    char Gender;
    char ContactNumber[20];
    char Address[100];
};

void displayHighCGPA(struct Student s[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (s[i].Cgpa > 3.5)
        {
            printf("ID: %d, Name: %s\n", s[i].ID, s[i].Name);
        }
    }
}

void insertStudent(struct Student s[], int *n)
{
    printf("Enter new student details:\n");
    printf("ID: ");
    scanf("%d", &s[*n].ID);
    printf("Name: ");
    scanf(" %[^\n]", s[*n].Name);
    printf("CGPA: ");
    scanf("%f", &s[*n].Cgpa);
    printf("Age: ");
    scanf("%d", &s[*n].Age);
    printf("Gender (M/F): ");
    scanf(" %c", &s[*n].Gender);
    printf("Contact Number: ");
    scanf(" %[^\n]", s[*n].ContactNumber);
    printf("Address: ");
    scanf(" %[^\n]", s[*n].Address);
    (*n)++;
    printf("Student added.\n");
}

void deleteStudent(struct Student s[], int *n)
{
    char delName[50];
    int i, found = 0;
    printf("Enter name to delete: ");
    scanf(" %[^\n]", delName);

    for (i = 0; i < *n; i++)
    {
        if (strcmp(s[i].Name, delName) == 0)
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        for (; i < *n - 1; i++)
        {
            s[i] = s[i + 1];
        }
        (*n)--;
        printf("Student deleted.\n");
    }
    else
    {
        printf("Student not found.\n");
    }
}

void modifyStudent(struct Student s[], int n)
{
    int id, i, choice, found = 0;
    printf("Enter ID to modify: ");
    scanf("%d", &id);

    for (i = 0; i < n; i++)
    {
        if (s[i].ID == id)
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        printf("1. Modify Contact Number\n2. Modify Address\nChoose: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("New Contact Number: ");
            scanf(" %[^\n]", s[i].ContactNumber);
        }
        else if (choice == 2)
        {
            printf("New Address: ");
            scanf(" %[^\n]", s[i].Address);
        }
        else
        {
            printf("Invalid choice.\n");
        }
        printf("Record updated.\n");
    }
    else
    {
        printf("ID not found.\n");
    }
}

int main()
{
    struct Student s[100];
    int n, i, option;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &s[i].ID);
        printf("Name: ");
        scanf(" %[^\n]", s[i].Name);
        printf("CGPA: ");
        scanf("%f", &s[i].Cgpa);
        printf("Age: ");
        scanf("%d", &s[i].Age);
        printf("Gender (M/F): ");
        scanf(" %c", &s[i].Gender);
        printf("Contact Number: ");
        scanf(" %[^\n]", s[i].ContactNumber);
        printf("Address: ");
        scanf(" %[^\n]", s[i].Address);
    }

    do
    {
        printf("\n1. Display students with CGPA > 3.5\n");
        printf("2. Insert new student\n");
        printf("3. Delete student by name\n");
        printf("4. Modify contact/address by ID\n");
        printf("5. Exit\n");
        printf("Choose: ");
        scanf("%d", &option);

        switch(option)
        {
        case 1:
            displayHighCGPA(s, n);
            break;
        case 2:
            insertStudent(s, &n);
            break;
        case 3:
            deleteStudent(s, &n);
            break;
        case 4:
            modifyStudent(s, n);
            break;
        case 5:
            printf("Exiting.\n");
            break;
        default:
            printf("Invalid option.\n");
        }
    }
    while(option != 5);

    return 0;
}

