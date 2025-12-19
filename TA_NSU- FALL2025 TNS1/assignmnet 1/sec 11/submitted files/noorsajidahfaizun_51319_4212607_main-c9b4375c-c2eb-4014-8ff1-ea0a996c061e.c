#include <stdio.h>
#include <string.h>

struct Student
{
    int ID;
    char Name[50];
    float Cgpa;
    int Age;
    char Gender[10];
    char ContactNumber[20];
    char Address[100];
};


void displayHighCGPA(struct Student students[], int n)
{
    printf("\nStudents with CGPA > 3.5:\n");
    for (int i = 0; i < n; i++)
    {
        if (students[i].Cgpa > 3.5)
        {
            printf("ID: %d, Name: %s\n", students[i].ID, students[i].Name);
        }
    }
}

void insertStudent(struct Student students[], int *n)
{
    if (*n >= 100)
    {
        printf("Array is full. Cannot insert new student.\n");
        return;
    }

    printf("\nEnter details for new student:\n");
    printf("ID: ");
    scanf("%d", &students[*n].ID);
    printf("Name: ");
    scanf(" %[^\n]", students[*n].Name);
    printf("CGPA: ");
    scanf("%f", &students[*n].Cgpa);
    printf("Age: ");
    scanf("%d", &students[*n].Age);
    printf("Gender: ");
    scanf(" %[^\n]", students[*n].Gender);
    printf("Contact Number: ");
    scanf(" %[^\n]", students[*n].ContactNumber);
    printf("Address: ");
    scanf(" %[^\n]", students[*n].Address);

    (*n)++;
    printf("Student inserted successfully.\n");
}

void deleteStudentByName(struct Student students[], int *n, char name[])
{
    int found = 0;
    for (int i = 0; i < *n; i++)
    {
        if (strcmp(students[i].Name, name) == 0)
        {
            found = 1;

            for (int j = i; j < *n - 1; j++)
            {
                students[j] = students[j + 1];
            }
            (*n)--;
            printf("Student '%s' deleted successfully.\n", name);
            break;
        }
    }
    if (!found)
    {
        printf("Student with name '%s' not found.\n", name);
    }
}
D
void modifyStudentByID(struct Student students[], int n, int id)
{
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (students[i].ID == id)
        {
            found = 1;
            int choice;
            printf("\nModify for student %s (ID %d):\n", students[i].Name, students[i].ID);
            printf("1. Contact Number\n2. Address\nEnter choice: ");
            scanf("%d", &choice);

            if (choice == 1)
            {
                printf("Enter new Contact Number: ");
                scanf(" %[^\n]", students[i].ContactNumber);
                printf("Contact Number updated successfully.\n");
            }
            else if (choice == 2)
            {
                printf("Enter new Address: ");
                scanf(" %[^\n]", students[i].Address);
                printf("Address updated successfully.\n");
            }
            else
            {
                printf("Invalid choice.\n");
            }
            break;
        }
    }
    if (!found)
    {
        printf("Student with ID %d not found.\n", id);
    }
}

int main()
{
    struct Student students[100];
    int n, choice;
    char name[50];
    int id;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].ID);
        printf("Name: ");
        scanf(" %[^\n]", students[i].Name);
        printf("CGPA: ");
        scanf("%f", &students[i].Cgpa);
        printf("Age: ");
        scanf("%d", &students[i].Age);
        printf("Gender: ");
        scanf(" %[^\n]", students[i].Gender);
        printf("Contact Number: ");
        scanf(" %[^\n]", students[i].ContactNumber);
        printf("Address: ");
        scanf(" %[^\n]", students[i].Address);
    }

    do
    {
        printf("\n--- Menu ---\n");
        printf("1. Display students with CGPA > 3.5\n");
        printf("2. Insert new student\n");
        printf("3. Delete student by name\n");
        printf("4. Modify student by ID\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            displayHighCGPA(students, n);
            break;
        case 2:
            insertStudent(students, &n);
            break;
        case 3:
            printf("Enter name of student to delete: ");
            scanf(" %[^\n]", name);
            deleteStudentByName(students, &n, name);
            break;
        case 4:
            printf("Enter student ID to modify: ");
            scanf("%d", &id);
            modifyStudentByID(students, n, id);
            break;
        case 5:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice. Try again.\n");
        }
    }
    while (choice != 5);

    return 0;
}
