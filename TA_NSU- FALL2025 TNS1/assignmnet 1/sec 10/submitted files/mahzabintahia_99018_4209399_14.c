#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char fname[20];
    char lname[20];
    int age;
    float cgpa;
};
int main()
{
    int i;
    struct student stlist[5];
    for(i=0; i<5; i++)
    {
        printf("Enter id: ");
        scanf("%d", &stlist[i].id);
        printf("\nEnter first name: ");
        scanf("%s", stlist[i].fname);
        printf("\nEnter last name: ");
        scanf("%s", stlist[i].lname);
        printf("\nEnter age: ");
        scanf("%d", &stlist[i].age);
        printf("\nEnter cgpa: ");
        scanf("%f", &stlist[i].cgpa);
        printf("\n\n");
    }



    printf("\n\nEnter id to find student: ");
    int searchid, flag=0;
    scanf("%d",&searchid);
    for(i=0; i<5; i++)
    {
        if(stlist[i].id==searchid)
        {
            printf("Student information: \nId: %d \nFname: %s \nLname: %s \nAge: %d \nCGPA: %f", stlist[i].id, stlist[i].fname, stlist[i].lname, stlist[i].age, stlist[i].cgpa);
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("Error! invalid id.");




    int minAge=stlist[0].age, min=0;
    for(i=1; i<5; i++)
    {
        if(stlist[i].age<minAge)
        {
            minAge=stlist[i].age;
            min=i;
        }
    }
    printf("\n\nYoungest: %s %s\n", stlist[min].fname, stlist[min].lname);




    float maxCgpa=stlist[0].cgpa;
    for(i=1; i<5; i++)
    {
        if(stlist[i].cgpa>maxCgpa)
            maxCgpa=stlist[i].cgpa;
    }
    printf("\n\nHighest CGPA students:\n");
    for(i=0;i<5;i++)
    {
        if(stlist[i].cgpa==maxCgpa)
        printf("%d %s %s %d %.2f\n", stlist[i].id, stlist[i].fname, stlist[i].lname, stlist[i].age, stlist[i].cgpa);
    }



    printf("\n\nStudents not named John:\n");
    for(i=0;i<5;i++)
    {
        if(strcmp(stlist[i].fname,"John")!=0)
        printf("%d %s %s %d %.2f\n", stlist[i].id, stlist[i].fname, stlist[i].lname, stlist[i].age, stlist[i].cgpa);
    }

    return 0;
}
