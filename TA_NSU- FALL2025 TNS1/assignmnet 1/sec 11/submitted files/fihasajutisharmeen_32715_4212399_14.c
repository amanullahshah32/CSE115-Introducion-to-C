#include <stdio.h>
#include <stdlib.h>

//14) struct student{ int ID; char fname[20]; char lname[20]; int age; float cgpa; }; Using the structure student (declared above), enter the records of 5 students in an array of structure named stlist[] and display
//1)information of student whose ID is provided by user. If Invalid ID, then show an error message,
//2) the name of youngest student
//3) detail information of student/students with highest cgpa
//4) information of students whose first name (fname ) is not John

struct student{int ID;char fname[20];char lname[20];int age;float cgpa;};

int main()
{
    struct student stlist[5];
    int i;
    printf("Enter details of 5 students:\n");

    for(i=0;i<5;i++)
    {
        printf("Student %d:\n",i+1);
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

    int searchID,found=0;
    printf("Enter an ID to search: ");
    scanf("%d",&searchID);

    for(i=0;i<5;i++)
    {
        if(stlist[i].ID==searchID)
        {
            printf("ID: %d\nName: %s %s\nAge: %d\nCGPA: %.2f\n",stlist[i].ID,stlist[i].fname,stlist[i].lname,stlist[i].age,stlist[i].cgpa);
            found=1;
            break;
        }
    }

    if(!found)
    {
        printf("Invalid ID\n");
    }

    int minAge=stlist[0].age,youngestIndex=0;
    for(i=1;i<5;i++)
    {
        if(stlist[i].age<minAge)
        {
            minAge=stlist[i].age;
            youngestIndex=i;
        }
    }
    printf("Youngest: %s %s\n",stlist[youngestIndex].fname,stlist[youngestIndex].lname);

    float maxCGPA=stlist[0].cgpa;
    for(i=1;i<5;i++)
    {
        if(stlist[i].cgpa>maxCGPA)
        {
            maxCGPA=stlist[i].cgpa;
        }
    }
    printf("Highest CGPA Students:\n");
    for(i=0;i<5;i++)
    {
        if(stlist[i].cgpa==maxCGPA)
        {
            printf("%s %s %d %d %.2f\n",stlist[i].fname,stlist[i].lname,stlist[i].ID,stlist[i].age,stlist[i].cgpa);
        }
    }
    printf("Students not named John:\n");
    for(i=0;i<5;i++)
    {
        if(strcmp(stlist[i].fname,"John")!=0)
        {
            printf("%s %s %d %d %.2f\n",stlist[i].fname,stlist[i].lname,stlist[i].ID,stlist[i].age,stlist[i].cgpa);
        }
    }
return 0;
}
