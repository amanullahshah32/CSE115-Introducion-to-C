/* 14. struct student{ int ID; char fname[20]; char lname[20]; int age; float cgpa; }; Using
the structure student (declared above), enter the records of 5 students in an array of
structure named stlist[] and display
1)information of student whose ID is provided by user. If Invalid ID, then show an error
message,
2) the name of youngest student
3) detail information of student/students with highest cgpa
4) information of students whose first name (fname ) is not John */

#include <stdio.h>

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
    int i, searchID, found = 0;
    int minAge, maxAgeIndex, maxAgeCount = 0;
    float maxCgpa;

    for(i = 0; i < 5; i++)
    {
        printf("Enter ID, first name, last name, age, cgpa for student %d: ", i + 1);
        scanf("%d %s %s %d %f", &stlist[i].ID, stlist[i].fname, stlist[i].lname, &stlist[i].age, &stlist[i].cgpa);
    }

    printf("\nEnter ID to search: ");
    scanf("%d", &searchID);
    found = 0;
    for(i = 0; i < 5; i++)
    {
        if(stlist[i].ID == searchID)
        {
            printf("Student found: %d %s %s %d %.2f\n", stlist[i].ID, stlist[i].fname, stlist[i].lname, stlist[i].age, stlist[i].cgpa);
            found = 1;
            break;
        }
    }
    if(!found)
        printf("Error: Invalid ID\n");

    minAge = stlist[0].age;
    for(i = 1; i < 5; i++)
    {
        if(stlist[i].age < minAge)
            minAge = stlist[i].age;
    }
    printf("Youngest student(s):\n");
    for(i = 0; i < 5; i++)
    {
        if(stlist[i].age == minAge)
            printf("%s %s\n", stlist[i].fname, stlist[i].lname);
    }

    maxCgpa = stlist[0].cgpa;
    for(i = 1; i < 5; i++)
    {
        if(stlist[i].cgpa > maxCgpa)
            maxCgpa = stlist[i].cgpa;
    }
    printf("Student(s) with highest CGPA:\n");
    for(i = 0; i < 5; i++)
    {
        if(stlist[i].cgpa == maxCgpa)
            printf("%d %s %s %d %.2f\n", stlist[i].ID, stlist[i].fname, stlist[i].lname, stlist[i].age, stlist[i].cgpa);
    }

    printf("Students whose first name is not John:\n");
    for(i = 0; i < 5; i++)
    {
        if(stlist[i].fname[0] != 'J' || stlist[i].fname[1] != 'o' || stlist[i].fname[2] != 'h' || stlist[i].fname[3] != 'n' || stlist[i].fname[4] != '\0')
            printf("%d %s %s %d %.2f\n", stlist[i].ID, stlist[i].fname, stlist[i].lname, stlist[i].age, stlist[i].cgpa);
    }

    return 0;
}
