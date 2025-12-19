#include <stdio.h>
#include <string.h>

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

void displayCGPA(struct Student s[], int n)
{
    for(int i = 0; i < n; i++)
        if(s[i].Cgpa > 3.5)
            printf("%d %s\n", s[i].ID, s[i].Name);
}

void insertStudent(struct Student s[], int *n)
{
    printf("Enter ID, Name, CGPA, Age, Gender, Contact, Address:\n");
    scanf("%d %s %f %d %s %s %s",
          &s[*n].ID, s[*n].Name, &s[*n].Cgpa, &s[*n].Age,
          s[*n].Gender, s[*n].ContactNumber, s[*n].Address);
    (*n)++;
}

void deleteStudent(struct Student s[], int *n, char name[])
{
    for(int i = 0; i < *n; i++)
    {
        if(strcmp(s[i].Name, name) == 0)
        {
            for(int j = i; j < *n - 1; j++)
                s[j] = s[j + 1];
            (*n)--;
            printf("Deleted.\n");
            return;
        }
    }
    printf("Name not found.\n");
}

void modifyInfo(struct Student s[], int n, int id)
{
    for(int i = 0; i < n; i++)
    {
        if(s[i].ID == id)
        {
            printf("Enter new Contact and Address:\n");
            scanf("%s %s", s[i].ContactNumber, s[i].Address);
            printf("Updated.\n");
            return;
        }
    }
    printf("Invalid ID.\n");
}

int main()
{
    struct Student st[100];
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("Enter ID, Name, CGPA, Age, Gender, Contact, Address:\n");
        scanf("%d %s %f %d %s %s %s",
              &st[i].ID, st[i].Name, &st[i].Cgpa, &st[i].Age,
              st[i].Gender, st[i].ContactNumber, st[i].Address);
    }

    return 0;
}
