#include <stdio.h>

struct student {
    int ID;
    char fname[20];
    char lname[20];
    int age;
    float cgpa;
};

int main()
{
    struct student stlist[5];
    int i, id, found = 0;

    printf("Enter information of 5 students:\n");
    for (i = 0; i < 5; i++)
    {
        printf("\nStudent %d:\n", i+1);
        printf("ID: "); scanf("%d", &stlist[i].ID);
        printf("First name: "); scanf("%s", stlist[i].fname);
        printf("Last name: "); scanf("%s", stlist[i].lname);
        printf("Age: "); scanf("%d", &stlist[i].age);
        printf("CGPA: "); scanf("%f", &stlist[i].cgpa);
    }

    // 1) Find student by ID
    printf("\nEnter ID to search: ");
    scanf("%d", &id);

    for (i = 0; i < 5; i++)
    {
        if (stlist[i].ID == id)
        {
            found = 1;
            printf("\nStudent found:\n");
            printf("%d %s %s %d %.2f\n", stlist[i].ID, stlist[i].fname, stlist[i].lname,
                   stlist[i].age, stlist[i].cgpa);
            break;
        }
    }
    if (!found)
        printf("Invalid ID\n");

    // 2) Youngest student
    int minAgeIndex = 0;
    for (i = 1; i < 5; i++)
        if (stlist[i].age < stlist[minAgeIndex].age)
            minAgeIndex = i;

    printf("\nYoungest student: %s %s (Age: %d)\n",
           stlist[minAgeIndex].fname, stlist[minAgeIndex].lname,
           stlist[minAgeIndex].age);

    // 3) Student(s) with highest CGPA
    float max = stlist[0].cgpa;
    for (i = 1; i < 5; i++)
        if (stlist[i].cgpa > max)
            max = stlist[i].cgpa;

    printf("\nStudents with highest CGPA (%.2f):\n", max);
    for (i = 0; i < 5; i++)
        if (stlist[i].cgpa == max)
            printf("%d %s %s %.2f\n", stlist[i].ID, stlist[i].fname, stlist[i].lname, stlist[i].cgpa);

    // 4) Students whose first name is NOT John
    printf("\nStudents whose first name is not John:\n");
    for (i = 0; i < 5; i++)
    {
        int j = 0, isJohn = 1;
        char *fn = stlist[i].fname;

        char nameJohn[] = "John";
        while (fn[j] != '\0' || nameJohn[j] != '\0')
        {
            if (fn[j] != nameJohn[j])
            {
                isJohn = 0;
                break;
            }
            j++;
        }

        if (!isJohn)
            printf("%s %s\n", stlist[i].fname, stlist[i].lname);
    }

    return 0;
}
