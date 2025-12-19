
#include <stdio.h>
#include <stdlib.h>

int main()
{


    struct student {
    int ID;
    char fname[20];
    char lname[20];
    int age;
    float cgpa;
};

int main() {
    struct student stlist[5];
    int i, searchID;
    float maxCgpa;
    int youngestAge;


    for (i = 0; i < 5; i++) {
        printf("Enter ID, first name, last name, age, CGPA for student %d: ", i+1);
        scanf("%d %s %s %d %f", &stlist[i].ID, stlist[i].fname, stlist[i].lname, &stlist[i].age, &stlist[i].cgpa);
    }


    printf("Enter ID to search: ");
    scanf("%d", &searchID);
    int found = 0;
    for (i = 0; i < 5; i++) {
        if (stlist[i].ID == searchID) {
            printf("Student: %d %s %s %d %.2f\n", stlist[i].ID, stlist[i].fname, stlist[i].lname, stlist[i].age, stlist[i].cgpa);
            found = 1;
            break;
        }
    }
    if (!found) printf("Invalid ID\n");


    youngestAge = stlist[0].age;
    int youngestIndex = 0;
    for (i = 1; i < 5; i++) {
        if (stlist[i].age < youngestAge) {
            youngestAge = stlist[i].age;
            youngestIndex = i;
        }
    }
    printf("Youngest student: %s %s\n", stlist[youngestIndex].fname, stlist[youngestIndex].lname);


    maxCgpa = stlist[0].cgpa;
    for (i = 1; i < 5; i++) {
        if (stlist[i].cgpa > maxCgpa) maxCgpa = stlist[i].cgpa;
    }
    printf("Students with highest CGPA:\n");
    for (i = 0; i < 5; i++) {
        if (stlist[i].cgpa == maxCgpa)
            printf("%d %s %s %.2f\n", stlist[i].ID, stlist[i].fname, stlist[i].lname, stlist[i].cgpa);
    }


    printf("Students whose first name is not John:\n");
    for (i = 0; i < 5; i++) {
        if (strcmp(stlist[i].fname, "John") != 0)
            printf("%d %s %s\n", stlist[i].ID, stlist[i].fname, stlist[i].lname);
    }

    return 0;
}






