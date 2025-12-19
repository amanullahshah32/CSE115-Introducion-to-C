#include <stdio.h>

struct student
{
    int ID;
    char fname[20];
    char lname[20];
    int age;
    float cgpa;
};

int main() {
    struct student stlist[5];
    int i;
    for(i=0; i<5; i++)
    {
        printf("\nEnter info for student %d:\n", i+1);
        printf("ID: "); scanf("%d", &stlist[i].ID);
        printf("First Name: "); scanf("%s", stlist[i].fname);
        printf("Last Name: "); scanf("%s", stlist[i].lname);
        printf("Age: "); scanf("%d", &stlist[i].age);
        printf("CGPA: "); scanf("%f", &stlist[i].cgpa);
    }
    int id;
    printf("\nEnter ID to search: ");
    scanf("%d", &id);
    int found = 0;
    for(i=0; i<5; i++)
    {
        if(stlist[i].ID == id)
        {
            found = 1;
            printf("ID: %d\nName: %s %s\nAge: %d\nCGPA: %.2f\n",
            stlist[i].ID, stlist[i].fname,
            stlist[i].lname, stlist[i].age, stlist[i].cgpa);
        }
    }
    if(found==0)
        printf("Invalid ID!\n");
    int minAge = stlist[0].age, youngest = 0;
    for(i=1; i<5; i++)
        if(stlist[i].age < minAge)
        {
            minAge = stlist[i].age;
            youngest = i;
        }
    printf("\nYoungest student: %s %s\n",stlist[youngest].fname, stlist[youngest].lname);
     float maxcg = stlist[0].cgpa;
    for(i=1; i<5; i++)
        if(stlist[i].cgpa > maxcg)
            maxcg = stlist[i].cgpa;

    printf("\nHighest CGPA students:\n");
    for(i=0; i<5; i++)
    {
        if(stlist[i].cgpa == maxcg)
            printf("%s %s %d CGPA %.2f\n", stlist[i].fname, stlist[i].lname,stlist[i].age, stlist[i].cgpa);
    }
    printf("\nStudents whose first name is not John:\n");
    for(i=0; i<5; i++)
    {
        if(!(stlist[i].fname[0]=='J' && stlist[i].fname[1]=='o' && stlist[i].fname[2]=='h' && stlist[i].fname[3]=='n' && stlist[i].fname[4]=='\0'))
            printf("%s %s\n", stlist[i].fname, stlist[i].lname);
    }
    return 0;
}
