#include <stdio.h>
#include<string.h>
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
    int i,searchID,found;
 for(i=0;i<5;i++)
   {
    printf("\nEnter details for student %d:\n",i+1);
  printf("ID: ");
  scanf("%d",&stlist[i].ID);
  printf("First Name: ");
  scanf("%s",stlist[i].fname);
  printf("Last Name: ");
  scanf("%s",stlist[i].lname);
   printf("Age: ");
   scanf("%d",&stlist[i].age);
   printf("CGPA: ");
  scanf("%f",&stlist[i].cgpa);
    }
    printf("\nEnter ID to search: ");
    scanf("%d",&searchID);
    found =0;
    for(i=0;i<5;i++)
    {
      if(stlist[i].ID == searchID)
      {
        found = 1;
        printf("\nStudent found:\n");
        printf("ID=%d\nFirst Name=%s\nLast Name=%s\nAge=%d\nCGPA=%.2f\n",stlist[i].ID, stlist[i].fname, stlist[i].lname, stlist[i].age, stlist[i].cgpa);
        break;
        }
    }
    if(!found)
     {
        printf("Invalid ID! Student not found.\n");
    }
    int minAge=stlist[0].age;
    for(i=1;i<5;i++)
    {
      if(stlist[i].age < minAge)
       {
            minAge = stlist[i].age;
        }
    }
    printf("\nYoungest student:\n");
    for(i=0;i<5;i++)
    {
      if(stlist[i].age==minAge)
       {
          printf("%s %s \n(Age: %d)\n", stlist[i].fname, stlist[i].lname, stlist[i].age);
        }
    }
    float maxCGPA=stlist[0].cgpa;
    for(i=1;i<5;i++)
    {
      if(stlist[i].cgpa>maxCGPA)
       {
        maxCGPA=stlist[i].cgpa;
        }
    }
    printf("\nStudent with highest CGPA:\n");
    for(i=0;i<5;i++)
    {
        if(stlist[i].cgpa == maxCGPA) {
        printf("ID=%d\nName=%s %s\nAge=%d\nCGPA=%.2f\n",stlist[i].ID, stlist[i].fname, stlist[i].lname, stlist[i].age, stlist[i].cgpa);
        }
    }
    printf("\nStudents whose first name is not John:\n");
    for(i=0;i<5;i++)
    {
      if(strcmp(stlist[i].fname,"John")!=0)
      {
        printf("ID=%d\nName=%s %s\nAge=%d\nCGPA=%.2f\n",stlist[i].ID, stlist[i].fname, stlist[i].lname, stlist[i].age, stlist[i].cgpa);
        }
    }

    return 0;
}
