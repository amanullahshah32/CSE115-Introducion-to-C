#include <stdio.h>
#include <string.h>

#define MAX_STUD 100

typedef struct {
    int  ID;
    char Name[50];
    float Cgpa;
    int  Age;
    char Gender[10];
    char ContactNumber[20];
    char Address[100];
} Student;

/* a) display ID & Name of students with CGPA > 3.5 */
void displayHighCgpa(Student s[], int n)
{
    int i;
    printf("Students with CGPA > 3.5:\n");
    for (i = 0; i < n; i++)
        if (s[i].Cgpa > 3.5)
            printf("ID: %d, Name: %s\n", s[i].ID, s[i].Name);
}

/* b) insert new student at end */
void insertStudent(Student s[], int *n)
{
    if (*n >= MAX_STUD) {
        printf("Array is full.\n");
        return;
    }

    printf("Enter information for new student:\n");
    printf("ID: "); scanf("%d", &s[*n].ID);
    printf("Name: "); scanf("%s", s[*n].Name);
    printf("CGPA: "); scanf("%f", &s[*n].Cgpa);
    printf("Age: "); scanf("%d", &s[*n].Age);
    printf("Gender: "); scanf("%s", s[*n].Gender);
    printf("Contact Number: "); scanf("%s", s[*n].ContactNumber);
    printf("Address: "); scanf("%s", s[*n].Address);

    (*n)++;
}

/* c) delete student information by name (names unique) */
void deleteByName(Student s[], int *n, char name[])
{
    int i, j, idx = -1;

    for (i = 0; i < *n; i++)
        if (strcmp(s[i].Name, name) == 0) {
            idx = i;
            break;
        }

    if (idx == -1) {
        printf("Student not found.\n");
        return;
    }

    for (j = idx; j < *n - 1; j++)
        s[j] = s[j + 1];

    (*n)--;
    printf("Student deleted.\n");
}

/* d) modify contact or address given ID */
void modifyByID(Student s[], int n, int id)
{
    int i, choice;

    for (i = 0; i < n; i++) {
        if (s[i].ID == id) {
            printf("1. Change Contact Number\n");
            printf("2. Change Address\n");
            printf("Enter choice: ");
            scanf("%d", &choice);

            if (choice == 1) {
                printf("Enter new contact number: ");
                scanf("%s", s[i].ContactNumber);
            } else if (choice == 2) {
                printf("Enter new address: ");
                scanf("%s", s[i].Address);
            } else {
                printf("Invalid choice.\n");
            }
            return;
        }
    }
    printf("ID not found.\n");
}

int main(void)
{
    Student list[MAX_STUD];
    int n, i, choice, id;
    char name[50];

    printf("Enter number of students (n): ");
    scanf("%d", &n);

    /* Populate the array */
    for (i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("ID: "); scanf("%d", &list[i].ID);
        printf("Name: "); scanf("%s", list[i].Name);
        printf("CGPA: "); scanf("%f", &list[i].Cgpa);
        printf("Age: "); scanf("%d", &list[i].Age);
        printf("Gender: "); scanf("%s", list[i].Gender);
        printf("Contact Number: "); scanf("%s", list[i].ContactNumber);
        printf("Address: "); scanf("%s", list[i].Address);
    }

    /* Simple menu (optional but helpful) */
    do {
        printf("\n1. Show students with CGPA > 3.5\n");
        printf("2. Insert new student\n");
        printf("3. Delete student by name\n");
        printf("4. Modify contact/address by ID\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            displayHighCgpa(list, n);
            break;
        case 2:
            insertStudent(list, &n);
            break;
        case 3:
            printf("Enter name to delete: ");
            scanf("%s", name);
            deleteByName(list, &n, name);
            break;
        case 4:
            printf("Enter ID to modify: ");
            scanf("%d", &id);
            modifyByID(list, n, id);
            break;
        case 0:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice.\n");
        }
    } while (choice != 0);

    return 0;
}
