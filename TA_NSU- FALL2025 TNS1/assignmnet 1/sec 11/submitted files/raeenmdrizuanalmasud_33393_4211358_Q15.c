/* 15. Create a structure called Student with the following members: ID, Name, CgpaAge,
Gender, ContactNumber and Address. Assume that there will be maximum of 100
students in the array.
Populate the array with information of n number of students (the number n is to be
provided by user). [You may write a menu driven program or you may make function
calls from main().You may not declare the array of structure as global variable.]
a) Write a function to display id and names of all students who have a CGPA more than
3.5 in the n number of students in the array
b)Write a function to insert a new student information at the end of n number of students
in the array
c)Write a function to delete student information given a name by the user [Consider all
names are unique]
d) Write a function to modify contact number or address of a record given the ID number
of a student.
 */

#include <stdio.h>
#include <string.h>

struct Student
{
    int ID;
    char Name[50];
    float Cgpa;
    int Age;
    char Gender[10];
    char ContactNumber[15];
    char Address[100];
};

void displayHighCgpa(struct Student students[], int n)
{
    int i;
    printf("Students with CGPA > 3.5:\n");
    for(i = 0; i < n; i++)
    {
        if(students[i].Cgpa > 3.5)
            printf("ID: %d, Name: %s\n", students[i].ID, students[i].Name);
    }
}

int insertStudent(struct Student students[], int n)
{
    if(n >= 100)
    {
        printf("Array is full. Cannot insert new student.\n");
        return n;
    }
    printf("Enter new student information:\n");
    printf("ID: ");
    scanf("%d", &students[n].ID);
    printf("Name: ");
    scanf(" %[^\n]", students[n].Name);
    printf("CGPA: ");
    scanf("%f", &students[n].Cgpa);
    printf("Age: ");
    scanf("%d", &students[n].Age);
    printf("Gender: ");
    scanf(" %[^\n]", students[n].Gender);
    printf("Contact Number: ");
    scanf(" %[^\n]", students[n].ContactNumber);
    printf("Address: ");
    scanf(" %[^\n]", students[n].Address);
    return n + 1;
}

int deleteStudentByName(struct Student students[], int n, char name[])
{
    int i, found = 0;
    for(i = 0; i < n; i++)
    {
        if(strcmp(students[i].Name, name) == 0)
        {
            int j;
            for(j = i; j < n - 1; j++)
                students[j] = students[j + 1];
            n--;
            found = 1;
            break;
        }
    }
    if(!found)
        printf("Student with name %s not found.\n", name);
    return n;
}

void modifyStudent(struct Student students[], int n, int id)
{
    int i, found = 0;
    for(i = 0; i < n; i++)
    {
        if(students[i].ID == id)
        {
            int choice;
            printf("Modify 1) Contact Number 2) Address: ");
            scanf("%d", &choice);
            if(choice == 1)
            {
                printf("Enter new Contact Number: ");
                scanf(" %[^\n]", students[i].ContactNumber);
            }
            else if(choice == 2)
            {
                printf("Enter new Address: ");
                scanf(" %[^\n]", students[i].Address);
            }
            found = 1;
            break;
        }
    }
    if(!found)
        printf("Student with ID %d not found.\n", id);
}

int main()
{
    struct Student students[100];
    int n, choice, id;
    char name[50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("Enter student %d information:\n", i + 1);
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
        printf("\nMenu:\n1) Display students with CGPA > 3.5\n2) Insert new student\n3) Delete student by name\n4) Modify student info by ID\n5) Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                displayHighCgpa(students, n);
                break;
            case 2:
                n = insertStudent(students, n);
                break;
            case 3:
                printf("Enter name to delete: ");
                scanf(" %[^\n]", name);
                n = deleteStudentByName(students, n, name);
                break;
            case 4:
                printf("Enter ID to modify: ");
                scanf("%d", &id);
                modifyStudent(students, n, id);
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while(choice != 5);

    return 0;
}

