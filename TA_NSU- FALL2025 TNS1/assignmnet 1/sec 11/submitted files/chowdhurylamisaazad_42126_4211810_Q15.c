#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    int ID;
    char Name[50];
    float Cgpa;
    int Age;
    char Gender[10];
    char ContactNumber[20];
    char Address[100];
};

// a) Display IDs and Names of students with CGPA > 3.5
void displayHighCgpa(struct Student st[], int n) {
    printf("\nStudents with CGPA > 3.5:\n");
    printf("ID\tName\n");
    for (int i = 0; i < n; i++) {
        if (st[i].Cgpa > 3.5) {
            printf("%d\t%s\n", st[i].ID, st[i].Name);
        }
    }
}

// b) Insert a new student at the end
void insertStudent(struct Student st[], int *n) {
    if (*n >= MAX_STUDENTS) {
        printf("Cannot insert more students. Array is full.\n");
        return;
    }

    printf("\nEnter new student details:\n");
    printf("ID: ");
    scanf("%d", &st[*n].ID);
    printf("Name: ");
    scanf(" %[^\n]", st[*n].Name);
    printf("CGPA: ");
    scanf("%f", &st[*n].Cgpa);
    printf("Age: ");
    scanf("%d", &st[*n].Age);
    printf("Gender: ");
    scanf(" %[^\n]", st[*n].Gender);
    printf("Contact Number: ");
    scanf(" %[^\n]", st[*n].ContactNumber);
    printf("Address: ");
    scanf(" %[^\n]", st[*n].Address);

    (*n)++;
    printf("Student added successfully.\n");
}

// c) Delete student by Name
void deleteStudent(struct Student st[], int *n, char name[]) {
    int index = -1;

    for (int i = 0; i < *n; i++) {
        if (strcmp(st[i].Name, name) == 0) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Student not found.\n");
        return;
    }

    // Shift remaining elements left
    for (int i = index; i < *n - 1; i++) {
        st[i] = st[i + 1];
    }

    (*n)--;
    printf("Student deleted successfully.\n");
}

// d) Modify contact number or address by ID
void modifyStudent(struct Student st[], int n, int id) {
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (st[i].ID == id) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Student with ID %d not found.\n", id);
        return;
    }

    int choice;
    printf("Modify:\n1. Contact Number\n2. Address\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter new contact number: ");
        scanf(" %[^\n]", st[index].ContactNumber);
        printf("Contact number updated.\n");
    } else if (choice == 2) {
        printf("Enter new address: ");
        scanf(" %[^\n]", st[index].Address);
        printf("Address updated.\n");
    } else {
        printf("Invalid choice.\n");
    }
}

// Helper function to input student records
void inputStudents(struct Student st[], int *n) {
    printf("Enter number of students: ");
    scanf("%d", n);
    if (*n > MAX_STUDENTS) *n = MAX_STUDENTS;

    for (int i = 0; i < *n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &st[i].ID);
        printf("Name: ");
        scanf(" %[^\n]", st[i].Name);
        printf("CGPA: ");
        scanf("%f", &st[i].Cgpa);
        printf("Age: ");
        scanf("%d", &st[i].Age);
        printf("Gender: ");
        scanf(" %[^\n]", st[i].Gender);
        printf("Contact Number: ");
        scanf(" %[^\n]", st[i].ContactNumber);
        printf("Address: ");
        scanf(" %[^\n]", st[i].Address);
    }
}

int main() {
    struct Student stlist[MAX_STUDENTS];
    int n;

    // Input initial student records
    inputStudents(stlist, &n);

    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Display students with CGPA > 3.5\n");
        printf("2. Insert new student\n");
        printf("3. Delete student by name\n");
        printf("4. Modify contact or address by ID\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        char name[50];
        int id;

        switch (choice) {
            case 1:
                displayHighCgpa(stlist, n);
                break;
            case 2:
                insertStudent(stlist, &n);
                break;
            case 3:
                printf("Enter name of student to delete: ");
                scanf(" %[^\n]", name);
                deleteStudent(stlist, &n, name);
                break;
            case 4:
                printf("Enter ID of student to modify: ");
                scanf("%d", &id);
                modifyStudent(stlist, n, id);
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 5);

    return 0;
}

