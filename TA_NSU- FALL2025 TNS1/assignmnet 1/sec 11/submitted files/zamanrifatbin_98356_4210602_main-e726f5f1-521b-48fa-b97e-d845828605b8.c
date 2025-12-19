#include <stdio.h>
#include <stdlib.h>

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
    printf("Students with CGPA > 3.5:\n");
    for (int i = 0; i < n; i++) {
        if (arr[i].Cgpa > 3.5) {
            printf("%d %s\n", arr[i].ID, arr[i].Name);
        }
    }
}

int insertStudent(struct Student arr[], int n)
 {
    printf("Enter new student details: ID Name CGPA Age Gender Contact Address\n");
    scanf("%d %s %f %d %c %s %[^\n]", &arr[n].ID, arr[n].Name, &arr[n].Cgpa, &arr[n].Age, &arr[n].Gender, arr[n].ContactNumber, arr[n].Address);
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
    for (int j = i; j < n-1; j++) {
        arr[j] = arr[j+1];
    }
    return n - 1;
}

void modifyStudent(struct Student arr[], int n, int id) {
    int i, found = 0;
    for (i = 0; i < n; i++) {
        if (arr[i].ID == id) {
            found = 1;
            printf("Enter new Contact Number and Address: ");
            scanf("%s %[^\n]", arr[i].ContactNumber, arr[i].Address);
            break;
        }
    }
    if (!found) printf("ID not found\n");
}

int main() {
    struct Student students[100];
    int n, choice, id;
    char name[50];

    printf("Enter number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter student %d details: ID Name CGPA Age Gender Contact Address\n", i+1);
        scanf("%d %s %f %d %c %s %[^\n]", &students[i].ID, students[i].Name, &students[i].Cgpa, &students[i].Age, &students[i].Gender, students[i].ContactNumber, students[i].Address);
    }

    do {
        printf("\n1) Display students with CGPA>3.5\n2) Insert new student\n3) Delete student by name\n4) Modify student by ID\n5) Exit\nChoice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: displayHighCgpa(students, n); break;
            case 2: n = insertStudent(students, n); break;
            case 3:
                printf("Enter name to delete: ");
                scanf("%s", name);
                n = deleteStudent(students, n, name);
                break;
            case 4:
                printf("Enter ID to modify: ");
                scanf("%d", &id);
                modifyStudent(students, n, id);
                break;
        }
    } while(choice != 5);

    return 0;
}

