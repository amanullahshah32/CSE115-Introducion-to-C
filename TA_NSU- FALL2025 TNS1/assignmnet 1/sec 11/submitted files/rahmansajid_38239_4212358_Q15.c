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

void displayHighCgpa(struct Student st[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        if(st[i].Cgpa > 3.5) {
            printf("ID: %d, Name: %s\n", st[i].ID, st[i].Name);
        }
    }
}

int insertStudent(struct Student st[], int n) {
    printf("Enter ID, Name, CGPA, Age, Gender, Contact Number, Address: ");
    scanf("%d %s %f %d %s %s %[^\n]", &st[n].ID, st[n].Name, &st[n].Cgpa, &st[n].Age, st[n].Gender, st[n].ContactNumber, st[n].Address);
    n++;
    return n;
}

int deleteStudentByName(struct Student st[], int n, char name[]) {
    int i, found = 0;
    for(i = 0; i < n; i++) {
        if(strcmp(st[i].Name, name) == 0) {
            found = 1;
            break;
        }
    }
    if(found) {
        for(int j = i; j < n - 1; j++) {
            st[j] = st[j + 1];
        }
        n--;
        printf("Student deleted successfully.\n");
    } else {
        printf("Student with name %s not found.\n", name);
    }
    return n;
}

void modifyContactOrAddress(struct Student st[], int n, int id) {
    int i, found = 0;
    for(i = 0; i < n; i++) {
        if(st[i].ID == id) {
            found = 1;
            printf("Enter 1 to modify Contact Number or 2 to modify Address: ");
            int choice;
            scanf("%d", &choice);
            if(choice == 1) {
                printf("Enter new Contact Number: ");
                scanf("%s", st[i].ContactNumber);
            } else if(choice == 2) {
                printf("Enter new Address: ");
                scanf(" %[^\n]", st[i].Address);
            } else {
                printf("Invalid choice.\n");
            }
            break;
        }
    }
    if(!found) {
        printf("Student with ID %d not found.\n", id);
    }
}

int main() {
    struct Student st[100];
    int n, choice;
    char name[50];
    int id;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Enter ID, Name, CGPA, Age, Gender, Contact Number, Address for student %d: ", i + 1);
        scanf("%d %s %f %d %s %s %[^\n]", &st[i].ID, st[i].Name, &st[i].Cgpa, &st[i].Age, st[i].Gender, st[i].ContactNumber, st[i].Address);
    }

    while(1) {
        printf("\nMenu:\n1. Display students with CGPA > 3.5\n2. Insert new student\n3. Delete student by name\n4. Modify contact/address by ID\n5. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                displayHighCgpa(st, n);
                break;
            case 2:
                n = insertStudent(st, n);
                break;
            case 3:
                printf("Enter name of student to delete: ");
                scanf("%s", name);
                n = deleteStudentByName(st, n, name);
                break;
            case 4:
                printf("Enter ID of student to modify: ");
                scanf("%d", &id);
                modifyContactOrAddress(st, n, id);
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
}


