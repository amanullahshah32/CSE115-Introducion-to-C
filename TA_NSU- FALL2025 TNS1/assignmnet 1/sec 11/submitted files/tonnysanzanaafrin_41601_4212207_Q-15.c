//Sanzana Afrin Tonny
//2231370042


#include <stdio.h>
#include <string.h>


struct Student {
    int id;
    char name[50];
    float cgpa;
    int age;
    char gender[10];
    char contactNumber[20];
    char address[100];
};


void highCGPA(struct Student arr[], int n);
int insertStudent(struct Student arr[], int n);
int deleteByName(struct Student arr[], int n);
void modifyByID(struct Student arr[], int n);

int main() {
    struct Student s[100];
    int n = 0;
    int i, choice;


    printf("Enter the number of students\n: ");
    scanf("%d", &n);


    if (n > 100) n = 100;

    for (i = 0; i < n; i++) {
        printf("Enter details for Student %d \n", i + 1);
        printf("ID: ");
        scanf("%d", &s[i].id);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("CGPA: ");
        scanf("%f", &s[i].cgpa);

        printf("Age: ");
        scanf("%d", &s[i].age);

        printf("Gender: ");
        scanf("%s", s[i].gender);

        printf("Contact Number: ");
        scanf("%s", s[i].contactNumber);

        printf("Address: ");
        scanf(" %[^\n]", s[i].address);
    }


    while (1) {

        printf("1. Display students with CGPA > 3.5\n");
        printf("2. Insert a new student\n");
        printf("3. Delete a student by Name\n");
        printf("4. Modify Contact/Address by ID\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                highCGPA(s, n);
                break;
            case 2:

                n = insertStudent(s, n);
                break;
            case 3:

                n = deleteByName(s, n);
                break;
            case 4:
                modifyByID(s, n);
                break;
            case 5:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid. please try again.\n");
        }
    }
    return 0;
}


void highCGPA(struct Student arr[], int n) {
    int found = 0;
    int i;
    printf("students with CGPA > 3.5\n");
    for (i = 0; i < n; i++) {
        if (arr[i].cgpa > 3.5) {
            printf("ID: %d | Name: %s | CGPA: %.2f\n", arr[i].id, arr[i].name, arr[i].cgpa);
            found = 1;
        }
    }
    if (found == 0) {
        printf("No students found with CGPA > 3.5\n");
    }
}

int insertStudent(struct Student arr[], int n) {
    if (n >= 100) {
        printf("\nError: Array is full (Max 100 students).\n");
        return n;
    }


    printf("Details of new student\n");
    printf("ID: ");
    scanf("%d", &arr[n].id);

    printf("Name: ");
    scanf(" %[^\n]", arr[n].name);

    printf("CGPA: ");
    scanf("%f", &arr[n].cgpa);

    printf("Age: ");
    scanf("%d", &arr[n].age);

    printf("Gender: ");
    scanf("%s", arr[n].gender);

    printf("Contact Number: ");
    scanf("%s", arr[n].contactNumber);

    printf("Address: ");
    scanf(" %[^\n]", arr[n].address);

    printf("Student added successfully!\n");

    return n + 1;
}


int deleteByName(struct Student arr[], int n) {
    char targetName[50];
    int i, j, found = 0;

    printf("\nEnter name of student to delete: ");
    scanf(" %[^\n]", targetName);

    for (i = 0; i < n; i++) {

        if (strcmp(arr[i].name, targetName) == 0) {
            found = 1;


            for (j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }

            printf("Student '%s' deleted successfully.\n", targetName);


            return n - 1;
        }
    }

    if (found == 0) {
        printf("Error: Student with name '%s' not found.\n", targetName);
    }


    return n;
}


void modifyByID(struct Student arr[], int n) {
    int targetID, i, found = 0, Choice;

    printf("\nEnter ID of student to modify: ");
    scanf("%d", &targetID);

    for (i = 0; i < n; i++) {
        if (arr[i].id == targetID) {
            found = 1;
            printf("Student Found: %s\n", arr[i].name);
            printf("1. Modify Contact Number\n");
            printf("2. Modify Address\n");
            printf("Enter choice: ");
            scanf("%d", &Choice);

            if (Choice == 1) {
                printf("Enter new Contact Number: ");
                scanf("%s", arr[i].contactNumber);
                printf("Contact updated.\n");
            } else if (Choice == 2) {
                printf("Enter new Address: ");
                scanf(" %[^\n]", arr[i].address);
                printf("Address updated.\n");
            } else {
                printf("Invalid option.\n");
            }
            break;
        }
    }

    if (found == 0) {
        printf("Error: Student with ID %d not found.\n", targetID);
    }
}
