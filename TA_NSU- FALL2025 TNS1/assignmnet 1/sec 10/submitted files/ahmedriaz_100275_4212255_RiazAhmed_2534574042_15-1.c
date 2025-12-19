#include <stdio.h>
#include <string.h>

struct Student {
    int ID;
    char Name[50];
    float Cgpa;
    int Age;
    char Gender[20];
    char ContactNumber[20];
    char Address[100];
};

void displaygoodCgpa(struct Student s[], int size);
void insertStudent(struct Student s[], int *size);
void deleteStudent(struct Student s[], int *size, char name[]);
void modifyStudent(struct Student s[], int size, int id);

int main() {
    struct Student a[100];
    int num, choice, id;
    char name[50];

    printf("Enter number of students\n");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        printf("Enter information for student %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &a[i].ID);

        printf("Name: ");
        scanf(" %[^\n]", a[i].Name);

        printf("CGPA: ");
        scanf("%f", &a[i].Cgpa);

        printf("Age: ");
        scanf("%d", &a[i].Age);

        printf("Gender: ");
        scanf(" %[^\n]", a[i].Gender);

        printf("Contact Number: ");
        scanf(" %[^\n]", a[i].ContactNumber);

        printf("Address: ");
        scanf(" %[^\n]", a[i].Address);
    }

    while (1) {
        printf("\n---- MENU ----\n");
        printf("1. Display students with CGPA > 3.5\n");
        printf("2. Insert new student at the end\n");
        printf("3. Delete student by name\n");
        printf("4. Modify contact number or address by ID\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displaygoodCgpa(a, num);
                break;
            case 2:
                insertStudent(a, &num);
                break;
            case 3:
                printf("Enter name to delete: ");
                scanf(" %[^\n]", name);
                deleteStudent(a, &num, name);
                break;
            case 4:
                printf("Enter ID to modify: ");
                scanf("%d", &id);
                modifyStudent(a, num, id);
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}

void displaygoodCgpa(struct Student s[], int size) {
    for (int i = 0; i < size; i++) {
        if (s[i].Cgpa > 3.5) {
            printf("ID: %d | Name: %s\n", s[i].ID, s[i].Name);
        }
    }
}

void insertStudent(struct Student s[], int *size) {
    int i = *size;

    printf("ID: ");
    scanf("%d", &s[i].ID);

    printf("Name: ");
    scanf(" %[^\n]", s[i].Name);

    printf("CGPA: ");
    scanf("%f", &s[i].Cgpa);

    printf("Age: ");
    scanf("%d", &s[i].Age);

    printf("Gender: ");
    scanf(" %[^\n]", s[i].Gender);

    printf("Contact Number: ");
    scanf(" %[^\n]", s[i].ContactNumber);

    printf("Address: ");
    scanf(" %[^\n]", s[i].Address);

    (*size)++;
}

void deleteStudent(struct Student s[], int *size, char name[]) {
    int index = -1;
    for (int i = 0; i < *size; i++) {
        if (strcmp(s[i].Name, name) == 0) {
            index = i;
            break;
        }
    }

    if (index == -1) return;

    for (int i = index; i < *size - 1; i++) {
        s[i] = s[i + 1];
    }

    (*size)--;
}

void modifyStudent(struct Student s[], int size, int id) {
    for (int i = 0; i < size; i++) {
        if (s[i].ID == id) {
            int opt;
            printf("1. Modify contact number\n");
            printf("2. Modify address\n");
            printf("Enter choice: ");
            scanf("%d", &opt);

            if (opt == 1) {
                printf("Enter new contact number: ");
                scanf(" %[^\n]", s[i].ContactNumber);
            } else if (opt == 2) {
                printf("Enter new address: ");
                scanf(" %[^\n]", s[i].Address);
            }
            return;
        }
    }
}