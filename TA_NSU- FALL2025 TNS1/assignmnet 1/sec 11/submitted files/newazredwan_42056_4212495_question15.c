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

void displayHigh(struct Student s[], int n) {
    printf("Students with CGPA > 3.5:\n");
    for (int i = 0; i < n; i++)
        if (s[i].Cgpa > 3.5)
            printf("%d %s\n", s[i].ID, s[i].Name);
}

void insert(struct Student s[], int *n) {
    printf("Enter new student: ID Name Cgpa Age Gender Contact Address:\n");
    scanf("%d %s %f %d %s %s %s",
          &s[*n].ID, s[*n].Name, &s[*n].Cgpa, &s[*n].Age,
          s[*n].Gender, s[*n].Contact, s[*n].Address);
    (*n)++;
}

void deleteName(struct Student s[], int *n, char name[]) {
    for (int i = 0; i < *n; i++) {
        if (strcmp(s[i].Name, name) == 0) {
            for (int j = i; j < *n - 1; j++)
                s[j] = s[j + 1];
            (*n)--;
            printf("Deleted.\n");
            return;
        }
    }
    printf("Name not found.\n");
}

void modify(struct Student s[], int n, int id) {
    for (int i = 0; i < n; i++) {
        if (s[i].ID == id) {
            int opt;
            printf("1) Modify Contact  2) Modify Address: ");
            scanf("%d", &opt);

            if (opt == 1) {
                printf("Enter new contact: ");
                scanf("%s", s[i].Contact);
            } else {
                printf("Enter new address: ");
                scanf("%s", s[i].Address);
            }
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

    printf("Enter details (ID Name Cgpa Age Gender Contact Address):\n");
    for (int i = 0; i < n; i++)
        scanf("%d %s %f %d %s %s %s",
              &s[i].ID, s[i].Name, &s[i].Cgpa, &s[i].Age,
              s[i].Gender, s[i].Contact, s[i].Address);

    displayHigh(s, n);

    insert(s, &n);

    char del[50];
    printf("Enter name to delete: ");
    scanf("%s", del);
    deleteName(s, &n, del);

    int id;
    printf("Enter ID to modify: ");
    scanf("%d", &id);
    modify(s, n, id);

    return 0;
}