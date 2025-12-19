
#include <stdio.h>
#include <string.h>

struct Student {
    int ID;
    char Name[50];
    float Cgpa;
    int Age;
    char Gender;
    char Contact[15];
    char Address[50];
};

// Function Prototypes
void displayHighCGPA(struct Student s[], int n);
void insertStudent(struct Student s[], int *n); // *n because we change the count
void deleteStudent(struct Student s[], int *n, char nameKey[]);
void modifyRecord(struct Student s[], int n, int idKey);

int main() {
    struct Student list[100];
    int n, choice, idKey;
    char nameKey[50];

    printf("Enter initial number of students: ");
    scanf("%d", &n);

    // Populate initial data
    for(int i = 0; i < n; i++) {
        printf("Enter details for Student %d\n", i+1);
        printf("ID Name CGPA Age Gender Contact Address: ");
        scanf("%d %s %f %d %c %s %s", &list[i].ID, list[i].Name, &list[i].Cgpa, &list[i].Age, &list[i].Gender, list[i].Contact, list[i].Address);
    }

    // Menu Driven Program
    while(1) {
        printf("\n--- MENU ---\n1. Show CGPA > 3.5\n2. Insert Student\n3. Delete Student\n4. Modify Record\n5. Exit\nChoice: ");
        scanf("%d", &choice);

        if(choice == 1) displayHighCGPA(list, n);
        else if(choice == 2) insertStudent(list, &n); // Pass address of n
        else if(choice == 3) {
            printf("Enter name to delete: ");
            scanf("%s", nameKey);
            deleteStudent(list, &n, nameKey); // Pass address of n
        }
        else if(choice == 4) {
            printf("Enter ID to modify: ");
            scanf("%d", &idKey);
            modifyRecord(list, n, idKey);
        }
        else break;
    }
    return 0;
}

// a) Display > 3.5
void displayHighCGPA(struct Student s[], int n) {
    printf("Students with CGPA > 3.5:\n");
    for(int i = 0; i < n; i++) {
        if(s[i].Cgpa > 3.5) {
            printf("ID: %d, Name: %s\n", s[i].ID, s[i].Name);
        }
    }
}

// b) Insert New (at end)
void insertStudent(struct Student s[], int *n) {
    int curr = *n; // Current count
    if(curr >= 100) {
        printf("Database full!\n");
        return;
    }
    printf("Enter New Student (ID Name CGPA Age Gender Contact Address): ");
    scanf("%d %s %f %d %c %s %s", &s[curr].ID, s[curr].Name, &s[curr].Cgpa, &s[curr].Age, &s[curr].Gender, s[curr].Contact, s[curr].Address);

    (*n)++; // Increase the count in main
    printf("Student Inserted.\n");
}

// c) Delete by Name
void deleteStudent(struct Student s[], int *n, char nameKey[]) {
    int foundIndex = -1;
    int curr = *n;

    // Find the student
    for(int i = 0; i < curr; i++) {
        if(strcmp(s[i].Name, nameKey) == 0) {
            foundIndex = i;
            break;
        }
    }

    if(foundIndex != -1) {
        // Shift Logic (Shift Left)
        for(int i = foundIndex; i < curr - 1; i++) {
            s[i] = s[i+1]; // Copy next student into current slot
        }
        (*n)--; // Decrease count in main
        printf("Student deleted.\n");
    } else {
        printf("Student not found.\n");
    }
}

// d) Modify Record
void modifyRecord(struct Student s[], int n, int idKey) {
    int i;
    for(i = 0; i < n; i++) {
        if(s[i].ID == idKey) {
            printf("Record Found. Enter new Contact and Address: ");
            scanf("%s %s", s[i].Contact, s[i].Address);
            printf("Updated.\n");
            return;
        }
    }
    printf("ID not found.\n");
}
