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

int i;

    for(i = 0; i < 5; i++)
    {
        printf("Enter ID, fname, lname, age, cgpa:\n");
        scanf("%d %s %s %d %f",
              &stlist[i].ID, stlist[i].fname, stlist[i].lname,
              &stlist[i].age, &stlist[i].cgpa);
    }

    int searchID;
    printf("Enter ID to search: ");
       scanf("%d", &searchID);
int found = 0;
    for(i = 0; i < 5; i++)
    {
        if(stlist[i].ID == searchID)
        {
            printf("Student found: %s %s, Age %d, CGPA %.2f\n",
                   stlist[i].fname, stlist[i].lname,
                   stlist[i].age, stlist[i].cgpa);
            found = 1;
        }
    }
    if(!found) printf("Invalid ID\n");

    int minAge = stlist[0].age, idx = 0;
    for(i = 1; i < 5; i++)
        if(stlist[i].age < minAge)
        {
            minAge = stlist[i].age;
            idx = i;
        }

    printf("Youngest student: %s %s\n",
           stlist[idx].fname, stlist[idx].lname);


float maxcg = stlist[0].cgpa;
     for(i = 1; i < 5; i++)
        if(stlist[i].cgpa > maxcg)
            maxcg = stlist[i].cgpa;

    printf("Students with highest CGPA:\n");
    for(i = 0; i < 5; i++)
        if(stlist[i].cgpa == maxcg)
            printf("%s %s (%.2f)\n", stlist[i].fname, stlist[i].lname, stlist[i].cgpa);

    printf("Students whose fname is not John:\n");
    for(i = 0; i < 5; i++)
        if(strcmp(stlist[i].fname, "John") != 0)
            printf("%s %s\n", stlist[i].fname, stlist[i].lname);

    return 0;
}
