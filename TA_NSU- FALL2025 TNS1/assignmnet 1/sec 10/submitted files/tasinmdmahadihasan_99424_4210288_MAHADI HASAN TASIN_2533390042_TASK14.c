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
    int i, id, found=0;

    printf("Enter records of 5 students:\n");
    for(i=0; i<5; i++)
    {
        printf("\nStudent %d:\n", i+1);
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

    printf("\nEnter an ID to search: ");
    scanf("%d", &id);
    for(i = 0; i < 5; i++)
    {
        if(stlist[i].ID==id)
        {
            found=1;
            printf("\nStudent Found:\n");
            printf("ID: %d\n", stlist[i].ID);
            printf("Name: %s %s\n", stlist[i].fname, stlist[i].lname);
            printf("Age: %d\n", stlist[i].age);
            printf("CGPA: %.2f\n", stlist[i].cgpa);
            break;
        }
    }

    if(!found)
    {
        printf("\nInvalid ID! No student found.\n");
    }

    int youngestIndex=0;
    for(i=1; i<5; i++)
    {
        if(stlist[i].age<stlist[youngestIndex].age)
        {
            youngestIndex=i;
        }
    }

    printf("\nYoungest Student: %s %s (Age: %d)\n",
            stlist[youngestIndex].fname,
            stlist[youngestIndex].lname,
            stlist[youngestIndex].age);

    float maxcgpa=stlist[0].cgpa;
    for(i=1; i<5; i++)
    {
        if(stlist[i].cgpa>maxcgpa)
            maxcgpa=stlist[i].cgpa;
    }

    printf("\nStudent(s) with Highest CGPA (%.2f):\n", maxcgpa);
    for(i=0; i<5; i++)
    {
        if(stlist[i].cgpa==maxcgpa)
        {
            printf("\nID: %d\n", stlist[i].ID);
            printf("Name: %s %s\n", stlist[i].fname, stlist[i].lname);
            printf("Age: %d\n", stlist[i].age);
            printf("CGPA: %.2f\n", stlist[i].cgpa);
        }
    }

    printf("\nStudents whose first name is NOT John:\n");
    for(i = 0; i < 5; i++)
        {
        int isJohn = 1;
        char target[] = "John";
        int j = 0;

        while(stlist[i].fname[j]!='\0'&&target[j]!='\0')
        {
            if(stlist[i].fname[j]!=target[j])
            {
                isJohn=0;
                break;
            }
            j++;
        }

        if(stlist[i].fname[j]!=target[j])
            isJohn = 0;

        if(!isJohn)
        {
            printf("\nID: %d\n", stlist[i].ID);
            printf("Name: %s %s\n", stlist[i].fname, stlist[i].lname);
            printf("Age: %d\n", stlist[i].age);
            printf("CGPA: %.2f\n", stlist[i].cgpa);
        }
    }
    return 0;
}
