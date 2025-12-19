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

// a) Display students with CGPA > 3.5
void displayHighCgpa(struct Student s[], int n) {
    printf("\nStudents with CGPA > 3.5:\n");
    for(int i = 0; i < n; i++) {
        if(s[i].Cgpa > 3.5) {
            printf("ID: %d, Name: %s\n", s[i].ID, s[i].Name);
        }
    }
}

// b) Insert a new student
void insertStudent(struct Student s[], int *n) {
    if(*n >= 100) {
        printf("Array full! Cannot insert.\n");
        return;
    }

    printf("\nEnter new student information:\n");
    printf("ID: "); scanf("%d", &s[*n].ID);
    getchar();
    printf("Name: "); fgets(s[*n].Name, 50, stdin);
    s[*n].Name[strcspn(s[*n].Name, "\n")] = '\0';
    printf("CGPA: "); scanf("%f", &s[*n].Cgpa);
    printf("Age: "); scanf("%d", &s[*n].Age);
    getchar();
    printf("Gender: "); fgets(s[*n].Gender, 10, stdin);
    s[*n].Gender[strcspn(s[*n].Gender, "\n")] = '\0';
    printf("Contact Number: "); fgets(s[*n].ContactNumber, 20, stdin);
    s[*n].ContactNumber[strcspn(s[*n].ContactNumber, "\n")] = '\0';
    printf("Address: "); fgets(s[*n].Address, 100, stdin);
    s[*n].Address[strcspn(s[*n].Address, "\n")] = '\0';

    (*n)++;
    printf("Student inserted successfully!\n");
}

// c) Delete student by name
void deleteStudent(struct Student s[], int *n) {
    char name[50];
    getchar();
    printf("Enter name to delete: ");
    fgets(name, 50, stdin);
    name[strcspn(name, "\n")] = '\0';

    for(int i = 0; i < *n; i++) {
        if(strcmp(s[i].Name, name) == 0) {
            for(int j = i; j < *n - 1; j++)
                s[j] = s[j + 1];
            (*n)--;
            printf("Record deleted!\n");
            return;
        }
    }

    printf("No student found with that name.\n");
}

// d) Modify contact number or address by ID
void modifyByID(struct Student s[], int n) {
    int id, choice;
    printf("Enter ID to modify: ");
    scanf("%d", &id);

    for(int i = 0; i < n; i++) {
        if(s[i].ID == id) {
            printf("\nWhat do you want to modify?\n");
            printf("1. Contact Number\n");
            printf("2. Address\n");
            printf("Enter choice: ");
            scanf("%d", &choice);
            getchar();

            if(choice == 1) {
                printf("Enter new Contact Number: ");
                fgets(s[i].ContactNumber, 20, stdin);
                s[i].ContactNumber[strcspn(s[i].ContactNumber, "\n")] = '\0';
            }
            else if(choice == 2) {
                printf("Enter new Address: ");
                fgets(s[i].Address, 100, stdin);
                s[i].Address[strcspn(s[i].Address, "\n")] = '\0';
            }
            else {
                printf("Invalid choice!\n");
            }
            printf("Record updated!\n");
            return;
        }
    }

    printf("ID not found!\n");
}

int main() {
    struct Student students[100];
    int n, choice;

    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar();

    for(int i = 0; i < n; i++) {
        printf("\nEnter information for student %d:\n", i+1);
        printf("ID: "); scanf("%d", &students[i].ID);
        getchar();
        printf("Name: "); fgets(students[i].Name, 50, stdin);
        students[i].Name[strcspn(students[i].Name, "\n")] = '\0';
        printf("CGPA: "); scanf("%f", &students[i].Cgpa);
        printf("Age: "); scanf("%d", &students[i].Age);
        getchar();
        printf("Gender: "); fgets(students[i].Gender, 10, stdin);
        students[i].Gender[strcspn(students[i].Gender, "\n")] = '\0';
        printf("Contact Number: "); fgets(students[i].ContactNumber, 20, stdin);
        students[i].ContactNumber[strcspn(students[i].ContactNumber, "\n")] = '\0';
        printf("Address: "); fgets(students[i].Address, 100, stdin);
        students[i].Address[strcspn(students[i].Address, "\n")] = '\0';
    }

    while(1) {
        printf("\nMenu:\n");
        printf("1. Display students with CGPA > 3.5\n");
        printf("2. Insert new student\n");
        printf("3. Delete student by name\n");
        printf("4. Modify student by ID\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: displayHighCgpa(students, n); break;
            case 2: insertStudent(students, &n); break;
            case 3: deleteStudent(students, &n); break;
            case 4: modifyByID(students, n); break;
            case 5: return 0;
            default: printf("Invalid choice!\n");
        }
    }

    return 0;
}
