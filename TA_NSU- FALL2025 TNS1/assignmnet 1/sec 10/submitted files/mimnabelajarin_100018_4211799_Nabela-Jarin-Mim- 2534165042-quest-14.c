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
    printf("Enter info for 5 students:\n");
    for(int i=0;i<5;i++){
        printf("\nStudent %d:\n", i+1);
        printf("ID: ");
         scanf("%d",&stlist[i].ID);
        printf("First name: ");
         scanf("%s",stlist[i].fname);
        printf("Last name: ");
         scanf("%s",stlist[i].lname);
        printf("Age: ");
         scanf("%d", &stlist[i].age);
        printf("CGPA: ");
        scanf("%f", &stlist[i].cgpa);
    }
    //ans 1;
    int searchID, found =1;
    printf("\nEnter ID to search: ");
    scanf("%d",&searchID);

    for(int i=0; i<5; i++){
        if(stlist[i].ID == searchID){
            found = i; break;}
    }if(found ==-1)
        printf("Invalid ID!\n");
    else {
        printf("Student Info:\n");
        printf("ID: %d\n First name: %s \n Last name: %s \n Age: %d \n CGPA: %.2f\n", stlist[found].ID, stlist[found].fname,
               stlist[found].lname, stlist[found].age, stlist[found].cgpa);
    }
    //ans 2;
    int idx = 0;
    for(int i=1; i<5; i++)
        if(stlist[i].age < stlist[idx].age)
            idx = i;
    printf("\nYoungest student: %s %s\n", stlist[idx].fname, stlist[idx].lname);
    //ans 3;
    float maxCGPA = stlist[0].cgpa;
    for(int i=1;i<5;i++)
        if(stlist[i].cgpa>maxCGPA)
            maxCGPA=stlist[i].cgpa;
    printf("\nStudents with highest CGPA:\n");
    for(int i=0; i<5; i++)
        if(stlist[i].cgpa == maxCGPA)
            printf("%s %s %.2f\n", stlist[i].fname, stlist[i].lname, stlist[i].cgpa);
            //ans 4;
    printf("\nStudents whose first name is NOT John:\n");
    for(int i=0; i<5; i++)
        if(strcmp(stlist[i].fname, "John")!= 0)
        printf("%s %s\n", stlist[i].fname, stlist[i].lname);
    return 0;
}
