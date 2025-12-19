#include <stdio.h>
#include <string.h>

//15) Create a structure called Student with the following members: ID, Name, CgpaAge, Gender, ContactNumber and Address. Assume that there will be maximum of 100 students in the array. Populate the array with information of n number of students (the number n is to be provided by user). [You may write a menu driven program or you may make function calls from main().You may not declare the array of structure as global variable.]
//a) Write a function to display id and names of all students who have a CGPA more than 3.5 in the n number of students in the array
//b)Write a function to insert a new student information at the end of n number of students in the array
//c)Write a function to delete student information given a name by the user [Consider all names are unique]
//d) Write a function to modify contact number or address of a record given the ID number of a student.

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

void showHighCgpa(struct Student s[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(s[i].Cgpa>3.5)
        {
            printf("%d %s\n",s[i].ID,s[i].Name);
        }
    }
}

void insertStudent(struct Student s[],int *n)
{
    printf("Enter ID: ");
    scanf("%d",&s[*n].ID);
    printf("Enter Name: ");
    scanf("%s",s[*n].Name);
    printf("Enter CGPA: ");
    scanf("%f",&s[*n].Cgpa);
    printf("Enter Age: ");
    scanf("%d",&s[*n].Age);
    printf("Enter Gender: ");
    scanf("%s",s[*n].Gender);
    printf("Enter Contact: ");
    scanf("%s",s[*n].ContactNumber);
    printf("Enter Address: ");
    scanf("%s",s[*n].Address);
    (*n)++;
}

void deleteStudent(struct Student s[],int *n)
{
    char name[50];int i,j,found=0;
    printf("Enter name to delete: ");
    scanf("%s",name);
    for(i=0;i<*n;i++)
    {
        if(strcmp(s[i].Name,name)==0)
        {
            found=1;
            for(j=i;j<*n-1;j++)
            {
                s[j]=s[j+1];
            }
            (*n)--;
            break;
        }
    }
    if(!found)
    {
        printf("Not found\n");
    }
}

void modifyRecord(struct Student s[],int n)
{
    int id,i,choice,found=0;
    printf("Enter ID: ");
    scanf("%d",&id);
    for(i=0;i<n;i++)
    {
        if(s[i].ID==id)
        {
            found=1;
            printf("1.Change Contact\n2.Change Address\n");
            scanf("%d",&choice);
            if(choice==1)
            {
                printf("New Contact: ");
                scanf("%s",s[i].ContactNumber);
            }
            else if(choice==2)
            {
                printf("New Address: ");
                scanf("%s",s[i].Address);
            }
            break;
        }
    }

    if(!found)
    {
        printf("Not found\n");
    }
}

int main()
{
    struct Student s[100];
    int n,i,choice;
    printf("Enter number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("ID: ");
        scanf("%d",&s[i].ID);
        printf("Name: ");
        scanf("%s",s[i].Name);
        printf("CGPA: ");
        scanf("%f",&s[i].Cgpa);
        printf("Age: ");
        scanf("%d",&s[i].Age);
        printf("Gender: ");
        scanf("%s",s[i].Gender);
        printf("Contact: ");
        scanf("%s",s[i].ContactNumber);
        printf("Address: ");
        scanf("%s",s[i].Address);
    }
    do
    {
        printf("1.Show CGPA > 3.5\n2.Insert\n3.Delete\n4.Modify\n5.Exit\n");
        scanf("%d",&choice);
        if(choice==1)
        {
            showHighCgpa(s,n);
        }
        else if(choice==2)
        {
            insertStudent(s,&n);
        }
        else if(choice==3)
        {
            deleteStudent(s,&n);
        }
        else if(choice==4)
        {
            modifyRecord(s,n);
        }
    }
        while(choice!=5);

return 0;
}
