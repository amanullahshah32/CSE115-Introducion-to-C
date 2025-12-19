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

void highcg(struct Student s[], int n)
{
    for(int i=0; i<n; i++)
    {
        if(s[i].cgpa>3.5)
            printf("%d, %s\n", s[i].id, s[i].name);
    }
}

int newstu(struct Student s[], int n)
{
    printf("Enter id, name, cgpa, age, gender, contact number, address:\n");
    scanf("%d %s %f %d %s %d %s", &s[n].id, s[n].name ,&s[n].cgpa ,&s[n].age, s[n].gender,&s[n].contactnum,s[n].address);
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

    printf("Enter id, name, cgpa, age, gender, contact number, address: ");
    for(int i=0; i<n; i++)
        scanf("%d %s %f %d %s %d %s", &s[i].id, s[i].name ,&s[i].cgpa ,&s[i].age, s[i].gender,&s[i].contactnum,s[i].address);

    printf("\nCGPA higher than 3.5: ");
    highcg(s,n);

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
