#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 100

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

// Function prototypes
void displayHighCGPA(struct Student arr[], int n);
int insertStudent(struct Student arr[], int n);
int deleteStudentByName(struct Student arr[], int n, char name[]);
void modifyStudent(struct Student arr[], int n, int ID);

int main()
{
    struct Student students[MAX_STUDENTS];
    int n, choice;
    char name[50];

    printf("Enter number of students: ");
    scanf("%d", &n);
    fflush(stdin);

    // Input initial students
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &students[i].ID);
        fflush(stdin);

        printf("Name: ");
        gets(students[i].Name);

        printf("Age: ");
        scanf("%d", &students[i].Age);
        fflush(stdin);

        printf("CGPA: ");
        scanf("%f", &students[i].Cgpa);
        fflush(stdin);

        printf("Gender: ");
        gets(students[i].Gender);

        printf("Contact Number: ");
        gets(students[i].ContactNumber);

        printf("Address: ");
        gets(students[i].Address);
    }
     do {
        printf("\n----- MENU -----\n");
        printf("1. Display students with CGPA > 3.5\n");
        printf("2. Insert new student\n");
        printf("3. Delete student by name\n");
        printf("4. Modify contact number or address by ID\n");
        printf("5. Display all students\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        fflush(stdin);

        switch(choice)
        {
            case 1:
                displayHighCGPA(students, n);
                break;

            case 2:
                n = insertStudent(students, n);
                break;
                 case 3:
                printf("Enter the name of student to delete: ");
                gets(name);
                n = deleteStudentByName(students, n, name);
                break;

            case 4:
            {
                int id;
                printf("Enter ID of student to modify: ");
                scanf("%d", &id);
                fflush(stdin);
                modifyStudent(students, n, id);
                break;
            }

            case 5:
                printf("\nAll student records:\n");
                for(int i = 0; i < n; i++)
                {
                    printf("ID: %d, Name: %s, CGPA: %.2f, Age: %d, Gender: %s, Contact: %s, Address: %s\n",
                           students[i].ID, students[i].Name, students[i].Cgpa, students[i].Age,
                           students[i].Gender, students[i].ContactNumber, students[i].Address);
                }
                break;
                case 0:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 0);

    return 0;
}

// Function implementations

void displayHighCGPA(struct Student arr[], int n)
{
    printf("\nStudents with CGPA > 3.5:\n");
    int found = 0;
    for(int i = 0; i < n; i++)
    {
     if(arr[i].Cgpa > 3.5)
        {
            printf("ID: %d, Name: %s\n", arr[i].ID, arr[i].Name);
            found = 1;
        }
    }
    if(!found)
        printf("No students found with CGPA > 3.5\n");
}

int insertStudent(struct Student arr[], int n)
{
    if(n >= MAX_STUDENTS)
    {
        printf("Array full. Cannot insert more students.\n");
        return n;
    }

    printf("\nEnter details for new student:\n");

    printf("ID: ");
    scanf("%d", &arr[n].ID);
     fflush(stdin);

    printf("Name: ");
    gets(arr[n].Name);

    printf("Age: ");
    scanf("%d", &arr[n].Age);
    fflush(stdin);

    printf("CGPA: ");
    scanf("%f", &arr[n].Cgpa);
    fflush(stdin);

    printf("Gender: ");
    gets(arr[n].Gender);

    printf("Contact Number: ");
    gets(arr[n].ContactNumber);

    printf("Address: ");
    gets(arr[n].Address);
    printf("Student inserted successfully.\n");
    return n + 1;
}

int deleteStudentByName(struct Student arr[], int n, char name[])
{
    int i, found = 0;
    for(i = 0; i < n; i++)
    {
        if(strcmp(arr[i].Name, name) == 0)
        {
            found = 1;
            break;
        }
    }
     if(found)
    {
        for(int j = i; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        printf("Student '%s' deleted successfully.\n", name);
        return n - 1;
    }
    else
    {
        printf("Student '%s' not found.\n", name);
        return n;
    }
}

void modifyStudent(struct Student arr[], int n, int ID)
{
    int i, found = 0;
    for(i = 0; i < n; i++)
    {
        if(arr[i].ID == ID)
        {
            found = 1;
            printf("\nModifying student: %s\n", arr[i].Name);
            int choice;
            printf("Modify:\n1. Contact Number\n2. Address\nEnter choice: ");
            scanf("%d", &choice);
            fflush(stdin);
            if(choice == 1)
            {
                printf("Enter new contact number: ");
                gets(arr[i].ContactNumber);
                printf("Contact number updated.\n");
            }
            else if(choice == 2)
            {
                printf("Enter new address: ");
                gets(arr[i].Address);
                printf("Address updated.\n");
            }
            else
            {
                printf("Invalid choice.\n");
            }
            break;
        }
    }
    if(!found)
    {
        printf("Student with ID %d not found.\n", ID);
    }
}







