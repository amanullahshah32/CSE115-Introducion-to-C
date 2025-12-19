#include <stdio.h>
struct Student
{
    int ID;
    char Name[50];
    float Cgpa;
    int Age;
    char Gender[10];
    char ContactNumber[20];
    char Address[100];
};

int stringEqual(char a[], char b[])
{
    int i=0;
    while(a[i]!='\0'||b[i]!='\0')
    {
        if(a[i]!=b[i])
            return 0;
        i++;
    }
    return 1;
}

void displayHighCgpa(struct Student st[], int n)
{
    printf("\nStudents with CGPA > 3.5:\n");
    int found=0;

    for(int i=0; i<n; i++)
    {
        if(st[i].Cgpa>3.5)
        {
            printf("ID: %d | Name: %s\n", st[i].ID, st[i].Name);
            found=1;
        }
    }

    if(!found)
        printf("No student has CGPA > 3.5.\n");
}

void insertStudent(struct Student st[], int *n)
{
    if (*n>=100)
    {
        printf("\nArray full! Cannot insert more students.\n");
        return;
    }

    printf("\nEnter new student details:\n");
    printf("ID: ");
    scanf("%d", &st[*n].ID);

    printf("Name: ");
    scanf(" %[^\n]", st[*n].Name);

    printf("CGPA: ");
    scanf("%f", &st[*n].Cgpa);

    printf("Age: ");
    scanf("%d", &st[*n].Age);

    printf("Gender: ");
    scanf("%s", st[*n].Gender);

    printf("Contact Number: ");
    scanf("%s", st[*n].ContactNumber);

    printf("Address: ");
    scanf(" %[^\n]", st[*n].Address);

    (*n)++;
    printf("\nStudent inserted successfully.\n");
}

void deleteStudent(struct Student st[], int *n)
{
    char target[50];
    printf("\nEnter name to delete: ");
    scanf(" %[^\n]", target);

    int index=-1;

    for(int i=0; i<*n; i++)
    {
        if(stringEqual(st[i].Name, target))
        {
            index=i;
            break;
        }
    }

    if(index==-1)
    {
        printf("No student found with that name.\n");
        return;
    }

    for(int i=index; i<*n-1; i++)
    {
        st[i]=st[i+1];
    }

    (*n)--;

    printf("Student deleted successfully.\n");
}

void modifyStudent(struct Student st[], int n)
{
    int id, choice;
    printf("\nEnter ID to modify: ");
    scanf("%d", &id);

    int index=-1;

    for(int i=0; i<n; i++)
    {
        if(st[i].ID==id)
        {
            index=i;
            break;
        }
    }

    if(index==-1)
    {
        printf("Invalid ID! No record found.\n");
        return;
    }

    printf("\nWhat do you want to modify?\n");
    printf("1. Contact Number\n");
    printf("2. Address\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice==1)
    {
        printf("Enter new contact number: ");
        scanf("%s", st[index].ContactNumber);
        printf("Contact updated.\n");
    }
    else if(choice==2)
    {
        printf("Enter new address: ");
        scanf(" %[^\n]", st[index].Address);
        printf("Address updated.\n");
    }
    else {
        printf("Invalid option.\n");
    }
}

int main()
{
    struct Student stlist[100];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        printf("\n--- Student %d ---\n", i+1);
        printf("ID: ");
        scanf("%d", &stlist[i].ID);

        printf("Name: ");
        scanf(" %[^\n]", stlist[i].Name);

        printf("CGPA: ");
        scanf("%f", &stlist[i].Cgpa);

        printf("Age: ");
        scanf("%d", &stlist[i].Age);

        printf("Gender: ");
        scanf("%s", stlist[i].Gender);

        printf("Contact Number: ");
        scanf("%s", stlist[i].ContactNumber);

        printf("Address: ");
        scanf(" %[^\n]", stlist[i].Address);
    }

    displayHighCgpa(stlist, n);

    insertStudent(stlist, &n);
    printf("\nAfter Insertion, n = %d\n", n);

    deleteStudent(stlist, &n);
    printf("\nAfter Deletion, n = %d\n", n);

    modifyStudent(stlist, n);

    return 0;
}
