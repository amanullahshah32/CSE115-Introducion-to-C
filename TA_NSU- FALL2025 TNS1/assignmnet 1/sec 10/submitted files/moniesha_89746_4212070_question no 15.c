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

void displayHighCGPA(struct Student st[], int n)
 {
    printf("\nStudents with CGPA > 3.5:\n");
    int found = 0;

    for(int i = 0; i < n; i++) {
        if (st[i].Cgpa > 3.5) {
            printf("ID: %d | Name: %s\n", st[i].ID, st[i].Name);
            found = 1;
        }
    }

    if (!found)
        printf("No student found with CGPA > 3.5\n");
}

int insertStudent(struct Student st[], int n)
{
    printf("\nEnter NEW student info:\n");

    printf("ID: ");
    scanf("%d", &st[n].ID);
    printf("Name: ");
    scanf("%s", st[n].Name);
    printf("CGPA: ");
    scanf("%f", &st[n].Cgpa);
    printf("Age: ");
    scanf("%d", &st[n].Age);
    printf("Gender: ");
    scanf("%s", st[n].Gender);
    printf("Contact Number: ");
    scanf("%s", st[n].ContactNumber);
    printf("Address: ");
    scanf("%s", st[n].Address);

    return n + 1;
}


int deleteByName(struct Student st[], int n, char name[])
{
    int index = -1;

    for (int i = 0; i < n; i++) {
        if (strcmp(st[i].Name, name) == 0) {
            index = i;
            break;
        }
    }

    if (index == -1)
        {
        printf("\nName not found! No deletion.\n");
        return n;
       }

    for (int i = index; i < n - 1; i++)
        {
        st[i] = st[i + 1];
       }

    printf("\nRecord deleted successfully!\n");
    return n - 1;
}


void modifyRecord(struct Student st[], int n, int id)
 {
    int index = -1;

    for (int i = 0; i < n; i++) {
        if (st[i].ID == id)
            {
            index = i;
            break;
        }
    }

    if (index == -1)
        {
        printf("\nInvalid ID.. No record found.\n");
       }

    int choice;
    printf("\nModify:\n1) Contact Number\n2) Address\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter new contact number: ");
        scanf("%s", st[index].ContactNumber);
        printf("Contact updated successfully!\n");
    }
    else if (choice == 2)
    {
        printf("Enter new address: ");
        scanf("%s", st[index].Address);
        printf("Address updated successfully!\n");
    }
    else
    {
        printf("Invalid \n");
    }
}


int main()
 {
    struct Student stlist[100];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("\nEnter info for %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &stlist[i].ID);
        printf("Name: ");
        scanf("%s", stlist[i].Name);
        printf("CGPA: ");
        scanf("%f", &stlist[i].Cgpa);
        printf("Age: ");
        scanf("%d", &stlist[i].Age);
        printf("Gender: ");
        scanf("%s", stlist[i].Gender);
        printf("Contact Number: ");
        scanf("%s", stlist[i].ContactNumber);
        printf("Address: ");
        scanf("%s", stlist[i].Address);
    }

    int choice;
    char nameDelete[50];
    int idModify;

    while (1)
        {
        printf("\n\n   MENU  \n");
        printf("1. Display students with CGPA > 3.5\n");
        printf("2. Insert a new student\n");
        printf("3. Delete student by name\n");
        printf("4. Modify contact/address by ID\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                displayHighCGPA(stlist, n);
                break;

            case 2:
                n = insertStudent(stlist, n);
                break;

            case 3:
                printf("Enter name to delete: ");
                scanf("%s", nameDelete);
                n = deleteByName(stlist, n, nameDelete);
                break;

            case 4:
                printf("Enter ID to modify record: ");
                scanf("%d", &idModify);
                modifyRecord(stlist, n, idModify);
                break;

            case 5:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}

