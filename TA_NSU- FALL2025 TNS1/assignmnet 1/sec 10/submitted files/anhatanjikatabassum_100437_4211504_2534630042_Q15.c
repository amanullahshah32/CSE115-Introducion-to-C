#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[50];
    float cgpa;
    int age;
    char gender[10];
    char contact[20];
    char address[100];
};


void displayHighCGPA(struct student s[], int n) {
    printf("\nStudents with CGPA > 3.5:\n");
    for (int i = 0; i < n; i++) {
        if (s[i].cgpa > 3.5) {
            printf("ID: %d, Name: %s\n", s[i].id, s[i].name);
        }
    }
}


int insertStudent(struct student s[], int n) {
    printf("\nEnter new student information:\n");
    printf("ID: ");
    scanf("%d", &s[n].id);

    printf("Name: ");
    getchar();
    gets(s[n].name);

    printf("CGPA: ");
    scanf("%f", &s[n].cgpa);

    printf("Age: ");
    scanf("%d", &s[n].age);

    printf("Gender: ");
    scanf("%s", s[n].gender);

    printf("Contact: ");
    scanf("%s", s[n].contact);

    printf("Address: ");
    getchar();
    gets(s[n].address);

    printf("\nNew student added successfully!\n");
    return n + 1;
}


int deleteStudent(struct student s[], int n, char name[]) {
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (strcmp(s[i].name, name) == 0) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        printf("\nStudent not found!\n");
        return n;
    }

    for (int i = index; i < n - 1; i++) {
        s[i] = s[i + 1];
    }

    printf("\nRecord deleted successfully!\n");
    return n - 1;
}


void modifyStudent(struct student s[], int n, int id) {
    for (int i = 0; i < n; i++) {
        if (s[i].id == id) {
            int choice;
            printf("\n1. Modify Contact\n2. Modify Address\nEnter choice: ");
            scanf("%d", &choice);

            if (choice == 1) {
                printf("Enter new contact: ");
                scanf("%s", s[i].contact);
            } else if (choice == 2) {
                printf("Enter new address: ");
                getchar();
                gets(s[i].address);
            } else {
                printf("Invalid choice!\n");
            }

            printf("Information updated successfully!\n");
            return;
        }
    }
    printf("\nNo student found with given ID!\n");
}

int main() {
    struct student s[100];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter information for student %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &s[i].id);

        printf("Name: ");
        getchar();
        gets(s[i].name);

        printf("CGPA: ");
        scanf("%f", &s[i].cgpa);

        printf("Age: ");
        scanf("%d", &s[i].age);

        printf("Gender: ");
        scanf("%s", s[i].gender);

        printf("Contact: ");
        scanf("%s", s[i].contact);

        printf("Address: ");
        getchar();
        gets(s[i].address);
    }

    int choice;
    do {
        printf("\n\n===== student management system =====\n");
        printf("1. Display students with CGPA > 3.5\n");
        printf("2. Insert new student\n");
        printf("3. Delete student by name\n");
        printf("4. Modify contact or address using ID\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            displayHighCGPA(s, n);
        }
        else if (choice == 2) {
            n = insertStudent(s, n);
        }
        else if (choice == 3) {
            char name[50];
            printf("Enter name to delete: ");
            getchar();
            gets(name);
            n = deleteStudent(s, n, name);
        }
        else if (choice == 4) {
            int id;
            printf("Enter ID: ");
            scanf("%d", &id);
            modifyStudent(s, n, id);
        }

    } while (choice != 5);

    return 0;
}



