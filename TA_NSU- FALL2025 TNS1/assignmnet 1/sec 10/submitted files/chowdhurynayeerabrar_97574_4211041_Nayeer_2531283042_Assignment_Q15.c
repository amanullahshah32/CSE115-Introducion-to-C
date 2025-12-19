#include <stdio.h>
#include<string.h>
struct Student {
    int ID;
    char Name[50];
    float Cgpa;
    int Age;
    char Gender[10];
    char ContactNumber[20];
    char Address[100];
};

void displayHighCGPA(struct Student arr[], int n)
{
    printf("\nStudents with CGPA > 3.5:\n");
    for(int i=0; i<n; i++)
        {
            if(arr[i].Cgpa > 3.5)
            printf("ID: %d, Name: %s\n", arr[i].ID, arr[i].Name);
        }
}
int insertStudent(struct Student arr[], int n)
{
    printf("\nEnter new student details:\n");
    printf("ID: ");
    scanf("%d", &arr[n].ID);
    printf("Name: ");
    scanf("%s", arr[n].Name);
    printf("CGPA: ");
    scanf("%f", &arr[n].Cgpa);
    printf("Age: ");
    scanf("%d", &arr[n].Age);
    printf("Gender: ");
    scanf("%s", arr[n].Gender);
    printf("Contact Number: ");
    scanf("%s", arr[n].ContactNumber);
    printf("Address: ");
    scanf("%s", arr[n].Address);
    n++;
    return n;
}

int deleteByName(struct Student arr[], int n, char name[])
{
    int index = -1;
    int i;
    for (i = 0; i < n; i++)
    {
        if (strcmp(arr[i].Name, name) == 0)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        printf("Name not found!\n");
        return n;
    }
    for (i = index; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    printf("Record deleted.\n");
    return n-1;
}
void modifyByID(struct Student arr[], int n, int id)
{
    int i, choice;
    for (i = 0; i < n; i++)
        {
        if (arr[i].ID == id)
        {
            printf("\nModify:\n1. Contact Number\n2. Address\nEnter choice: ");
            scanf("%d", &choice);
            if (choice == 1)
            {
                printf("Enter new contact: ");
                scanf("%s", arr[i].ContactNumber);
            }
            else
            {
                printf("Enter new address: ");
                scanf("%s", arr[i].Address);
            }
            return;
        }
    }
    printf("Invalid ID!\n");
}
int main()
{
    struct Student list[100];
    int n, i;
    char delName[50];
    int id;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &list[i].ID);
        printf("Name: ");
        scanf("%s", list[i].Name);
        printf("CGPA: ");
        scanf("%f", &list[i].Cgpa);
        printf("Age: ");
        scanf("%d", &list[i].Age);
        printf("Gender: ");
        scanf("%s", list[i].Gender);
        printf("Contact Number: ");
        scanf("%s", list[i].ContactNumber);
        printf("Address: ");
        scanf("%s", list[i].Address);
    }
    displayHighCGPA(list, n);
    n = insertStudent(list, n);
    printf("\nEnter name to delete: ");
    scanf("%s", delName);
    n=deleteByName(list, n, delName);
    printf("\nEnter ID to modify: ");
    scanf("%d", &id);
    modifyByID(list, n, id);
    return 0;
}
