#include <stdio.h>
#include <string.h>

typedef struct student
{
    int ID;
    char name[20];
    int age;
    float cgpa;
    char gender[10];
  char Contactnumber[20];
    char Address[100];
} student;

// 1.function to display id and names of all students who have a CGPA more than 3.5

void cg(student stlist[], int n)
{
    printf("\nStudents with CGPA > 3.5:\n");
    for (int i = 0; i < n; i++)
    {
        if (stlist[i].cgpa > 3.5)
        {
            printf("ID: %d, Name: %s\n", stlist[i].ID, stlist[i].name);
        }
    }
}

// 2.function to insert a new student information

int insertstudent(student stlist[], int n)
{
    student newStudent;
    printf("\nEnter new student info\n");
    printf("Enter ID: ");
    scanf("%d", &newStudent.ID);
    getchar();
    printf("Enter Name: ");
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = '\0';
    printf("Enter CGPA: ");
    scanf("%f", &newStudent.cgpa);
    printf("Enter Age: ");
    scanf("%d", &newStudent.age);
    getchar();
    printf("Enter Gender: ");
    fgets(newStudent.gender, sizeof(newStudent.gender), stdin);
    newStudent.gender[strcspn(newStudent.gender, "\n")] = '\0';
    printf("Enter Contact Number: ");
    fgets(newStudent.Contactnumber, sizeof(newStudent.Contactnumber), stdin);
    newStudent.Contactnumber[strcspn(newStudent.Contactnumber, "\n")] = '\0';
    printf("Enter Address: ");
    fgets(newStudent.Address, sizeof(newStudent.Address), stdin);
    newStudent.Address[strcspn(newStudent.Address, "\n")] = '\0';

    stlist[n] = newStudent;
    printf("\nStudent inserted successfully!\n");
    return n + 1; // return new count
}

// 3.function to delete student information

int deleteStudent(student stlist[], int n)
{
    char targetstudent[20];
    printf("\nEnter the Name of student to delete:");
    fgets(targetstudent, 20, stdin);
    targetstudent[strcspn(targetstudent, "\n")] = '\0';
    int isfound = 0;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(stlist[i].name, targetstudent) == 0)
        {
            isfound = 1;
            for (int j = i; j < n - 1; j++)
            {
                stlist[j] = stlist[j + 1];
            }
            printf("\nStudent deleted successfully!\n");
            break;
        }
    }
    if (isfound == 0)
    {

        printf("\n Student not found.");
        return n;
    }
    return n-1;
}

//4.function to modify contact number or address

void modifyinfo(student stlist[], int n)
{
    int targetid;
    printf("\nEnter the id of student to modify: ");
    scanf("%d", &targetid);
    for (int i = 0; i < n; i++)
    {
        if (stlist[i].ID == targetid)
        {
            int select;
            printf("Modify:\n1. Contact Number\n2. Address\nEnter choice number: ");
            scanf("%d", &select);
            getchar();
            if (select == 1)
            {
                printf("Enter Contact Number: ");
fgets(stlist[i].Contactnumber, sizeof(stlist[i].Contactnumber), stdin);
                stlist[i].Contactnumber[strcspn(stlist[i].Contactnumber, "\n")] = '\0';

            }
            else if (select == 2)
            {
                printf("\n Enter new Address:");
                fgets(stlist[i].Address, sizeof(stlist[i].Address), stdin);
                stlist[i].Address[strcspn(stlist[i].Address,"\n")] = '\0';
            }
            else
                printf("\n Invalid ID");
            break;
        }
    }
    printf("\nStudent info updated successfully!\n");
}

int main()
{
    student stlist[100];
    int n;
    printf("\n enter number of students:");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &stlist[i].ID);
        getchar();
        printf("Enter Name: ");
        fgets(stlist[i].name, sizeof(stlist[i].name), stdin);
        stlist[i].name[strcspn(stlist[i].name, "\n")] = '\0';
        printf("Enter CGPA: ");
        scanf("%f", &stlist[i].cgpa);
        printf("Enter Age: ");
        scanf("%d", &stlist[i].age);
        getchar();
        printf("Enter Gender: ");
        fgets(stlist[i].gender, sizeof(stlist[i].gender), stdin);
        stlist[i].gender[strcspn(stlist[i].gender, "\n")] = '\0';
        printf("Enter Contact Number: ");
        fgets(stlist[i].Contactnumber,sizeof(stlist[i].Contactnumber),stdin);
        stlist[i].Contactnumber[strcspn(stlist[i].Contactnumber,"\n")]='\0';
        printf("Enter Address: ");
        fgets(stlist[i].Address, sizeof(stlist[i].Address), stdin);
        stlist[i].Address[strcspn(stlist[i].Address, "\n")] = '\0';
    }

    int choice;
    do
    {
        printf("\nMenu:\n");
        printf("1. Display students with CGPA > 3.5\n");
        printf("2. Insert a new student\n");
        printf("3. Delete a student by name\n");
        printf("4. Modify contact number or address by ID\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            cg(stlist, n);
            break;
        case 2:
            n = insertstudent(stlist, n);
            break;
        case 3:
            n = deleteStudent(stlist, n);
            break;
        case 4:
            modifyinfo(stlist, n);
            break;
        case 5:
            printf("\nExiting program.\n");
            break;

        default:
            printf("Invalid choice.\n");
            break;
        }
    } while (choice != 5);

    return 0;
}
