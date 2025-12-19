#include<stdio.h>
#include<string.h>
struct student
{

    int ID,age;
    char fname[20],lname[20];
    float cgpa;

} stList[5];
int main()
{
    int i,search,found=0,young=0;
    float highest=0;

    printf("Enter Student's informations:\n ");
    for(i=0; i<5; i++)
    {
        printf("Enter ID: ");
        scanf("%d",&stList[i].ID);
        printf("Enter First and Last name:\n");
        scanf("%s %s",&stList[i].fname,&stList[i].lname);
        printf("Enter Age and CGPA:\n");
        scanf("%d %f",&stList[i].age,&stList[i].cgpa);
    }

    printf("Enter ID to search: ");
    scanf("%d",&search);
    for(i=0; i<5; i++)
    {
        if(stList[i].ID==search)
        {
            printf("ID:%d\n",stList[i].ID);
            printf("Name: %s %s\n",stList[i].fname,stList[i].lname);
            printf("Age:%d\nCGPA:%.2f\n",stList[i].age,stList[i].cgpa);
            found=1;
            break;

        }
    }
    if(found==0)
    {
        printf("Invalid ID!");
    }
    printf("\n");
    printf("Youngest Student:\n ");
    for(i=0; i<5; i++)
    {
        if(stList[i].age<stList[young].age)
        {
            young=i;
        }
    }
    printf("Youngest Student is %s %s",stList[young].fname,stList[young].lname);
    printf("\n");
    printf("Student with highest CGPA:\n");
    highest=stList[0].cgpa;
    for(i=0; i<5; i++)
    {
        if(stList[i].cgpa>highest)
        {
            highest=stList[i].cgpa;
        }
    }
    for(i=0; i<5; i++)
    {
        if(stList[i].cgpa==highest)
            printf("Student with highest CGPA(%.2f)is %s %s",stList[i].cgpa,stList[i].fname,stList[i].lname);
    }
    printf("\n");
    printf("First name not 'John':\n");
    found=0;
    for (int i=0; i<5; i++)
    {
        if (strcmp(stList[i].fname,"John")!= 0)
        {
            printf("ID:%d Name:%s %s Age:%d CGPA:%.2f\n",stList[i].ID,stList[i].fname,stList[i].lname,stList[i].age,stList[i].cgpa);
            found=1;
        }
    }
    if(found==0)
    {
        printf("Everyone has first name 'John'");

    }
    return 0;
}
