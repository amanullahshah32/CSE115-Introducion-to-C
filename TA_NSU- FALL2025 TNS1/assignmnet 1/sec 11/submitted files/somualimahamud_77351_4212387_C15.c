#include <stdio.h>
#include <string.h>

struct Student {
    int ID;
    char Name[30];
    float Cgpa;
    int Age;
    char Gender[10];
    char Contact[20];
    char Address[50];
};

void displayAbove3_5(struct Student s[], int n) {
    printf("\nStudents with CGPA > 3.5:\n");
    for (int i = 0; i < n; i++) {
        if (s[i].Cgpa > 3.5)
            printf("%s (ID %d)\n", s[i].Name, s[i].ID);
    }
}

void insertStudent(struct Student s[], int *n) {
    printf("\nEnter new student info:\n");
    printf("ID: ");
    scanf("%d", &s[*n].ID);
    printf("Name: ");
    scanf("%s", s[*n].Name);
    printf("CGPA: ");
    scanf("%f", &s[*n].Cgpa);
    printf("Age: ");
    scanf("%d", &s[*n].Age);
    printf("Gender: ");
    scanf("%s", s[*n].Gender);
    printf("Contact: ");
    scanf("%s", s[*n].Contact);
    printf("Address: ");
    scanf("%s", s[*n].Address);
    (*n)++;
}

void deleteStudent(struct Student s[], int *n, char name[]) {
    for (int i = 0; i < *n; i++) {
        if (strcmp(s[i].Name, name) == 0) {
            for (int j = i; j < *n - 1; j++)
                s[j] = s[j + 1];
            (*n)--;
            printf("Record deleted.\n");
            return;
        }
    }
    printf("Name not found.\n");
}

void modifyStudent(struct Student s[], int n, int ID) {
    for (int i = 0; i < n; i++) {
        if (s[i].ID == ID) {
            printf("Enter new contact: ");
            scanf("%s", s[i].Contact);
            printf("Enter new address: ");
            scanf("%s", s[i].Address);
            printf("Updated.\n");
            return;
        }
    }
    printf("ID not found.\n");
}

int main() {
    struct Student s[100];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &s[i].ID);
        printf("Name: ");
        scanf("%s", s[i].Name);
        printf("CGPA: ");
        scanf("%f", &s[i].Cgpa);
        printf("Age: ");
        scanf("%d", &s[i].Age);
        printf("Gender: ");
        scanf("%s", s[i].Gender);
        printf("Contact: ");
        scanf("%s", s[i].Contact);
        printf("Address: ");
        scanf("%s", s[i].Address);
    }

    displayAbove3_5(s, n);

    insertStudent(s, &n);

    char nameToDelete[30];
    printf("\nEnter name to delete: ");
    scanf("%s", nameToDelete);
    deleteStudent(s, &n, nameToDelete);

    int idToModify;
    printf("\nEnter ID to modify: ");
    scanf("%d", &idToModify);
    modifyStudent(s, n, idToModify);

    return 0;
}

