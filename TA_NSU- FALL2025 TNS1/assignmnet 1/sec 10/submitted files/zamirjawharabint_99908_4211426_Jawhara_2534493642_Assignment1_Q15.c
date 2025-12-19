#include<stdio.h>
#include<string.h>
struct Student
{
    int id;
    char name[20];
    float cgpa;
    int age;
    char gender[10];
    int contactnum;
    char address[100];
};

void highcgpa(struct Student s[], int n)
{
    for(int i=0; i<n; i++)
    {
        if(s[i].cgpa>3.5)
            printf("%d, %s\n", s[i].id, s[i].name);
    }
}

int newstu(struct Student s[], int n)
{
    printf("Enter Student Information:/n");
        printf("Enter ID: ");
        scanf("%d",&s[n].id);
        printf("\nEnter Name: ");
        scanf("%s", s[n].name);
        printf("\nEnter CGPA: ");
        scanf("%f", &s[n].cgpa);
        printf("\nEnter Age: ");
        scanf("%d",&s[n].age);
        printf("\nEnter Gender: ");
        scanf("%s", s[n].gender);
         printf("Enter Contact Number: ");
        scanf("%d",&s[n].contactnum);
        printf("\nEnter Address: ");
        scanf("%s", s[n].address);
        printf("\n\n");

    n++;
    return n;
}

int delstu(struct Student s[], int n, char name[])
{
    int flag=0;
    for(int i=0; i<n; i++)
    {
        if(strcmp(s[i].name, name)==0)
        {
            for(int j=i; j<n-1; j++)
            {
                s[j]= s[j+1];
            }
            n--;
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("Invalid name.");
    return n;
}

void modstu(struct Student s[], int n, int id)
{
    int flag=0;
    for(int i=0; i<n; i++)
    {
        if(s[i].id== id)
        {
            printf("Enter new contact and address: \n");
            scanf("%d %s", &s[i].contactnum, s[i].address);
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("invalid id.");
}


int main()
{
    int n;
    struct Student s[100];
    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter Student Information:\n" );
    for(int i=0; i<n; i++)
    {
        printf("Enter ID: ");
        scanf(" %d",&s[i].id);

        printf("\nEnter Name: \n");
        scanf("%s", s[i].name);

        printf("\nEnter CGPA: \n");
        scanf("%f", &s[i].cgpa);

        printf("\nEnter Age: \n");
        scanf("%d",&s[i].age);

        printf("\nEnter Gender: \n");
        scanf(" %s", s[i].gender);

        printf("\nEnter Contact Number: \n");
        scanf(" %d",&s[i].contactnum);

        printf("\nEnter Address: \n");
        scanf(" %s", s[i].address);
        printf("\n\n");
    }

    printf("\nCGPA higher than 3.5: ");
    highcgpa(s,n);

    printf("\nInsert a new student: ");
    n= newstu(s,n);

    char delname[20];
    printf("\nEnter name to delete student: ");
    scanf("%s", delname);
    n= delstu(s,n,delname);

    int modid;
    printf("\nEnter id to modify:");
    scanf("%d", &modid);
    modstu(s,n,modid);

    return 0;
}

