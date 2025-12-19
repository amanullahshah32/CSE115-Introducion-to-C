#include<stdio.h>
#include<string.h>

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
    struct student stlist[5] = {
    {101, "John",   "Smith",   21, 3.20},
    {205, "Ali",    "Khan",    20, 3.75},
    {309, "Sara",   "Malik",   19, 3.75},
    {412, "John",   "Reed",    22, 3.10},
    {523, "Fatima", "Zahir",   20, 3.90}
};
    int id, young, highgpa;
    int enteredid, foundindex = -1, foundgpa = -1, foundage;

    printf("Enter student ID you want to search for: ");
    scanf("%d", &enteredid);
    for(int i = 0; i < 5; i++)
    {
        if(enteredid == stlist[i].ID)
        {
            foundindex = i;
            break;
        }
    }
    if(foundindex == -1)
    {
        printf("\nInvalid ID");
    }
    else
        printf("\nID: %d", stlist[foundindex].ID);
        printf("\nFirst Name: %s", stlist[foundindex].fname);
        printf("\nSecond Name: %s", stlist[foundindex].lname);
        printf("\nAge: %d", stlist[foundindex].age);
        printf("\nCpga: %f\n", stlist[foundindex].cgpa);

    young = stlist[0].age;
    for(int i = 0; i < 5; i++)
    {
        if(stlist[i].age < young)
        {
            foundage = i;
            young = stlist[i].age;
        }
    }
    printf("\nThe name of the youngest student is %s %s\n", stlist[foundage].fname, stlist[foundage].lname);

    highgpa = stlist[0].cgpa;
    for(int i = 0; i < 5; i++)
    {
        if(stlist[i].cgpa > highgpa)
        {
            foundgpa = i;
            highgpa = stlist[i].cgpa;
        }
    }
    printf("\nStudent with the highest cgpa info:");
    printf("\nID: %d", stlist[foundgpa].ID);
    printf("\nFirst Name: %s", stlist[foundgpa].fname);
    printf("\nSecond Name: %s", stlist[foundgpa].lname);
    printf("\nAge: %d", stlist[foundgpa].age);
    printf("\nCpga: %f\n", stlist[foundgpa].cgpa);

    printf("\nStudents whose first name is NOT John:\n\n");

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(stlist[i].fname, "John") != 0)
        {
            printf("ID: %d\n", stlist[i].ID);
            printf("First Name: %s\n", stlist[i].fname);
            printf("Last  Name: %s\n", stlist[i].lname);
            printf("Age: %d\n", stlist[i].age);
            printf("CGPA: %.2f\n\n", stlist[i].cgpa);
        }
    }
}
