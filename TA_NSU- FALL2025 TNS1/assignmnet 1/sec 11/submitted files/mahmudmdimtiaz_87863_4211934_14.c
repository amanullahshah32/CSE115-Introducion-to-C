// Property of Imtiaz 2512169

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
    int studentID;
    struct student stlist[5]=
    {
        {1,"Imtiaz","Mahmud",20,3.0},
        {2,"Jiyadur","Rahman",21,3.7},
        {3,"Rizuan","Raeen",23,2.7},
        {4,"John","McAfee",69,4.0},
        {5,"Ching","Chong",12,3.9}
    };
    
    // 1. Search student by ID
    printf("Enter student ID: ");
    scanf("%d", &studentID);
    for(int i=0; i<5; i++)
    {
        if(stlist[i].ID == studentID) 
        {
            printf("ID: %d, Name: %s %s, Age: %d, CGPA: %.2f\n", stlist[i].ID, stlist[i].fname, stlist[i].lname, stlist[i].age, stlist[i].cgpa);
            break;
        }
    }
    
    
    // 2. Name of the youngest student
    printf("\nYoungest student: ");
    int youngestAge = stlist[0].age;
    for(int i=1; i<5; i++)
    {
        if(stlist[i].age < youngestAge)
        {
            youngestAge = stlist[i].age;
        }
    }
    for (int i=0; i<5; i++) 
    {
        if (stlist[i].age==youngestAge)
        {
            printf("%s %s", stlist[i].fname, stlist[i].lname);
        }
    }
    
    // 3. Student with highest CGPA
    printf("\n\nHighest CGPA student: ");
    float highestCGPA = stlist[0].cgpa;
    for(int i=1; i<5; i++)
    {
        if(stlist[i].cgpa > highestCGPA)
        {
            highestCGPA = stlist[i].cgpa;
        }
    }
    for (int i=0; i<5; i++) 
    {
        if (stlist[i].cgpa==highestCGPA)
        {
            printf("%s %s", stlist[i].fname, stlist[i].lname);
        }
    }
    
    // 4). Students whose first name is not John
    printf("\n\nStudents whose first name is not John: ");
    for(int i=0; i<5; i++)
    {
        if(strcmp(stlist[i].fname,"John")!= 0)
        {
            printf("\n%s %s", stlist[i].fname, stlist[i].lname);
        }
    }
    
    return 0;
}

// Property of Imtiaz 2512169
