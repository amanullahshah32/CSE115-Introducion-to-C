#include <stdio.h>
#include <string.h>

struct Student {
    int ID;
    char Name[50];
    float Cgpa;
    int Age;
    char Gender[10];
    char ContactNumber[20];
    char Address[50];
};

void displayAboveCGPA(struct Student s[], int n)
{
    int i, found = 0;
    printf("Students with CGPA > 3.5:\n");

    for (i = 0; i < n; i++)
    {
        if (s[i].Cgpa > 3.5)
        {
            printf("ID: %d  Name: %s  CGPA: %.2f\n",
                   s[i].ID, s[i].Name, s[i].Cgpa);
            found = 1;
        }
    }

    if (found == 0)
        printf("None found.\n");
}

int insertStudent(struct Student s[], int n)
{
    if (n >= 100)
    {
        printf("Array full. Cannot insert.\n");
        return n;
    }

    printf("Enter new student info:\n");
    printf("ID: ");
    scanf("%d", &s[n].ID);
    printf("Name (no spaces): ");
    scanf("%s", s[n].Name);
    printf("CGPA: ");
    scanf("%f", &s[n].Cgpa);
    printf("Age: ");
    scanf("%d", &s[n].Age);
    printf("Gender: ");
    scanf("%s", s[n].Gender);
    printf("Contact Number: ");
    scanf("%s", s[n].ContactNumber);
    printf("Address (no spaces): ");
    scanf("%s", s[n].Address);

    n++;
    printf("Inserted successfully.\n");
    return n;
}

int deleteStudent(struct Student s[], int n)
{
    char name[50];
    int i, index = -1;

    printf("Enter name to delete: ");
    scanf("%s", name);

    for (i = 0; i < n; i++)
    {
        if (strcmp(s[i].Name, name) == 0)
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        printf("Student not found.\n");
        return n;
    }

    for (i = index; i < n - 1; i++)
        s[i] = s[i + 1];

    n--;
    printf("Deleted successfully.\n");
    return n;
}

void modifyStudent(struct Student s[], int n)
{
    int id, i, choice;
    printf("Enter ID to modify: ");
    scanf("%d", &id);

    int index = -1;

    for (i = 0; i < n; i++)
    {
        if (s[i].ID == id)
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        printf("Student not found.\n");
        return;
    }

    printf("1. Modify Contact\n2. Modify Address\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter new Contact Number: ");
        scanf("%s", s[index].ContactNumber);
        printf("Contact updated.\n");
    }
    else if (choice == 2)
    {
        printf("Enter new Address (no spaces): ");
        scanf("%s", s[index].Address);
        printf("Address updated.\n");
    }
    else
    {
        printf("Invalid choice.\n");
    }
}

int main()
{
    struct Student stlist[100];
    int n, i, choice;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter info of student %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &stlist[i].ID);
        printf("Name (no spaces): ");
        scanf("%s", stlist[i].Name);
        printf("CGPA: ");
        scanf("%f", &stlist[i].Cgpa);
        printf("Age: ");
        scanf("%d", &stlist[i].Age);
        printf("Gender: ");
        scanf("%s", stlist[i].Gender);
        printf("Contact Number: ");
        scanf("%s", stlist[i].ContactNumber);
        printf("Address (no spaces): ");
        scanf("%s", stlist[i].Address);
    }

    do
    {
        printf("\n--- MENU ---\n");
        printf("1. Show students with CGPA > 3.5\n");
        printf("2. Insert new student\n");
        printf("3. Delete student by name\n");
        printf("4. Modify contact or address by ID\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
            displayAboveCGPA(stlist, n);
        else if (choice == 2)
            n = insertStudent(stlist, n);
        else if (choice == 3)
            n = deleteStudent(stlist, n);
        else if (choice == 4)
            modifyStudent(stlist, n);
        else if (choice != 5)
            printf("Invalid choice.\n");

    } while (choice != 5);

    return 0;
}
