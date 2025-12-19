#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    char name[50];
    float cgpa;
    int age;
    char gender[10];
    char contnum[20];
    char address[100];
};

void highcgpa(struct Student s[],int n)
{
    printf("\nStudents with CGPA > 3.5:\n");
    for(int i=0;i<n; i++)
    {
        if(s[i].cgpa>3.5)
            printf("ID: %d, Name: %s\n",s[i].id,s[i].name);
    }
}

int Newstudent(struct Student s[], int n)
{
    if(n>=100)
    {
        printf("Array is full!\n");
        return n;
    }

    printf("\nEnter ID: ");
    scanf("%d",&s[n].id);

    printf("Enter Name: ");
    scanf(" %[^\n]",s[n].name);

    printf("Enter CGPA: ");
    scanf("%f",&s[n].cgpa);

    printf("Enter Age: ");
    scanf("%d",&s[n].age);

    printf("Enter Gender: ");
    scanf(" %[^\n]",s[n].gender);

    printf("Enter Contact Number: ");
    scanf(" %[^\n]",s[n].contnum);

    printf("Enter Address: ");
    scanf(" %[^\n]",s[n].address);

    n++;
    return n;
}

int Deletestudent(struct Student s[],int n,char name[])
{
    int found=0;

    for(int i=0;i<n;i++)
    {
        if(strcmp(s[i].name, name)==0)
        {
            for(int j=i;j<n-1;j++)
                s[j]=s[j+1];

            n--;
            found=1;
            break;
        }
    }

    if(!found)
        printf("Invalid name.\n");

    return n;
}

void modstudent(struct Student s[],int n,int id)
{
    int found=0;

    for(int i=0;i<n;i++)
    {
        if(s[i].id==id)
        {
            printf("Enter new contact number: ");
            scanf(" %[^\n]",s[i].contnum);

            printf("Enter new address: ");
            scanf(" %[^\n]",s[i].address);

            found=1;
            break;
        }
    }

    if(!found)
        printf("Invalid ID.\n");
}
void printAll(struct Student s[],int n)
{
    printf("\nFinal Student List\n");
    for(int i=0;i<n;i++)
    {
        printf("\nStudent %d:\n",i+1);
        printf("ID: %d\n",s[i].id);
        printf("Name: %s\n",s[i].name);
        printf("CGPA: %.2f\n",s[i].cgpa);
        printf("Age: %d\n",s[i].age);
        printf("Gender: %s\n",s[i].gender);
        printf("Contact: %s\n",s[i].contnum);
        printf("Address: %s\n",s[i].address);
    }
}

int main()
{
    int n;
    struct Student s[100];

    printf("Enter number of students: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("\nEnter details for Student %d:\n",i+1);

        printf("ID: ");
        scanf("%d",&s[i].id);

        printf("Name: ");
        scanf(" %[^\n]",s[i].name);

        printf("CGPA: ");
        scanf("%f",&s[i].cgpa);

        printf("Age: ");
        scanf("%d",&s[i].age);

        printf("Gender: ");
        scanf(" %[^\n]",s[i].gender);

        printf("Contact: ");
        scanf(" %[^\n]",s[i].contnum);

        printf("Address: ");
        scanf(" %[^\n]",s[i].address);
    }

    highcgpa(s, n);

    printf("\nInsert a new student:\n");
    n=Newstudent(s, n);

    char delname[50];
    printf("\nEnter name to delete student: ");
    scanf(" %[^\n]",delname);
    n = Deletestudent(s, n, delname);

    int modid;
    printf("\nEnter ID to modify: ");
    scanf("%d",&modid);
    modstudent(s, n, modid);
    printAll(s, n);

    return 0;
}
