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
    struct student stlist[5];
    int i,searchID;

    for(i =0; i<5; i++)
    {
        scanf("%d %s %s %d %f", &stlist[i].ID, &stlist[i].fname, &stlist[i].lname, &stlist[i].age, &stlist[i].cgpa);
    }
    scanf("%d", &searchID);
    for(i =0; i<5; i++)
    {
        if(stlist[i].ID == searchID)
        {
        printf("%d %s %s %d %f\n", stlist[i].ID, stlist[i].fname, stlist[i].lname, stlist[i].age, stlist[i].cgpa);
        break;
        }
    }
    if(i==5)
    {
        printf("Invalid ID\n");
    }
    int y=0;
    for(i =1; i<5; i++)
    {
        if(stlist[i].age < stlist[y].age)
        {
            y=i;
        }
    }
    printf("Youngest student: %s %s\n", stlist[y].fname, stlist[y].lname);
    float max = stlist[0].cgpa;
    for(i=0; i<5; i++)
    {
        if(stlist[i].cgpa>max)
        {
            max=stlist[i].cgpa;
        }
    }
    for(i=0; i<5; i++)
    {
        if(stlist[i].cgpa==max)
        {
            printf("Top CGPA: %s %s %.2f\n", stlist[i].fname, stlist[i].lname, stlist[i].cgpa);
        }
    }
    for(i=0; i<5; i++)
    {
        if(strcmp(stlist[i].fname, "John")!=0)
        {
            printf("Not John: %s %s\n", stlist[i].fname, stlist[i].lname);
        }
    }
    return 0;
}
