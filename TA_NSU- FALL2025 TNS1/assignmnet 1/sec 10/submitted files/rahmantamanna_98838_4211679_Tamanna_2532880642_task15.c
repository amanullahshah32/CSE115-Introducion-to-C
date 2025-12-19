#include<stdio.h>
#include<string.h>
struct student
{

    int id;
    char name[20];
    char gender[10];
    char contactnumber[20];
    char address[100];
    float cgpa;
    int age;
};

void populate(struct student s[],int n);
void high_cgpa(struct student s[],int n);
void insert_student(struct student s[],int n);
void delete_student(struct student s[],int n,char name_delete[]);
void modify(struct student s[],int n,int id_modify);

int main()
{
    struct student s[100];
    int n,choice,id_modify;
    char name_delete[20];

    printf("Enter number of students(maximum 100): ");
    scanf("%d",&n);

    populate(s,n);

    do
    {
        printf("Menu\n");
        printf("1.Display students with CGPA > 3.5\n");
        printf("2.Insert a new student\n");
        printf("3.Delete a student by name\n");
        printf("4.Modify contact or address by ID\n");
        printf("5.Exit\n");

        scanf("%d",&choice);

        switch(choice)
        {

        case 1:
            high_cgpa(s,n);
            break;
        case 2:
            insert_student(s,n);
            break;
        case 3:
            printf("Enter name: ");
            scanf("%s",name_delete);
            delete_student(s,n,name_delete);
            break;
        case 4:
            printf("Enter ID: ");
            scanf("%d",&id_modify);
            modify(s,n,id_modify);
            break;
        case 5:
            printf("Exit!!!\n");
            break;
        default:
            printf("Invalid Choice.\n");
        }
    }while(choice!=5);
    printf("\n");
    return 0;
}

void populate(struct student s[],int n)
{
    for(int i=0; i<n; i++)
    {

        printf("ID: ");
        scanf("%d",&s[i].id);
        printf("Name: ");
        scanf("%s",s[i].name);
        fflush(stdin);
        printf("Age: ");
        scanf("%d",&s[i].age);
        printf("CGPA: ");
        scanf("%f",&s[i].cgpa);
        printf("Gender: ");
        scanf("%s",s[i].gender);
        printf("Contact Number: ");
        scanf("%s",s[i].contactnumber);
        printf("Address: ");
        scanf("%s",s[i].address);
    }
}
void high_cgpa(struct student s[],int n)
{
    int found=0;
    for(int i=0; i<n; i++)
    {
        if(s[i].cgpa>3.5)
        {
            printf("ID:%d and Name:%s\n",s[i].id,s[i].name);
            found=1;
        }
    } if(found==0)
    {
        printf("Not Found\n");
    }
}
void insert_student(struct student s[],int n)
{
    if(n>=100)
    {
        printf("Cannot insert(No space left)");
        return;
    }

        printf("Enter ID: ");
        scanf("%d",&s[n].id);
        printf("Name: ");
        scanf("%s",s[n].name);
        printf("Age: ");
        scanf("%d",&s[n].age);
        printf("CGPA: ");
        scanf("%f",&s[n].cgpa);
        printf("Gender: ");
        scanf("%s",s[n].gender);
        printf("Contact Number: ");
        scanf("%s",s[n].contactnumber);
        printf("Address: ");
        scanf("%s",s[n].address);
        n++;
        printf("Student added successfully! Total Students now:%d\n",n);
}
void delete_student(struct student s[],int n,char name_delete[])
{
    int found=0;
    for(int i=0; i<n; i++)
    {
        if(strcmp(s[i].name,name_delete)==0)
        {
            found=1;
            for(int j=i; j<n-1; j++)
            {
                s[j]=s[j+1];
            }
            n--;
            printf("Record deleted");
            break;
        }
    }
    if(found==0)
    {
        printf("Not Found");
    }
}
void modify(struct student s[],int n,int id_modify)
{
    int choice;
    for(int i=0; i<n; i++)
    {
        if(s[i].id==id_modify)
        {
            printf("What do you want to modify?\n");
            printf("1.Contact Number\n");
            printf("2.Address\n");
            scanf("%d",&choice);

            if(choice==1)
            {
                printf("Enter new contact number: ");
                scanf("%s",s[i].contactnumber);
            }
            else if(choice==2)
            {
                printf("Enter new address: ");
                scanf("%s",s[i].address);
            }
            else
            {
                printf("Invalid choice");
            }
            return;
        }
    } printf("ID not found");
}































