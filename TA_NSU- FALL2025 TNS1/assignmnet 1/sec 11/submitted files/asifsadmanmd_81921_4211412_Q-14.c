#include <stdio.h>
#include <stdlib.h>

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
    struct student s[5];

    printf("Enter records of 5 students: \n");

    for(int i = 0; i < 5; i++)
    {
        printf("\nStudent %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &s[i].ID);
        printf("First name: ");
        scanf("%s", s[i].fname);
        printf("Last name: ");
        scanf("%s", s[i].lname);
        printf("Age: ");
        scanf("%d", &s[i].age);
        printf("CGPA: ");
        scanf("%f", &s[i].cgpa);
    }

    int searchID;
    printf("\nEnter ID to search: ");
    scanf("%d", &searchID);

    int found = 0;
    for(int i = 0; i < 5; i++)
    {
        if(s[i].ID == searchID)
        {
            printf("Student found: %s %s, Age %d, CGPA %.2f\n",
                   s[i].fname, s[i].lname, s[i].age, s[i].cgpa);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Invalid ID!\n");
    }

    int minAge = s[0].age;
    int idx = 0;

    for(int i = 1; i < 5; i++)
    {
        if(s[i].age < minAge)
        {
            minAge = s[i].age;
            idx = i;
        }
    }
    printf("\nYoungest student: %s %s\n", s[idx].fname, s[idx].lname);


    float maxCG = s[0].cgpa;

    for(int i = 1; i < 5; i++)
    {
        if(s[i].cgpa > maxCG)
        {
            maxCG = s[i].cgpa;
        }
    }

    printf("\nStudent(s) with highest CGPA:\n");
    for(int i = 0; i < 5; i++)
    {
        if(s[i].cgpa == maxCG)
        {
            printf("%s %s (ID: %d) (AGE: %d)\n", s[i].fname, s[i].lname, s[i].ID, s[i].age);
        }
    }

    printf("\nInformation of student whose first name is not john:\n");
    int count = 0;
    for(int i = 0; i < 5; i++)
    {
       if(s[i].fname != 'john')
       {
           printf("%s %s (ID: %d) (AGE: %d) (CGPA: %.2f)\n", s[i].fname, s[i].lname, s[i].ID, s[i].age, s[i].cgpa);
       }
    }

    return 0;
}
