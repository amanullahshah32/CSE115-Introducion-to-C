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

void read_line(char *buf, int size) {
    if (!fgets(buf, size, stdin)) return;
    
    int L = strlen(buf);
    if (L > 0 && buf[L-1] == '\n') buf[L-1] = '\0';
}

void display_high_cgpa(struct Student arr[], int n) {
    printf("Students with CGPA > 3.5:\n");
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i].Cgpa > 3.5f) {
            printf("ID: %d, Name: %s\n", arr[i].ID, arr[i].Name);
            found = 1;
        }
    }
    if (!found) printf("None\n");
}

void insert_student(struct Student arr[], int *n) {
    if (*n >= 100) {
        printf("Cannot insert: array is full.\n");
        return;
    }
    int idx = *n;
    printf("Enter details for new student:\n");
    printf("ID: ");
    scanf("%d", &arr[idx].ID);
    getchar();
    printf("Name: ");
    read_line(arr[idx].Name, sizeof arr[idx].Name);
    printf("CGPA: ");
    scanf("%f", &arr[idx].Cgpa);
    printf("Age: ");
    scanf("%d", &arr[idx].Age);
    getchar();
    printf("Gender: ");
    read_line(arr[idx].Gender, sizeof arr[idx].Gender);
    printf("Contact Number: ");
    read_line(arr[idx].ContactNumber, sizeof arr[idx].ContactNumber);
    printf("Address: ");
    read_line(arr[idx].Address, sizeof arr[idx].Address);

    (*n)++;
    printf("Student inserted.\n");
}

void delete_student_by_name(struct Student arr[], int *n, const char *name) {
    int pos = -1;
    for (int i = 0; i < *n; i++) {
        if (strcmp(arr[i].Name, name) == 0) { pos = i; break; }
    }
    if (pos == -1) {
        printf("No student found with name '%s'.\n", name);
        return;
    }
    
    for (int i = pos; i < *n - 1; i++) arr[i] = arr[i+1];
    (*n)--;
    printf("Student '%s' deleted.\n", name);
}

void modify_contact_or_address(struct Student arr[], int n, int id) {
    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i].ID == id) { pos = i; break; }
    }
    if (pos == -1) {
        printf("No student found with ID %d.\n", id);
        return;
    }
    printf("Modify (1) Contact Number or (2) Address ? Enter 1 or 2: ");
    int choice;
    scanf("%d", &choice);
    getchar();
    if (choice == 1) {
        printf("Enter new contact number: ");
        read_line(arr[pos].ContactNumber, sizeof arr[pos].ContactNumber);
        printf("Contact number updated.\n");
    } else if (choice == 2) {
        printf("Enter new address: ");
        read_line(arr[pos].Address, sizeof arr[pos].Address);
        printf("Address updated.\n");
    } else {
        printf("Invalid choice.\n");
    }
}

void print_student(const struct Student *s) {
    printf("ID: %d\n", s->ID);
    printf("Name: %s\n", s->Name);
    printf("CGPA: %.2f\n", s->Cgpa);
    printf("Age: %d\n", s->Age);
    printf("Gender: %s\n", s->Gender);
    printf("Contact: %s\n", s->ContactNumber);
    printf("Address: %s\n", s->Address);
}

int main() {
    struct Student arr[100];
    int n;

    printf("How many students (max 100)? ");
    scanf("%d", &n);
    if (n < 0) n = 0;
    if (n > 100) n = 100;
    getchar();

    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &arr[i].ID);
        getchar();
        printf("Name: ");
        read_line(arr[i].Name, sizeof arr[i].Name);
        printf("CGPA: ");
        scanf("%f", &arr[i].Cgpa);
        printf("Age: ");
        scanf("%d", &arr[i].Age);
        getchar();
        printf("Gender: ");
        read_line(arr[i].Gender, sizeof arr[i].Gender);
        printf("Contact Number: ");
        read_line(arr[i].ContactNumber, sizeof arr[i].ContactNumber);
        printf("Address: ");
        read_line(arr[i].Address, sizeof arr[i].Address);
    }

    while (1) {
        printf("\nMenu:\n");
        printf("1. Display IDs and names with CGPA > 3.5\n");
        printf("2. Insert new student at end\n");
        printf("3. Delete student by name\n");
        printf("4. Modify contact or address by ID\n");
        printf("5. Show all students\n");
        printf("6. Exit\n");
        printf("Choose an option: ");
        int opt;
        if (scanf("%d", &opt) != 1) break;
        getchar();

        if (opt == 1) {
            display_high_cgpa(arr, n);
        } else if (opt == 2) {
            insert_student(arr, &n);
        } else if (opt == 3) {
            char name[50];
            printf("Enter name to delete: ");
            read_line(name, sizeof name);
            delete_student_by_name(arr, &n, name);
        } else if (opt == 4) {
            int id;
            printf("Enter ID to modify: ");
            scanf("%d", &id);
            getchar();
            modify_contact_or_address(arr, n, id);
        } else if (opt == 5) {
            for (int i = 0; i < n; i++) {
                printf("\nStudent %d:\n", i + 1);
                print_student(&arr[i]);
            }
            if (n == 0) printf("No students.\n");
        } else if (opt == 6) {
            break;
        } else {
            printf("Invalid option.\n");
        }
    }

    return 0;
}