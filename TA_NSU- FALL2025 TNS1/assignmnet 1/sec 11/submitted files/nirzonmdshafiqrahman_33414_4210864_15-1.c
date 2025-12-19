#include <stdio.h>
#include <string.h>

struct Student {
    int ID;
    char Name[50];
    float Cgpa;
    int Age;
    char Gender[10];
    char ContactNumber[20];
    char Address[100];
};

void displayHighCGPA(struct Student arr[], int n) {
    printf("\nStudents with CGPA > 3.5:\n");
    int found = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i].Cgpa > 3.5) {
            printf("ID: %d  Name: %s\n", arr[i].ID, arr[i].Name);
            found = 1;
        }
    }
    if(!found) printf("No student found.\n");
}

void insertStudent(struct Student arr[], int *n) {
    printf("\nEnter new student information:\n");
    printf("ID: "); scanf("%d", &arr[*n].ID);
    printf("Name: "); scanf("%s", arr[*n].Name);
    printf("Cgpa: "); scanf("%f", &arr[*n].Cgpa);
    printf("Age: "); scanf("%d", &arr[*n].Age);
    printf("Gender: "); scanf("%s", arr[*n].Gender);
    printf("Contact Number: "); scanf("%s", arr[*n].ContactNumber);
    printf("Address: "); scanf("%s", arr[*n].Address);

    (*n)++;
    printf("Student inserted successfully.\n");
}
void deleteStudent(struct Student arr[], int *n, char name[]) {
    int index = -1;

    for(int i = 0; i < *n; i++) {
        if(strcmp(arr[i].Name, name) == 0) {
            index = i;
            break;
        }
    }

    if(index == -1) {
        printf("Student not found.\n");
        return;
    }

    for(int i = index; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*n)--;
    printf("Student deleted.\n");
}

void modifyStudent(struct Student arr[], int n, int id) {
    int found = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i].ID == id) {
            found = i;
            break;
        }
    }

    if(found == -1) {
        printf("Invalid ID. No student found.\n");
        return;
    }

    int choice;
    printf("\n1. Modify Contact Number\n2. Modify Address\nEnter option: ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Enter new Contact Number: ");
        scanf("%s", arr[found].ContactNumber);
    }
    else if(choice == 2) {
        printf("Enter new Address: ");
        scanf("%s", arr[found].Address);
    }
    else {
        printf("Invalid choice.\n");
        return;
    }

    printf("Record updated successfully.\n");
}

int main() {
    struct Student st[100];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("\nEnter info for student %d:\n", i + 1);

        printf("ID: "); scanf("%d", &st[i].ID);
        printf("Name: "); scanf("%s", st[i].Name);
        printf("Cgpa: "); scanf("%f", &st[i].Cgpa);
        printf("Age: "); scanf("%d", &st[i].Age);
        printf("Gender: "); scanf("%s", st[i].Gender);
        printf("Contact Number: "); scanf("%s", st[i].ContactNumber);
        printf("Address: "); scanf("%s", st[i].Address);
    }

    int option;
    char delName[50];
    int modID;

    while(1) {
        printf("\n====== MENU ======\n");
        printf("1. Display students with CGPA > 3.5\n");
        printf("2. Insert new student\n");
        printf("3. Delete student by Name\n");
        printf("4. Modify student by ID\n");
        printf("5. Exit\n");
        printf("Enter option: ");
        scanf("%d", &option);

        switch(option) {
            case 1:
                displayHighCGPA(st, n);
                break;

            case 2:
                insertStudent(st, &n);
                break;

            case 3:
                printf("Enter name to delete: ");
                scanf("%s", delName);
                deleteStudent(st, &n, delName);
                break;

            case 4:
                printf("Enter ID to modify: ");
                scanf("%d", &modID);
                modifyStudent(st, n, modID);
                break;

            case 5:
                return 0;

            default:
                printf("Invalid option.\n");
        }
    }

    return 0;
}
