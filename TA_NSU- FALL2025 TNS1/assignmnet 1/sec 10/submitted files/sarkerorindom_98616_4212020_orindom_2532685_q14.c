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
    int i;


    printf("Enter records for 5 students:\n");
    for(i = 0; i < 5; i++) {
        printf("Student %d:\n", i+1);
        printf("  ID: ");
        scanf("%d", &stlist[i].ID);
        printf("  First Name: ");
        scanf("%s", stlist[i].fname);
        printf("  Last Name: ");
        scanf("%s", stlist[i].lname);
        printf("  Age: ");
        scanf("%d", &stlist[i].age);
        printf("  CGPA: ");
        scanf("%f", &stlist[i].cgpa);
        printf("\n");
    }


    int searchID, found = 0;
    printf("\n[1] Enter ID to search: ");
    scanf("%d", &searchID);
    for(i = 0; i < 5; i++) {
        if(stlist[i].ID == searchID) {
            printf("Found: %s %s, CGPA: %.2f\n", stlist[i].fname, stlist[i].lname, stlist[i].cgpa);
            found = 1;
        }
    }
    if(found == 0) printf("Error: Invalid ID\n");


    int minAge = stlist[0].age;
    int minIndex = 0;
    for(i = 1; i < 5; i++) {
        if(stlist[i].age < minAge) {
            minAge = stlist[i].age;
            minIndex = i;
        }
    }
    printf("\n[2] Youngest student: %s %s (Age: %d)\n", stlist[minIndex].fname, stlist[minIndex].lname, minAge);


    float maxCGPA = stlist[0].cgpa;
    printf("\n[3] Student(s) with highest CGPA:\n");
    for(i = 0; i < 5; i++) {
        if(stlist[i].cgpa > maxCGPA) maxCGPA = stlist[i].cgpa;
    }
    for(i = 0; i < 5; i++) {
        if(stlist[i].cgpa == maxCGPA) {
            printf("- %s %s (CGPA: %.2f)\n", stlist[i].fname, stlist[i].lname, stlist[i].cgpa);
        }
    }


    printf("\n[4] Students whose first name is NOT John:\n");
    for(i = 0; i < 5; i++) {
        if(strcmp(stlist[i].fname, "John") != 0) {
            printf("- %s %s\n", stlist[i].fname, stlist[i].lname);
        }

    }

    return 0;
}

