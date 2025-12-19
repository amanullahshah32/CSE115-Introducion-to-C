#include <stdio.h>
#include <string.h>

struct student{
    int ID;
    char fname[20];
    char lname[20];
    int age;
    float cgpa;
};

int main(){
    struct student stlist[5];

    for(int i=0;i<5;i++){
        scanf("%d %s %s %d %f",
              &stlist[i].ID,
              stlist[i].fname,
              stlist[i].lname,
              &stlist[i].age,
              &stlist[i].cgpa);
    }

    int id;
    scanf("%d",&id);

    int found=0;
    for(int i=0;i<5;i++){
        if(stlist[i].ID==id){
            printf("Student found: %s %s\n",
                   stlist[i].fname, stlist[i].lname);
            found=1;
        }
    }
    if(!found) printf("Invalid ID!\n");

    int minAge = stlist[0].age, pos = 0;
    for(int i=1;i<5;i++)
        if(stlist[i].age < minAge){ minAge = stlist[i].age; pos=i; }

    printf("Youngest student: %s\n", stlist[pos].fname);

    float maxCg = stlist[0].cgpa;
    for(int i=1;i<5;i++)
        if(stlist[i].cgpa > maxCg) maxCg = stlist[i].cgpa;

    printf("Highest CGPA students:\n");
    for(int i=0;i<5;i++)
        if(stlist[i].cgpa == maxCg)
            printf("%s %s\n", stlist[i].fname, stlist[i].lname);

    printf("Students whose fname != John:\n");
    for(int i=0;i<5;i++)
        if(strcmp(stlist[i].fname,"John")!=0)
            printf("%s %s\n",stlist[i].fname,stlist[i].lname);
}
