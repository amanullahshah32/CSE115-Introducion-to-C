#include <stdio.h>

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

int insertStudent(struct Student students[], int n) {
    if(n >= 100) {
        printf("Array is full!\n");
        return n;
    }

    printf("\nEnter student details:\n");
    printf("ID: ");
    scanf("%d", &students[n].ID);
    printf("Name: ");
    scanf(" %[^\n]", students[n].Name);
    printf("CGPA: ");
    scanf("%f", &students[n].Cgpa);
    printf("Age: ");
    scanf("%d", &students[n].Age);
    printf("Gender (M/F): ");
    scanf(" %c", &students[n].Gender);
    printf("Contact Number: ");
    scanf("%s", students[n].ContactNumber);
    printf("Address: ");
    scanf(" %[^\n]", students[n].Address);

    return n + 1;
}

int deleteStudent(struct Student students[], int n, char name[]) {
    int i, j, found = 0;

    for(i = 0; i < n; i++) {
        // Simple string comparison
        int match = 1;
        for(j = 0; name[j] != '\0' || students[i].Name[j] != '\0'; j++) {
            if(name[j] != students[i].Name[j]) {
                match = 0;
                break;
            }
        }

        if(match) {
            found = 1;
            // Shift elements left
            for(j = i; j < n-1; j++) {
                students[j] = students[j+1];
            }
            n--;
            printf("Student deleted successfully.\n");
            break;
        }
    }

    if(!found) {
        printf("Student not found!\n");
    }

    return n;
}

void modifyContact(struct Student students[], int n, int id) {
    int found = 0;

    for(int i = 0; i < n; i++) {
        if(students[i].ID == id) {
            found = 1;
            int choice;
            printf("\n1. Modify Contact Number\n");
            printf("2. Modify Address\n");
            printf("Enter choice: ");
            scanf("%d", &choice);

            if(choice == 1) {
                printf("Enter new contact number: ");
                scanf("%s", students[i].ContactNumber);
                printf("Contact number updated.\n");
            } else if(choice == 2) {
                printf("Enter new address: ");
                scanf(" %[^\n]", students[i].Address);
                printf("Address updated.\n");
            }
            break;
        }
    }

    if(!found) {
        printf("Student ID not found!\n");
    }
}

int main() {
    struct Student students[100];
    int n = 0, choice, id;
    char name[50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input initial students
    for(int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &students[i].ID);
        printf("Name: ");
        scanf(" %[^\n]", students[i].Name);
        printf("CGPA: ");
        scanf("%f", &students[i].Cgpa);
        printf("Age: ");
        scanf("%d", &students[i].Age);
        printf("Gender (M/F): ");
        scanf(" %c", &students[i].Gender);
        printf("Contact Number: ");
        scanf("%s", students[i].ContactNumber);
        printf("Address: ");
        scanf(" %[^\n]", students[i].Address);
    }

    do {
        printf("\n--- Student Management System ---\n");
        printf("1. Display students with CGPA > 3.5\n");
        printf("2. Insert new student\n");
        printf("3. Delete student by name\n");
        printf("4. Modify contact/address by ID\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                displayHighCGPA(students, n);
                break;

            case 2:
                n = insertStudent(students, n);
                break;

            case 3:
                printf("Enter name to delete: ");
                scanf(" %[^\n]", name);
                n = deleteStudent(students, n, name);
                break;

            case 4:
                printf("Enter student ID: ");
                scanf("%d", &id);
                modifyContact(students, n, id);
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
