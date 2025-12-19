#include <stdio.h>
#include <string.h>

struct Student {
    int ID;
    char Name[50];
    float Cgpa;
    int Age;
    char Gender[10];
    char Contact[20];
    char Address[100];
};


void showHighCGPA(struct Student S[], int n) {
    printf("\nStudents with CGPA > 3.5:\n");
    for (int i = 0; i < n; i++)
        if (S[i].Cgpa > 3.5)
            printf("ID: %d, Name: %s\n", S[i].ID, S[i].Name);
}


void insertStudent(struct Student S[], int *n) {
    printf("\nEnter new student info:\n");
    printf("ID: "); scanf("%d", &S[*n].ID);
    printf("Name: "); scanf("%49s", S[*n].Name);
    printf("CGPA: "); scanf("%f", &S[*n].Cgpa);
    printf("Age: "); scanf("%d", &S[*n].Age);
    printf("Gender: "); scanf("%9s", S[*n].Gender);
    printf("Contact: "); scanf("%19s", S[*n].Contact);
    printf("Address: "); scanf("%99s", S[*n].Address);

    (*n)++;
}


void deleteByName(struct Student S[], int *n, char name[]) {
    int index = -1;
    for (int i = 0; i < *n; i++) {
        if (strcmp(S[i].Name, name) == 0) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Name not found.\n");
        return;
    }

    for (int i = index; i < *n - 1; i++)
        S[i] = S[i + 1];

    (*n)--;
    printf("Record deleted.\n");
}

void modifyByID(struct Student S[], int n, int id) {
    for (int i = 0; i < n; i++) {
        if (S[i].ID == id) {
            int choice;
            printf("1. Modify Contact\n2. Modify Address\nEnter choice: ");
            scanf("%d", &choice);

            if (choice == 1) {
                printf("Enter new contact: ");
                scanf("%19s", S[i].Contact);
            } else {
                printf("Enter new address: ");
                scanf("%99s", S[i].Address);
            }

            printf("Updated.\n");
            return;
        }
    }
    printf("ID not found.\n");
}

int main() {
    struct Student S[100];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter info for student %d:\n", i + 1);
        printf("ID: "); scanf("%d", &S[i].ID);
        printf("Name: "); scanf("%49s", S[i].Name);
        printf("CGPA: "); scanf("%f", &S[i].Cgpa);
        printf("Age: "); scanf("%d", &S[i].Age);
        printf("Gender: "); scanf("%9s", S[i].Gender);
        printf("Contact: "); scanf("%19s", S[i].Contact);
        printf("Address: "); scanf("%99s", S[i].Address);
    }


    showHighCGPA(S, n);

    insertStudent(S, &n);

    char delName[50];
    printf("Enter name to delete: ");
    scanf("%49s", delName);
    deleteByName(S, &n, delName);

    int id;
    printf("Enter ID to modify: ");
    scanf("%d", &id);
    modifyByID(S, n, id);

    return 0;
}
