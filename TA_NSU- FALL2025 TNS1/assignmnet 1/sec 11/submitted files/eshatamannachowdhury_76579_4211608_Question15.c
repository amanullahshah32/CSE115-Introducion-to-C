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

void showHighCgpa(struct Student st[], int n);
int insertStudent(struct Student st[], int n);
int deleteStudent(struct Student st[], int n, char name[]);
void modifyStudent(struct Student st[], int n, int id);

int main() {
    struct Student students[100];
    int n, choice;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &students[i].ID);

        printf("Name: ");
        scanf(" %[^\n]", students[i].Name);

        printf("CGPA: ");
        scanf("%f", &students[i].Cgpa);

        printf("Age: ");
        scanf("%d", &students[i].Age);

        printf("Gender: ");
        scanf(" %s", students[i].Gender);

        printf("Contact Number: ");
        scanf(" %s", students[i].ContactNumber);

        printf("Address: ");
        scanf(" %[^\n]", students[i].Address);
    }

    do {

        printf("1. Display students with CGPA > 3.5\n");
        printf("2. Insert new student at end\n");
        printf("3. Delete student by name\n");
        printf("4. Modify contact or address using ID\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            showHighCgpa(students, n);
        }
        else if (choice == 2) {
            n = insertStudent(students, n);
        }
        else if (choice == 3) {
            char nameDel[50];
            printf("Enter name to delete: ");
            scanf(" %[^\n]", nameDel);

            int newCount = deleteStudent(students, n, nameDel);
            if (newCount == n)
                printf("No student found with the given name.\n");
            else {
                n = newCount;
                printf("Record deleted successfully.\n");
            }
        }
        else if (choice == 4) {
            int id;
            printf("Enter ID to modify: ");
            scanf("%d", &id);
            modifyStudent(students, n, id);
        }

    } while (choice != 5);

    return 0;
}


void showHighCgpa(struct Student st[], int n) {
    printf("\nStudents with CGPA > 3.5:\n");

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (st[i].Cgpa > 3.5) {
            printf("ID: %d, Name: %s\n", st[i].ID, st[i].Name);
            found = 1;
        }
    }

    if (!found)
        printf("No student has CGPA > 3.5\n");
}



int insertStudent(struct Student st[], int n) {
    if (n == 100) {
        printf("Array full! Cannot insert.\n");
        return n;
    }

    printf("\nEnter new student information:\n");

    printf("ID: ");
    scanf("%d", &st[n].ID);

    printf("Name: ");
    scanf(" %[^\n]", st[n].Name);

    printf("CGPA: ");
    scanf("%f", &st[n].Cgpa);

    printf("Age: ");
    scanf("%d", &st[n].Age);

    printf("Gender: ");
    scanf(" %s", st[n].Gender);

    printf("Contact Number: ");
    scanf(" %s", st[n].ContactNumber);

    printf("Address: ");
    scanf(" %[^\n]", st[n].Address);

    printf("Student added successfully.\n");

    return n + 1;
}


int deleteStudent(struct Student st[], int n, char name[]) {
    int index = -1;

    for (int i = 0; i < n; i++) {
        if (strcmp(st[i].Name, name) == 0) {
            index = i;
            break;
        }
    }

    if (index == -1)
        return n;

    for (int i = index; i < n - 1; i++) {
        st[i] = st[i + 1];
    }

    return n - 1;
}


void modifyStudent(struct Student st[], int n, int id) {
    for (int i = 0; i < n; i++) {
        if (st[i].ID == id) {
            int option;

            printf("\n1. Modify Contact Number\n");
            printf("2. Modify Address\n");
            printf("Choose option: ");
            scanf("%d", &option);

            if (option == 1) {
                printf("Enter new contact number: ");
                scanf(" %s", st[i].ContactNumber);
                printf("Contact number updated.\n");
            }
            else if (option == 2) {
                printf("Enter new address: ");
                scanf(" %[^\n]", st[i].Address);
                printf("Address updated.\n");
            }
            else {
                printf("Invalid option!\n");
            }
            return;
        }
    }
    printf("No student found with this ID.\n");
}
