#include <stdio.h>
#include <string.h>
struct student
{
    int ID;
    char fname[20];
    char lname[20];
    int age;
    float cgpa;
}stlist[5];//5 elements, but indexing will go from 0 to 4
int main()
{
    int i,id;
    for(i=0;i<5;i++)
    {
        printf("Enter ID: "); scanf("%d",&stlist[i].ID);
        printf("Enter First name: "); scanf(" %s",&stlist[i].fname);
        printf("Enter Last name: "); scanf(" %s",&stlist[i].lname);;
        printf("Enter age: "); scanf("%d",&stlist[i].age);
        printf("Enter CGPA: "); scanf("%f",&stlist[i].cgpa);
        printf("\n");
    }


    printf("\nEnter the ID of the student whose information you want to see: ");//ID~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    scanf("%d",&id);
    int countflag=0;
    for(i=0;i<5;i++)
    {
        if(id==stlist[i].ID)
            {
                printf("ID: %d\n",stlist[i].ID);
                printf("First name: %s\n",stlist[i].fname);
                printf("Last name: %s\n",stlist[i].lname);
                printf("Age: %d\n",stlist[i].age);
                printf("CGPA: %.2f\n",stlist[i].cgpa);
                printf("\n");
                countflag++;
            }
    }
    if(!countflag)
                printf("Invalid ID");


    int young=stlist[0].age;//YOUNGEST STUDENT NAME~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    int reserveindex=0;//need to initialize as if youngest is in index 0, then if condition logic will be false and reverseindex wouldn't be 0
    for(i=0;i<5;i++)
    {
        if(stlist[i].age<young)
        {
            young=stlist[i].age;
            reserveindex=i;
        }
    }
    printf("\n\nThe name of youngest student is %s %s\n\n",stlist[reserveindex].fname,stlist[reserveindex].lname);


    float highestcgpa=stlist[0].cgpa;//HIGHEST CGPA~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    for(i=0;i<5;i++)
        if(stlist[i].cgpa>highestcgpa)
            highestcgpa=stlist[i].cgpa;//FINDS OUT WHAT THE HIGHEST CGPA IS
    int reserve2[5]={0},j=0;
    for(i=0;i<5;i++)//FINDS OUT THE INDEXES AT WHICH HIGHEST CGPA OCCURS
    {
        if(stlist[i].cgpa==highestcgpa)
            {
                reserve2[j]=i;
                j++;
            }
    }
    printf("Students with the highest CGPA:\n\n");
    for(i=0; i<j; i++)
    {
        int idx=reserve2[i];
        printf("ID: %d\n",stlist[idx].ID);
        printf("First name: %s\n",stlist[idx].fname);
        printf("Last name: %s\n",stlist[idx].lname);
        printf("Age: %d\n",stlist[idx].age);
        printf("CGPA: %.2f\n",stlist[idx].cgpa);
        printf("\n");
    }

    printf("\nInformation of students whose name is not John:\n\n\n");

    for(i=0;i<5;i++)// information of students whose first name (fname ) is not John~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    {
        if(strcmp(stlist[i].fname,"John"))//returns 0, when strings are equal, so won't print information for those
        {
            printf("ID: %d\n",stlist[i].ID);
            printf("First name: %s\n",stlist[i].fname);
            printf("Last name: %s\n",stlist[i].lname);
            printf("Age: %d\n",stlist[i].age);
            printf("CGPA: %.2f\n",stlist[i].cgpa);
            printf("\n");
        }
    }

    return 0;
}
