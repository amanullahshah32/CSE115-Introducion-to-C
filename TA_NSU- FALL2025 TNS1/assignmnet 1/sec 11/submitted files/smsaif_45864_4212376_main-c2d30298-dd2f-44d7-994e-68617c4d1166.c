#include <stdio.h>
#include <string.h>

struct student {
    int ID;
    char fname[20];
    char lname[20];
    int age;
    float cgpa;
};

int main() {
    struct student stlist[5];
    for(int i=0; i<5; i++) {
        printf("Enter ID, fname, lname, age, cgpa for student %d:\n", i+1);
        scanf("%d %s %s %d %f", &stlist[i].ID, stlist[i].fname, stlist[i].lname, &stlist[i].age, &stlist[i].cgpa);
    }

    int searchID;
    printf("Enter ID to search: ");
    scanf("%d", &searchID);

    int found=0;
    for(int i=0; i<5; i++) {
        if(stlist[i].ID == searchID) {
            printf("Student found: %s %s, Age %d, CGPA %.2f\n", stlist[i].fname, stlist[i].lname, stlist[i].age, stlist[i].cgpa);
            found=1;
        }
    }
    if(!found) printf("Invalid ID!\n");

    // youngest student
    int minAge = stlist[0].age, idx=0;
    for(int i=1; i<5; i++) if(stlist[i].age < minAge) { minAge=stlist[i].age; idx=i; }
    printf("Youngest student: %s %s\n", stlist[idx].fname, stlist[idx].lname);

    // highest cgpa
    float maxCgpa = stlist[0].cgpa;
    for(int i=1; i<5; i++) if(stlist[i].cgpa > maxCgpa) maxCgpa = stlist[i].cgpa;
    printf("Students with highest CGPA:\n");
    for(int i=0; i<5; i++) if(stlist[i].cgpa == maxCgpa)
        printf("%s %s, CGPA %.2f\n", stlist[i].fname, stlist[i].lname, stlist[i].cgpa);

    // fname not John
    printf("Students whose fname is not John:\n");
    for(int i=0; i<5; i++) if(strcmp(stlist[i].fname,"John")!=0)
        printf("%s %s\n", stlist[i].fname, stlist[i].lname);

    return 0;
}

