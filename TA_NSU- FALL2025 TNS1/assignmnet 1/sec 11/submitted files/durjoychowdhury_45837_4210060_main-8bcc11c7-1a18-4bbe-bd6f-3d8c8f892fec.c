#include <stdio.h>

struct Student {
    int ID;
    char Name[50];
    float Cgpa;
    int Age;
    char Gender[10];
    char Contact[20];
    char Address[50];
};

void displayCGPA(struct Student s[], int n)
{
    int i;
    printf("\nStudents having CGPA > 3.5:\n");
    for (i = 0; i < n; i++)
        if (s[i].Cgpa > 3.5)
            printf("%d %s\n", s[i].ID, s[i].Name);
}

void insertStudent(struct Student s[], int *n)
{
    printf("\nEnter new student info:\n");
    printf("ID: "); scanf("%d", &s[*n].ID);
    printf("Name: "); scanf("%s", s[*n].Name);
    printf("CGPA: "); scanf("%f", &s[*n].Cgpa);
    printf("Age: "); scanf("%d", &s[*n].Age);
    printf("Gender: "); scanf("%s", s[*n].Gender);
    printf("Contact: "); scanf("%s", s[*n].Contact);
    printf("Address: "); scanf("%s", s[*n].Address);

    (*n)++;
}

void deleteByName(struct Student s[], int *n, char delName[])
{
    int i, j, found = 0;

    for (i = 0; i < *n; i++)
    {
        int x = 0, eq = 1;
        while (s[i].Name[x] != '\0' || delName[x] != '\0')
        {
            if (s[i].Name[x] != delName[x])
            {
                eq = 0;
                break;
            }
            x++;
        }

        if (eq)
        {
            found = 1;
            for (j = i; j < *n - 1; j++)
                s[j] = s[j+1];
            (*n)--;
            break;
        }
    }

    if (found)
        printf("Student deleted.\n");
    else
        printf("Name not found.\n");
}

void modifyByID(struct Student s[], int n, int id)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (s[i].ID == id)
        {
            printf("Enter new contact: ");
            scanf("%s", s[i].Contact);
            printf("Enter new address: ");
            scanf("%s", s[i].Address);
            printf("Record updated.\n");
            return;
        }
    }
    printf("ID not found.\n");
}

int main()
{
    struct Student s[100];
    int n, choice, id;
    char delName[50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("\nEnter information:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i+1);
        printf("ID: "); scanf("%d", &s[i].ID);
        printf("Name: "); scanf("%s", s[i].Name);
        printf("CGPA: "); scanf("%f", &s[i].Cgpa);
        printf("Age: "); scanf("%d", &s[i].Age);
        printf("Gender: "); scanf("%s", s[i].Gender);
        printf("Contact: "); scanf("%s", s[i].Contact);
        printf("Address: "); scanf("%s", s[i].Address);
    }

    // Menu
    do {
        printf("\n--- MENU ---\n");
        printf("1. Display students with CGPA > 3.5\n");
        printf("2. Insert new student\n");
        printf("3. Delete student by name\n");
        printf("4. Modify contact/address by ID\n");
        printf("5. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            displayCGPA(s, n);
            break;

        case 2:
            insertStudent(s, &n);
            break;

        case 3:
            printf("Enter name to delete: ");
            scanf("%s", delName);
            deleteByName(s, &n, delName);
            break;

        case 4:
            printf("Enter ID: ");
            scanf("%d", &id);
            modifyByID(s, n, id);
            break;

        case 5:
            break;

        default:
            printf("Invalid choice\n");
        }
    } while (choice != 5);

    return 0;
}
