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
    int i, searchID, found;

    for (i = 0; i < 5; i++)
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &stlist[i].ID);
        printf("First name: ");
        scanf("%s", stlist[i].fname);
        printf("Last name: ");
        scanf("%s", stlist[i].lname);
        printf("Age: ");
        scanf("%d", &stlist[i].age);
        printf("CGPA: ");
        scanf("%f", &stlist[i].cgpa);
        printf("\n");
    }

    printf("Enter ID to search: ");
    scanf("%d", &searchID);

    found = 0;
    for (i = 0; i < 5; i++)
    {
        if (stlist[i].ID == searchID)
        {
            printf("\nStudent found:\n");
            printf("ID: %d, Name: %s %s, Age: %d, CGPA: %.2f\n",
                   stlist[i].ID, stlist[i].fname, stlist[i].lname,
                   stlist[i].age, stlist[i].cgpa);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Error: Invalid ID\n");
    }

    int minAge = stlist[0].age;
    int youngestIndex = 0;
    for (i = 1; i < 5; i++)
    {
        if (stlist[i].age < minAge)
        {
            minAge = stlist[i].age;
            youngestIndex = i;
        }
    }
    printf("\nYoungest student: %s %s\n", stlist[youngestIndex].fname, stlist[youngestIndex].lname);

    float maxCGPA = stlist[0].cgpa;
    for (i = 1; i < 5; i++)
    {
        if (stlist[i].cgpa > maxCGPA)
        {
            maxCGPA = stlist[i].cgpa;
        }
    }
    printf("\nStudent(s) with highest CGPA:\n");
    for (i = 0; i < 5; i++)
    {
        if (stlist[i].cgpa == maxCGPA)
        {
            printf("ID: %d, Name: %s %s, Age: %d, CGPA: %.2f\n",
                   stlist[i].ID, stlist[i].fname, stlist[i].lname,
                   stlist[i].age, stlist[i].cgpa);
        }
    }

    printf("\nStudents whose first name is not John:\n");
    for (i = 0; i < 5; i++)
    {
        if (!(stlist[i].fname[0]=='J' && stlist[i].fname[1]=='o' && stlist[i].fname[2]=='h' && stlist[i].fname[3]=='n' && stlist[i].fname[4]=='\0'))
        {
            printf("ID: %d, Name: %s %s, Age: %d, CGPA: %.2f\n",
                   stlist[i].ID, stlist[i].fname, stlist[i].lname,
                   stlist[i].age, stlist[i].cgpa);
        }
    }

    return 0;
}

