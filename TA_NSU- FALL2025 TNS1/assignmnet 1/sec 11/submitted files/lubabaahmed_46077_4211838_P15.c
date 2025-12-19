#include <stdio.h>
#include <string.h>

struct Student {
    int ID;
    char Name[50];
    float Cgpa;
    int Age;
    char Gender[10];
    char ContactNumber[15];
    char Address[100];
};

void displayHighCGPA(struct Student students[], int n);
void insertStudent(struct Student students[], int *n);
void deleteStudent(struct Student students[], int *n, char name[]);
void modifyStudent(struct Student students[], int n, int id);

int main() {
    struct Student students[100];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar();


    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("ID: "); scanf("%d", &students[i].ID); getchar();
        printf("Name: "); fgets(students[i].Name, 50, stdin);
        students[i].Name[strcspn(students[i].Name, "\n")] = '\0';
        printf("CGPA: "); scanf("%f", &students[i].Cgpa);
        printf("Age: "); scanf("%d", &students[i].Age); getchar();
        printf("Gender: "); fgets(students[i].Gender, 10, stdin);
        students[i].Gender[strcspn(students[i].Gender, "\n")] = '\0';
        printf("Contact: "); fgets(students[i].ContactNumber, 15, stdin);
        students[i].ContactNumber[strcspn(students[i].ContactNumber, "\n")] = '\0';
        printf("Address: "); fgets(students[i].Address, 100, stdin);
        students[i].Address[strcspn(students[i].Address, "\n")] = '\0';
    }


    printf("\n Testing Functions \n");


    displayHighCGPA(students, n);
    insertStudent(students, &n);


    char delName[50];
    printf("\nEnter name to delete: ");
    fgets(delName, 50, stdin);
    delName[strcspn(delName, "\n")] = '\0';
    deleteStudent(students, &n, delName);

    int modID;
    printf("\nEnter ID to modify: ");
    scanf("%d", &modID);
    modifyStudent(students, n, modID);

    return 0;
}


void displayHighCGPA(struct Student students[], int n) {
    printf("\nStudents with CGPA > 3.5:\n");
    for (int i = 0; i < n; i++) {
        if (students[i].Cgpa > 3.5) {
            printf("%d. %s (ID: %d, CGPA: %.2f)\n",
                   i+1, students[i].Name, students[i].ID, students[i].Cgpa);
        }
    }
}

void insertStudent(struct Student students[], int *n) {
    printf("\nAdding new student:\n");

    printf("ID: "); scanf("%d", &students[*n].ID); getchar();
    printf("Name: "); fgets(students[*n].Name, 50, stdin);
    students[*n].Name[strcspn(students[*n].Name, "\n")] = '\0';
    printf("CGPA: "); scanf("%f", &students[*n].Cgpa);
    printf("Age: "); scanf("%d", &students[*n].Age); getchar();
    printf("Gender: "); fgets(students[*n].Gender, 10, stdin);
    students[*n].Gender[strcspn(students[*n].Gender, "\n")] = '\0';
    printf("Contact: "); fgets(students[*n].ContactNumber, 15, stdin);
    students[*n].ContactNumber[strcspn(students[*n].ContactNumber, "\n")] = '\0';
    printf("Address: "); fgets(students[*n].Address, 100, stdin);
    students[*n].Address[strcspn(students[*n].Address, "\n")] = '\0';

    (*n)++;
    printf("Student added. Total students: %d\n", *n);
}

void deleteStudent(struct Student students[], int *n, char name[]) {
    int found = -1;


    for (int i = 0; i < *n; i++) {
        if (strcmp(students[i].Name, name) == 0) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("Student not found!\n");
        return;
    }

    for (int i = found; i < *n - 1; i++) {
        students[i] = students[i + 1];
    }

    (*n)--;
    printf("Deleted successfully. Remaining students: %d\n", *n);
}

void modifyStudent(struct Student students[], int n, int id) {
    int found = -1;


    for (int i = 0; i < n; i++) {
        if (students[i].ID == id) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("ID not found!\n");
        return;
    }

    printf("Modifying student: %s\n", students[found].Name);
    printf("Current contact: %s\n", students[found].ContactNumber);
    printf("Current address: %s\n", students[found].Address);

    printf("Enter new contact: ");
    fgets(students[found].ContactNumber, 15, stdin);
    students[found].ContactNumber[strcspn(students[found].ContactNumber, "\n")] = '\0';

    printf("Enter new address: ");
    fgets(students[found].Address, 100, stdin);
    students[found].Address[strcspn(students[found].Address, "\n")] = '\0';

    printf("Update successful!\n");
}
