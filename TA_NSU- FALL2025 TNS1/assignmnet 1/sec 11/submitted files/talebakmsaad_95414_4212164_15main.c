#include <stdio.h>
#include <string.h>

struct Student {
    int ID;
    char Name[50];
    float Cgpa;
    int Age;
    char Gender;
    char ContactNumber[15];
    char Address[100];
};


void displayHighCgpa(struct Student arr[], int n) {
    printf("\nStudents with CGPA > 3.5:\n");
    int found = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i].Cgpa > 3.5) {
            printf("ID: %d, Name: %s, CGPA: %.2f\n", arr[i].ID, arr[i].Name, arr[i].Cgpa);
            found = 1;
        }
    }
    if (!found) printf("No student found with CGPA > 3.5.\n");
}


int insertStudent(struct Student arr[], int n, int max) {
    if (n >= max) {
        printf("Cannot add more students. Array is full.\n");
        return n;
    }

    printf("\nEnter new student details:\n");
    printf("ID Name CGPA Age Gender Contact Address\n");

    getchar();
    scanf("%d %49s %f %d %c %14s %[^\n]", &arr[n].ID, arr[n].Name, &arr[n].Cgpa, &arr[n].Age, &arr[n].Gender, arr[n].ContactNumber, arr[n].Address);

    return n + 1;
}


int deleteStudent(struct Student arr[], int n, char name[]) {
    int i, found = 0;
    for (i = 0; i < n; i++) {
        if (strcmp(arr[i].Name, name) == 0) {
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Student not found\n");
        return n;
    }

    for (int j = i; j < n - 1; j++) {
        arr[j] = arr[j + 1];
    }

    printf("Student '%s' deleted successfully.\n", name);
    return n - 1;
}


void modifyStudent(struct Student arr[], int n, int id) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i].ID == id) {
            found = 1;
            printf("Enter new Contact Number and Address: ");
            getchar();

            scanf("%14s %[^\n]", arr[i].ContactNumber, arr[i].Address);
            printf("Student ID %d updated successfully.\n", id);
            break;
        }
    }
    if (!found) printf("ID not found\n");
}

int main() {
    struct Student students[100];
    int n, choice, id;
    char name[50];
    const int maxStudents = 100;

    printf("Enter number of students: ");
    scanf("%d", &n);
    if (n > maxStudents) n = maxStudents;

    for (int i = 0; i < n; i++) {
        printf("\nEnter student %d details: ID Name CGPA Age Gender Contact Address\n", i + 1);
        getchar();
        scanf("%d %49s %f %d %c %14s %[^\n]", &students[i].ID, students[i].Name, &students[i].Cgpa, &students[i].Age, &students[i].Gender, students[i].ContactNumber, students[i].Address);
    }

    do {
        printf("\n1) Display students with CGPA > 3.5\n");
        printf("2) Insert new student\n");
        printf("3) Delete student by name\n");
        printf("4) Modify student by ID\n");
        printf("5) Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1: displayHighCgpa(students, n);
             break;

            case 2: n = insertStudent(students, n, maxStudents);
            break;

            case 3:
                printf("Enter name to delete: ");
                getchar();
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = 0;
                n = deleteStudent(students, n, name);
                break;

            case 4:
                printf("Enter ID to modify: ");
                scanf("%d", &id);
                modifyStudent(students, n, id);
                break;
            case 5: printf("Exiting program.\n");
             break;

            default: printf("Invalid choice. Try again.\n");
        }
    }

      while(choice != 5);

    return 0;
}
