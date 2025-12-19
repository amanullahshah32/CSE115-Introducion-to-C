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

void displayHighCGPA(struct Student students[], int n) {
    printf("\nStudents with CGPA > 3.5:\n");
    for(int i = 0; i < n; i++) {
        if(students[i].Cgpa > 3.5) {
            printf("ID: %d, Name: %s\n", students[i].ID, students[i].Name);
        }
    }
}

void insertStudent(struct Student students[], int *n) {
    if(*n >= 100) {
        printf("Array is full!\n");
        return;
    }

    printf("\nEnter new student information:\n");
    printf("ID: "); scanf("%d", &students[*n].ID);
    printf("Name: "); scanf("%s", students[*n].Name);
    printf("CGPA: "); scanf("%f", &students[*n].Cgpa);
    printf("Age: "); scanf("%d", &students[*n].Age);
    printf("Gender (M/F): "); scanf(" %c", &students[*n].Gender);
    printf("Contact Number: "); scanf("%s", students[*n].ContactNumber);
    printf("Address: "); scanf("%s", students[*n].Address);

    (*n)++;
    printf("Student added successfully!\n");
}

void deleteStudent(struct Student students[], int *n, char name[]) {
    int found = -1;
    for(int i = 0; i < *n; i++) {
        int match = 1;
        for(int j = 0; students[i].Name[j] != '\0' && name[j] != '\0'; j++) {
            if(students[i].Name[j] != name[j]) {
                match = 0;
                break;
            }
        }
        if(match) {
            found = i;
            break;
        }
    }

    if(found != -1) {
        for(int i = found; i < *n - 1; i++) {
            students[i] = students[i+1];
        }
        (*n)--;
        printf("Student deleted successfully!\n");
    } else {
        printf("Student not found!\n");
    }
}

void modifyContact(struct Student students[], int n, int id) {
    int found = -1;
    for(int i = 0; i < n; i++) {
        if(students[i].ID == id) {
            found = i;
            break;
        }
    }

    if(found != -1) {
        int choice;
        printf("What do you want to modify?\n");
        printf("1. Contact Number\n");
        printf("2. Address\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Enter new contact number: ");
            scanf("%s", students[found].ContactNumber);
        } else if(choice == 2) {
            printf("Enter new address: ");
            scanf("%s", students[found].Address);
        }
        printf("Information updated successfully!\n");
    } else {
        printf("Student ID not found!\n");
    }
}

int main() {
    struct Student students[100];
    int n = 0, choice;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("ID: "); scanf("%d", &students[i].ID);
        printf("Name: "); scanf("%s", students[i].Name);
        printf("CGPA: "); scanf("%f", &students[i].Cgpa);
        printf("Age: "); scanf("%d", &students[i].Age);
        printf("Gender (M/F): "); scanf(" %c", &students[i].Gender);
        printf("Contact Number: "); scanf("%s", students[i].ContactNumber);
        printf("Address: "); scanf("%s", students[i].Address);
    }

    do {
        printf("\n--- Student Management System ---\n");
        printf("1. Display students with CGPA > 3.5\n");
        printf("2. Insert new student\n");
        printf("3. Delete student by name\n");
        printf("4. Modify contact/address by ID\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                displayHighCGPA(students, n);
                break;
            case 2:
                insertStudent(students, &n);
                break;
            case 3:
                {
                    char name[50];
                    printf("Enter name to delete: ");
                    scanf("%s", name);
                    deleteStudent(students, &n, name);
                }
                break;
            case 4:
                {
                    int id;
                    printf("Enter student ID to modify: ");
                    scanf("%d", &id);
                    modifyContact(students, n, id);
                }
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while(choice != 5);

    return 0;
}
