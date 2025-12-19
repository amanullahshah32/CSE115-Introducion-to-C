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

void displayHighCGPA(struct Student st[], int n) {
    printf("\nStudents with CGPA > 3.5\n");
    int found = 0;

    for (int i = 0; i < n; i++) {
        if (st[i].Cgpa > 3.5) {
            printf("ID %d, Name %s\n", st[i].ID, st[i].Name);
            found = 1;
        }
    }

    if (!found)
        printf("No student found with CGPA more than 3.5.\n");
}


void insertStudent(struct Student st[], int *n) {
    if (*n >= 100) {
        printf("\nArray is full! Cannot insert new student\n");
        return;
    }

    printf("\nEnter new student information\n");
    printf("ID: ");
    scanf("%d", &st[*n].ID);

    printf("Name: ");
    scanf("%s", st[*n].Name);

    printf("CGPA: ");
    scanf("%f", &st[*n].Cgpa);

    printf("Age: ");
    scanf("%d", &st[*n].Age);

    printf("Gender: ");
    scanf("%s", st[*n].Gender);

    printf("Contact Number: ");
    scanf("%s", st[*n].ContactNumber);

    printf("Address ");
    scanf(" %[^\n]", st[*n].Address);

    (*n)++;

    printf("\nStudent added successfully\n");
}
void deleteByName(struct Student st[], int *n, char name[]) {
    int index = -1;


    for (int i = 0; i < *n; i++) {
        if (strcmp(st[i].Name, name) == 0) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("\nNo student found with name %s\n", name);
        return;
    }


    for (int i = index; i < *n - 1; i++) {
        st[i] = st[i + 1];
    }

    (*n)--;

    printf("\nStudent %s deleted successfully\n", name);
}


void modifyRecord(struct Student st[], int n, int id) {
    int found = -1;

    for (int i = 0; i < n; i++) {
        if (st[i].ID == id) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("\nNo student found with ID %d\n", id);
        return;
    }

    int choice;
    printf("\nModify for student %s\n", st[found].Name);
    printf("1. Contact Number\n");
    printf("2. Address\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter new contact number ");
        scanf("%s", st[found].ContactNumber);
        printf("Contact updated\n");
    }
    else if (choice == 2) {
        printf("Enter new address ");
        scanf(" %[^\n]", st[found].Address);
        printf("Address updated\n");
    }
    else {
        printf("Invalid choice\n");
    }
}


int main() {
    struct Student stlist[100];
    int n, choice;

    printf("Enter number of students ");
    scanf("%d", &n);


    for (int i = 0; i < n; i++) {
        printf("\nEnter info of student %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &stlist[i].ID);

        printf("Name");
        scanf("%s", stlist[i].Name);

        printf("CGPA");
        scanf("%f", &stlist[i].Cgpa);

        printf("Age");
        scanf("%d", &stlist[i].Age);

        printf("Gender ");
        scanf("%s", stlist[i].Gender);

        printf("Contact Number ");
        scanf("%s", stlist[i].ContactNumber);

        printf("Address ");
        scanf(" %[^\n]", stlist[i].Address);
    }


    do {

        printf("1. Display students with CGPA > 3.5\n");
        printf("2. Insert new student\n");
        printf("3. Delete student by name\n");
        printf("4. Modify contact/address by ID\n");
        printf("5. Exit\n");
        printf("Choose option: ");
        scanf("%d", &choice);

        if (choice == 1) {
            displayHighCGPA(stlist, n);
        }
        else if (choice == 2) {
            insertStudent(stlist, &n);
        }
        else if (choice == 3) {
            char name[50];
            printf("Enter name to delete ");
            scanf("%s", name);
            deleteByName(stlist, &n, name);
        }
        else if (choice == 4) {
            int id;
            printf("Enter ID to modify");
            scanf("%d", &id);
            modifyRecord(stlist, n, id);
        }
        else if (choice == 5) {
            printf("Exiting\n");
        }
        else {
            printf("Invalid choice\n");
        }

    } while (choice != 5);

    return 0;
}
