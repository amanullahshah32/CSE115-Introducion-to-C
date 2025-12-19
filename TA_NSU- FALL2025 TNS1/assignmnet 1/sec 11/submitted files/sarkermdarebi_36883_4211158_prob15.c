#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    int ID;
    char Name[50];
    float Cgpa;
    int Age;
    char Gender;           /* e.g. 'M' or 'F' */
    char ContactNumber[20];
    char Address[100];
};

void displayHighCgpa(struct Student s[], int n)
{
    int i;
    printf("Students with CGPA > 3.5:\n");
    for (i = 0; i < n; i++) {
        if (s[i].Cgpa > 3.5f) {
            printf("ID: %d, Name: %s, CGPA: %.2f\n",
                   s[i].ID, s[i].Name, s[i].Cgpa);
        }
    }
}

void insertStudent(struct Student s[], int *n)
{
    if (*n >= MAX_STUDENTS) {
        printf("Array is full. Cannot insert.\n");
        return;
    }

    printf("Enter new student information:\n");
    printf("ID: ");
    scanf("%d", &s[*n].ID);

    printf("Name: ");
    scanf(" %49[^\n]", s[*n].Name);

    printf("CGPA: ");
    scanf("%f", &s[*n].Cgpa);

    printf("Age: ");
    scanf("%d", &s[*n].Age);

    printf("Gender (M/F): ");
    scanf(" %c", &s[*n].Gender);

    printf("Contact Number: ");
    scanf(" %19[^\n]", s[*n].ContactNumber);

    printf("Address: ");
    scanf(" %99[^\n]", s[*n].Address);

    (*n)++;

    printf("Student inserted at the end.\n");
}

void deleteStudentByName(struct Student s[], int *n)
{
    char name[50];
    int i, j;
    int index = -1;

    if (*n == 0) {
        printf("No students to delete.\n");
        return;
    }

    printf("Enter name of student to delete: ");
    scanf(" %49[^\n]", name);

    for (i = 0; i < *n; i++) {
        if (strcmp(s[i].Name, name) == 0) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Student with given name not found.\n");
        return;
    }

    for (j = index; j < *n - 1; j++) {
        s[j] = s[j + 1];
    }
    (*n)--;

    printf("Student deleted.\n");
}

void modifyStudent(struct Student s[], int n)
{
    int id;
    int i;
    int choice;

    if (n == 0) {
        printf("No students to modify.\n");
        return;
    }

    printf("Enter ID of student to modify: ");
    scanf("%d", &id);

    int index = -1;
    for (i = 0; i < n; i++) {
        if (s[i].ID == id) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Student with this ID not found.\n");
        return;
    }

    printf("What do you want to modify?\n");
    printf("1. Contact Number\n");
    printf("2. Address\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter new contact number: ");
        scanf(" %19[^\n]", s[index].ContactNumber);
        printf("Contact number updated.\n");
    } else if (choice == 2) {
        printf("Enter new address: ");
        scanf(" %99[^\n]", s[index].Address);
        printf("Address updated.\n");
    } else {
        printf("Invalid choice.\n");
    }
}

int main(void)
{
    struct Student students[MAX_STUDENTS];
    int n, i;
    int option;

    printf("Enter number of students (<= %d): ", MAX_STUDENTS);
    scanf("%d", &n);

    if (n < 0 || n > MAX_STUDENTS) {
        printf("Invalid number.\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].ID);

        printf("Name: ");
        scanf(" %49[^\n]", students[i].Name);

        printf("CGPA: ");
        scanf("%f", &students[i].Cgpa);

        printf("Age: ");
        scanf("%d", &students[i].Age);

        printf("Gender (M/F): ");
        scanf(" %c", &students[i].Gender);

        printf("Contact Number: ");
        scanf(" %19[^\n]", students[i].ContactNumber);

        printf("Address: ");
        scanf(" %99[^\n]", students[i].Address);
    }

    do {
        printf("\nMenu:\n");
        printf("1. Display students with CGPA > 3.5\n");
        printf("2. Insert new student at end\n");
        printf("3. Delete student by name\n");
        printf("4. Modify contact number or address by ID\n");
        printf("5. Exit\n");
        printf("Enter option: ");
        scanf("%d", &option);

        switch (option) {
        case 1:
            displayHighCgpa(students, n);
            break;
        case 2:
            insertStudent(students, &n);
            break;
        case 3:
            deleteStudentByName(students, &n);
            break;
        case 4:
            modifyStudent(students, n);
            break;
        case 5:
            printf("Exiting.\n");
            break;
        default:
            printf("Invalid option.\n");
        }
    } while (option != 5);

    return 0;
}

