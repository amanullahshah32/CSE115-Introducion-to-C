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

    // Populate Data
    for(i=0; i<5; i++) {
        printf("Enter ID, Fname, Lname, Age, CGPA for student %d: ", i+1);
        scanf("%d %s %s %d %f", &stlist[i].ID, stlist[i].fname, stlist[i].lname, &stlist[i].age, &stlist[i].cgpa);
    }

    // 1. Info by ID
    int searchID;
    printf("\nEnter ID to search: ");
    scanf("%d", &searchID);
    int found = 0;
    for(i=0; i<5; i++) {
        if(stlist[i].ID == searchID) {
            printf("Found\n %s %s, CGPA: %.2f\n", stlist[i].fname, stlist[i].lname, stlist[i].cgpa);
            found = 1;
        }
    }
    if(!found) printf("Error: Invalid ID\n");

    // 2. Youngest Student
    int minAge = stlist[0].age, idx = 0;
    for(i=1; i<5; i++) {
        if(stlist[i].age < minAge) {
            minAge = stlist[i].age;
            idx = i;
        }
    }
    printf("Youngest Student: %s\n", stlist[idx].fname);

    // 3. Highest CGPA
    float maxCGPA = stlist[0].cgpa;
    for(i=1; i<5; i++) {
        if(stlist[i].cgpa > maxCGPA) maxCGPA = stlist[i].cgpa;
    }
    printf("Students with Highest CGPA:\n");
    for(i=0; i<5; i++) {
        if(stlist[i].cgpa == maxCGPA) printf("%s %s\n", stlist[i].fname, stlist[i].lname);
    }

    // 4. Not named John
    printf("Students not named John:\n");
    for(i=0; i<5; i++) {
        if(strcmp(stlist[i].fname, "John") != 0) {
            printf("%s %s\n", stlist[i].fname, stlist[i].lname);
        }
    }
    return 0;
}
