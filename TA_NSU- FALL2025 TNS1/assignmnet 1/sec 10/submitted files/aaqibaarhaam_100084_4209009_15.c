#include <stdio.h>
#include <string.h>
struct student
{
    int ID;
    char name[50];
    float cgpa;
    int age;
    char gender;
    char contactnumber[20];
    char address[100];
};
void populate(struct student s[],int i)
{
    printf("Enter ID: "); scanf("%d",&s[i].ID); fflush(stdin);
    printf("Enter name: "); gets(s[i].name);
    printf("Enter CGPA: "); scanf("%f",&s[i].cgpa);
    printf("Enter age: "); scanf("%d",&s[i].age);
    printf("Enter gender (m/f): "); scanf(" %c ",&s[i].gender); fflush(stdin);
    printf("Enter contact number: "); gets(s[i].contactnumber); fflush(stdin);
    printf("Enter address: "); gets(s[i].address);
}
void highcgpa(struct student s[],int n)
{
    printf("\n\n~~~~~~~~STUDENTS WITH CGPA HIGHER THAN 3.5~~~~~~~~");
    for(int i=0;i<n;i++)
        if(s[i].cgpa > 3.5)
            printf("\n\nID: %d\nName: %s\n\n",s[i].ID,s[i].name);
}
int addstudent(struct student s[],int n)
{
    if(n>=100)
    {
        printf("\n\nMax student records allowed is 100, no more space.\n");
        return n;
    }
    printf("\n\n");
    populate(s,n);
    return n+1;
}
int deletestudent(struct student s[],int n)
{
    printf("\n\nEnter the name of the student whose record you'd like to delete: ");
    char deletename[50];
    scanf(" %s",deletename);
    for(int i=0;i<n;i++)
    {
        if(!strcmp(deletename,s[i].name))
        {
            for(int j=i;j<n-1;j++)//n-1 cause one will decrease
                s[j]=s[j+1];
            n--;
            printf("\n\nRecord deleted successfully.\n\n");
            return n;
        }
    }
    printf("\n\nRecord not found.\n\n");//if found before, it will return and end function
    return n;
}
int modifystudent(struct student s[],int n)
{
    printf("\n\nEnter the ID number of the student whose record you'd like to modify: "); int id;  scanf("%d",&id);
    int reserveindex=-1;//not 0, cause id could be at 0 index
    for(int i=0;i<n;i++)
    {
        if(s[i].ID==id)
            reserveindex=i;
    }
    if(reserveindex==-1)
    {
        printf("\n\nID not found.\n\n");
        return n;
    }
    printf("1. Modify contact number:\n2.Modify address:\n(Choose 1 or 2)\n"); int choice; scanf("%d",&choice);
    if(choice==1)
    {
        printf("Enter new contact number: ");
        scanf(" %s",s[reserveindex].contactnumber);
    }
    if(choice==2)
    {
        printf("Enter new address: ");
        scanf(" %s",s[reserveindex].address);
    }
    return n;
}
void display(struct student s[],int n)
{
    printf("\n\n~~~~~~~~ALL STUDENT RECORDS~~~~~~~~");
    for(int i=0;i<n;i++)
    {
        printf("\n\n");
        printf("ID: %d\n",s[i].ID);
        printf("Name: %s\n",s[i].name);
        printf("CGPA: %f\n",s[i].cgpa);
        printf("Age: %d\n",s[i].age);
        printf("Gender: %c\n",s[i].gender);
        printf("Contact number: %s\n",s[i].contactnumber);
        printf("Address: %s\n",s[i].address);
        printf("\n\n");
    }
}
int main()
{
    printf("Enter no. of students: "); int n; scanf("%d",&n); struct student s[n];
    for(int i=0;i<n;i++)
        populate(s,i);
    while(1)
    {
        printf("\n\n\n\n~~~~~~~~ALL STUDENT RECORDS~~~~~~~~\n\n");
        printf("1. Display ID and names of students who have a CGPA more than 3.5: \n");
        printf("2. Add a student: \n");
        printf("3. Delete a student: \n");
        printf("4. Modify contact number or address of a student: \n");
        printf("5. Show all records: \n");
        printf("6. Exit\n");
        printf("\n\nEnter choice: "); int choice; scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            highcgpa(s,n);
            break;
        case 2:
            n=addstudent(s,n);
            break;
        case 3:
            n=deletestudent(s,n);
            break;
        case 4:
            n=modifystudent(s,n);
            break;
        case 5:
            display(s,n);
            break;
        default:
            return 0;
        }
    }
    return 0;
}
