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

// (a) Show students with CGPA > 3.5
void showHighCGPA(struct Student st[], int n) {
    printf("\nStudents with CGPA > 3.5:\n");
    for(int i = 0; i < n; i++) {
        if(st[i].Cgpa > 3.5) {
            printf("ID: %d, Name: %s\n", st[i].ID, st[i].Name);
        }
    }
}

// (b) Insert new student at end
void insertStudent(struct Student st[], int *n) {
    printf("\nEnter new student information:\n");
    printf("ID: "); scanf("%d", &st[*n].ID);
    printf("Name: "); scanf("%s", st[*n].Name);
    printf("CGPA: "); scanf("%f", &st[*n].Cgpa);
    printf("Age: "); scanf("%d", &st[*n].Age);
    printf("Gender: "); scanf("%s", st[*n].Gender);
    printf("Contact Number: "); scanf("%s", st[*n].ContactNumber);
    printf("Address: "); scanf("%s", st[*n].Address);

    (*n)++; // increase student count
}

// (c) Delete student by Name
void deleteByName(struct Student st[], int *n, char name[]) {
    int found = 0;

    for(int i = 0; i < *n; i++) {
        if(strcmp(st[i].Name, name) == 0) {
            found = 1;

            for(int j = i; j < *n - 1; j++)
                st[j] = st[j+1];  // shift left

            (*n)--; // reduce size
            break;
        }
    }

    if(found)
        printf("\nStudent '%s' deleted successfully.\n", name);
    else
        printf("\nStudent not found.\n");
}

// (d) Modify contact or address by ID
void modifyByID(struct Student st[], int n, int id) {
    int found = 0;
    for(int i = 0; i < n; i++) {
        if(st[i].ID == id) {
            found = 1;

            int choice;
            printf("\n1. Modify Contact Number\n2. Modify Address\nEnter choice: ");
            scanf("%d", &choice);

            if(choice == 1) {
                printf("Enter new contact: ");
                scanf("%s", st[i].ContactNumber);
            }
            else if(choice == 2) {
                printf("Enter new address: ");
                scanf("%s", st[i].Address);
            }

            break;
        }
    }

    if(!found)
        printf("\nInvalid ID.\n");
}


int main() {
    struct Student students[100];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("\nEnter information for %d students:\n", n);
    for(int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("ID: "); scanf("%d", &students[i].ID);
        printf("Name: "); scanf("%s", students[i].Name);
        printf("CGPA: "); scanf("%f", &students[i].Cgpa);
        printf("Age: "); scanf("%d", &students[i].Age);
        printf("Gender: "); scanf("%s", students[i].Gender);
        printf("Contact Number: "); scanf("%s", students[i].ContactNumber);
        printf("Address: "); scanf("%s", students[i].Address);
    }

    int choice;
    while(1) {
        printf("\n\nMenu:\n");
        printf("1. Show students with CGPA > 3.5\n");
        printf("2. Insert new student\n");
        printf("3. Delete student by name\n");
        printf("4. Modify student by ID\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            showHighCGPA(students, n);
        }
        else if(choice == 2) {
            insertStudent(students, &n);
        }
        else if(choice == 3) {
            char name[50];
            printf("Enter name to delete: ");
            scanf("%s", name);
            deleteByName(students, &n, name);
        }
        else if(choice == 4) {
            int id;
            printf("Enter ID: ");
            scanf("%d", &id);
            modifyByID(students, n, id);
        }
        else if(choice == 5) {
            break;
        }
        else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}


