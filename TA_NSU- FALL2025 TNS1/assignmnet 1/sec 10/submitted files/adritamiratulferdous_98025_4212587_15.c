#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    int ID;
    char Name[50];
    float Cgpa;
    int Age;
    char Gender[10];
    char ContactNumber[15];
    char Address[100];
} Student;


void displayHighCgpa(Student s[], int n) {
    printf("\nStudents with CGPA > 3.5:\n");
    for (int i = 0; i < n; i++) {
        if (s[i].Cgpa > 3.5) {
            printf("ID: %d, Name: %s\n", s[i].ID, s[i].Name);
        }
    }
}


int insertStudent(Student s[], int n) {
    if (n >= MAX) {
        printf("Cannot insert, array full!\n");
        return n;
    }

    printf("\nEnter details of new student:\n");
    printf("ID: "); scanf("%d", &s[n].ID);
    printf("Name: "); getchar();
    fgets(s[n].Name, sizeof(s[n].Name), stdin);
    s[n].Name[strcspn(s[n].Name, "\n")] = '\0';
    printf("CGPA: "); scanf("%f", &s[n].Cgpa);
    printf("Age: "); scanf("%d", &s[n].Age);
    printf("Gender: "); getchar(); fgets(s[n].Gender, sizeof(s[n].Gender), stdin);
    s[n].Gender[strcspn(s[n].Gender, "\n")] = '\0';
    printf("Contact Number: "); fgets(s[n].ContactNumber, sizeof(s[n].ContactNumber), stdin);
    s[n].ContactNumber[strcspn(s[n].ContactNumber, "\n")] = '\0';
    printf("Address: "); fgets(s[n].Address, sizeof(s[n].Address), stdin);
    s[n].Address[strcspn(s[n].Address, "\n")] = '\0';

    return n + 1;
}
int deleteStudent(Student s[], int n) {
    char name[50];
    printf("\nEnter name of student to delete: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(s[i].Name, name) == 0) {
            found = 1;
            for (int j = i; j < n - 1; j++) {
                s[j] = s[j + 1];
            }
            n--;
            printf("Student %s deleted successfully.\n", name);
            break;
        }
    }
    if (!found)
        printf("Student not found!\n");

    return n;
}


void modifyStudent(Student s[], int n) {
    int id;
    printf("\nEnter ID of student to modify: ");
    scanf("%d", &id);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (s[i].ID == id) {
            found = 1;
            int choice;
            printf("Modify 1. Contact Number 2. Address : ");
            scanf("%d", &choice);
            getchar();
            if (choice == 1) {
                printf("Enter new contact number: ");
                fgets(s[i].ContactNumber, sizeof(s[i].ContactNumber), stdin);
                s[i].ContactNumber[strcspn(s[i].ContactNumber, "\n")] = '\0';
            } else if (choice == 2) {
                printf("Enter new address: ");
                fgets(s[i].Address, sizeof(s[i].Address), stdin);
                s[i].Address[strcspn(s[i].Address, "\n")] = '\0';
            } else {
                printf("Invalid choice.\n");
            }
            break;
        }
    }
    if (!found) {
        printf("Student with ID %d not found!\n", id);
    }
}

int main() {
    Student students[MAX];
    int n, choice;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("ID: "); scanf("%d", &students[i].ID);
        printf("Name: "); getchar(); fgets(students[i].Name, sizeof(students[i].Name), stdin);
        students[i].Name[strcspn(students[i].Name, "\n")] = '\0';
        printf("CGPA: "); scanf("%f", &students[i].Cgpa);
        printf("Age: "); scanf("%d", &students[i].Age);
        printf("Gender: "); getchar(); fgets(students[i].Gender, sizeof(students[i].Gender), stdin);
        students[i].Gender[strcspn(students[i].Gender, "\n")] = '\0';
        printf("Contact Number: "); fgets(students[i].ContactNumber, sizeof(students[i].ContactNumber), stdin);
        students[i].ContactNumber[strcspn(students[i].ContactNumber, "\n")] = '\0';
        printf("Address: "); fgets(students[i].Address, sizeof(students[i].Address), stdin);
        students[i].Address[strcspn(students[i].Address, "\n")] = '\0';
    }

    do {
        printf("\nMenu:\n1. Display high CGPA students\n2. Insert student\n3. Delete student\n4. Modify student\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: displayHighCgpa(students, n); break;
            case 2: n = insertStudent(students, n); break;
            case 3: n = deleteStudent(students, n); break;
            case 4: modifyStudent(students, n); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while(choice != 5);

    return 0;
}
