
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

    printf("Enter information of 5 students:\n");
    for(i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
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
    }


    int searchID, found = -1;
    printf("\nEnter an ID to search: ");
    scanf("%d", &searchID);

    for(i = 0; i < 5; i++)
        {
        if(stlist[i].ID == searchID)
        {
            found = i;
            break;
        }
    }

    if(found == -1)
        {
        printf("\nInvalid ID! No student found.\n");
       }
    else
     {
        printf("\n   Student Found   \n");
        printf("ID: %d\n", stlist[found].ID);
        printf("Name: %s %s\n", stlist[found].fname, stlist[found].lname);
        printf("Age: %d\n", stlist[found].age);
        printf("CGPA: %.2f\n", stlist[found].cgpa);
    }


    int minAge = stlist[0].age, pos = 0;
    for(i = 1; i < 5; i++)
        {
        if(stlist[i].age < minAge)
         {
            minAge = stlist[i].age;
            pos = i;
        }
    }

    printf("\n  Youngest Student   \n");
    printf("Name: %s %s\n", stlist[pos].fname, stlist[pos].lname);
    printf("Age: %d\n", stlist[pos].age);


    float maxCGPA = stlist[0].cgpa;
    for(i = 1; i < 5; i++) {
        if(stlist[i].cgpa > maxCGPA)
            maxCGPA = stlist[i].cgpa;
    }

    printf("\n   Student(s) Highest CGPA (%.2f)   \n", maxCGPA);
    for(i = 0; i < 5; i++) {
        if(stlist[i].cgpa == maxCGPA) {
            printf("ID: %d | Name: %s %s | Age: %d | CGPA: %.2f\n",
                   stlist[i].ID, stlist[i].fname, stlist[i].lname,
                   stlist[i].age, stlist[i].cgpa);
        }
    }


    printf("\n   Students first name is NOT 'John'   \n");
    for(i = 0; i < 5; i++)
        {
        if(strcmp(stlist[i].fname, "John") != 0)
        {
            printf("ID: %d | Name: %s %s | Age: %d | CGPA: %.2f\n",
                   stlist[i].ID, stlist[i].fname, stlist[i].lname,
                   stlist[i].age, stlist[i].cgpa);
        }
    }

    return 0;
}
