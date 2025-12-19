#include <stdio.h>
#include <string.h>

struct student
{
    int ID;
    char fname[20];
    char lname[20];
    int age;
    float cgpa;
};

int main()
{
    struct student stlist[5];
    int i,searchID,found,minAge;
    float maxCGPA;

    printf("Enter Records of 5 Students:\n");
    for(i=0;i<5;i++)
    {
        printf("\nStudent %d:\n",i+1);
        printf("ID: ");
        scanf("%d",&stlist[i].ID);
        printf("First Name: ");
        scanf("%s",stlist[i].fname);
        printf("Last Name: ");
        scanf("%s",stlist[i].lname);
        printf("Age: ");
        scanf("%d",&stlist[i].age);
        printf("CGPA: ");
        scanf("%f",&stlist[i].cgpa);
    }
     printf("Enter ID to search: ");
     scanf("%d",&searchID);

      found = 0;
    for(i = 0; i < 5; i++)
    {
        if(stlist[i].ID == searchID) {
        printf("Found! Name: %s %s, Age: %d, CGPA: %.2f\n",stlist[i].fname,stlist[i].lname,stlist[i].age,stlist[i].cgpa);
            found=1;
            break;
        }
    }
     if(found==0)
        printf("Error: Invalid ID.\n");
    minAge = stlist[0].age;

    for(i=1;i<5;i++)
    {
        if(stlist[i].age < minAge)
        {
            minAge = stlist[i].age;
        }
    }
    printf("Youngest student(s): ");
    for(i = 0; i < 5; i++)
    {
        if(stlist[i].age == minAge)
        {
            printf("%s %s ", stlist[i].fname, stlist[i].lname);
        }
    }
    maxCGPA = stlist[0].cgpa;

    for(i=1;i<5;i++)
    {
        if(stlist[i].cgpa > maxCGPA)
        {
            maxCGPA = stlist[i].cgpa;
        }
    }

    printf("\nStudent(s) with highest CGPA (%.2f):\n",maxCGPA);
    for(i=0;i<5;i++)
    {
        if(stlist[i].cgpa == maxCGPA)
        {
             printf("ID: %d, Name: %s %s\n",stlist[i].ID,stlist[i].fname,stlist[i].lname);
        }
    }
     for(i=0;i<5;i++)
     {
        if(strcmp(stlist[i].fname, "John")!=0)
        {
            printf("%s %s (ID: %d)\n",stlist[i].fname,stlist[i].lname,stlist[i].ID);
        }
    }
}
