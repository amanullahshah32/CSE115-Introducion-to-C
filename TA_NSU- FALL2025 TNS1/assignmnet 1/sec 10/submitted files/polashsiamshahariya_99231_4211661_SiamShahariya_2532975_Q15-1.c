#include <stdio.h>
#include <string.h>

typedef struct Student {
    int ID;
    char Name[20];
    float Cgpa;
    int Age;
    char Gender[10];
    int ContactNumber;
    char Address[100];
} student;

void displaycgpa(student students[], int n);
int insertstu(student students[], int n);
int deletestu(student students[], int n, char name[]);
void modifystu(student students[], int n, int searchid);

int main() {
    int n, choice, searchid;
    char name[20];

    printf("Enter the number of students n: ");
    scanf("%d", &n);

    student students[100];

    for (int i = 0; i < n; i++) {
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
        scanf("%d", &students[i].ContactNumber);

        printf("Address: ");
        scanf(" %[^\n]", students[i].Address);

        printf("\n");
    }

    do {
        printf("\n\nMenu\n\n");
        printf("1) Display students with CGPA more than 3.5\n");
        printf("2) Insert a new student information\n");
        printf("3) Delete student information\n");
        printf("4) Modify student contact number/address\n");
        printf("5) Exit\n");
        printf("Enter choice: ");

        scanf("%d", &choice);

        switch (choice) {
        case 1:
            displaycgpa(students, n);
            break;

        case 2:
            n = insertstu(students, n);
            break;

        case 3:
            printf("Enter name to delete: ");
            scanf(" %[^\n]", name);
            n = deletestu(students, n, name);
            break;

        case 4:
            printf("Enter the ID to modify: ");
            scanf("%d", &searchid);
            modifystu(students, n, searchid);
            break;

        case 5:
            break;

        default:
            printf("Invalid choice\n");
        }

    } while (choice != 5);

    return 0;
}

void displaycgpa(student students[], int n) {
    for (int i = 0; i < n; i++) {
        if (students[i].Cgpa > 3.5) {
            printf("ID: %d\n", students[i].ID);
            printf("Name: %s\n\n", students[i].Name);
        }
    }
}

int insertstu(student students[], int n) {
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
    scanf("%d", &students[n].ContactNumber);

    printf("Address: ");
    scanf(" %[^\n]", students[n].Address);

    printf("\n");
    return n + 1;
}

int deletestu(student students[], int n, char name[]) {
    int i, flag = 0;

    for (i = 0; i < n; i++) {
        if (strcmp(students[i].Name, name) == 0) {
            flag = 1;
            break;
        }
    }

    if (flag) {
        for (int j = i; j < n - 1; j++) {
            students[j] = students[j + 1];
        }
        printf("Student deleted successfully!\n");
        return n - 1;
    } else {
        printf("Student not found!\n");
        return n;
    }
}

void modifystu(student students[], int n, int searchid) {
    int found = 0, index = -1, option;

    for (int i = 0; i < n; i++) {
        if (students[i].ID == searchid) {
            found = 1;
            index = i;
            break;
        }
    }

    if (!found) {
        printf("Student not found!\n");
        return;
    }
