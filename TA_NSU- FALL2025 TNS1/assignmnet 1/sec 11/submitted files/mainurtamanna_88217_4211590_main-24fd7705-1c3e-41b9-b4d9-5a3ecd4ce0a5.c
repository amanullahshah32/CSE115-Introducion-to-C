#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

struct student {
    int ID;
    char fname[20];
    char lname[20];
    int age;
    float cgpa;
};

int main() {
    struct student stlist[5];

    printf("Enter records of 5 students:\n");
    for(int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("ID: "); scanf("%d", &stlist[i].ID);
        printf("First Name: "); scanf("%s", stlist[i].fname);
        printf("Last Name: "); scanf("%s", stlist[i].lname);
        printf("Age: "); scanf("%d", &stlist[i].age);
        printf("CGPA: "); scanf("%f", &stlist[i].cgpa);
    }

    // 1) Search by ID
    int searchID, found = 0;
    printf("\nEnter ID to search: ");
    scanf("%d", &searchID);

    for(int i = 0; i < 5; i++) {
        if(stlist[i].ID == searchID) {
            printf("Student Found:\n");
            printf("ID: %d, Name: %s %s, Age: %d, CGPA: %.2f\n",
                   stlist[i].ID, stlist[i].fname, stlist[i].lname,
                   stlist[i].age, stlist[i].cgpa);
            found = 1;
            break;
        }
    }
    if(!found) printf("Invalid ID!\n");

    // 2) Youngest student
    int minAge = stlist[0].age, youngestIndex = 0;
    for(int i = 1; i < 5; i++) {
        if(stlist[i].age < minAge) {
            minAge = stlist[i].age;
            youngestIndex = i;
        }
    }
    printf("\nYoungest student: %s %s\n",
           stlist[youngestIndex].fname, stlist[youngestIndex].lname);

    // 3) Highest CGPA
    float maxCGPA = stlist[0].cgpa;
    for(int i = 1; i < 5; i++) {
        if(stlist[i].cgpa > maxCGPA) {
            maxCGPA = stlist[i].cgpa;
        }
    }
    printf("\nStudents with highest CGPA (%.2f):\n", maxCGPA);
    for(int i = 0; i < 5; i++) {
        if(stlist[i].cgpa == maxCGPA) {
            printf("ID: %d, Name: %s %s, Age: %d, CGPA: %.2f\n",
                   stlist[i].ID, stlist[i].fname, stlist[i].lname,
                   stlist[i].age, stlist[i].cgpa);
        }
    }

    // 4) Not named John
    printf("\nStudents not named John:\n");
    for(int i = 0; i < 5; i++) {
        int isJohn = 1;
        for(int j = 0; stlist[i].fname[j] != '\0' && stlist[i].fname[j] != '\0'; j++) {
            if(stlist[i].fname[j] != "John"[j]) {
                isJohn = 0;
                break;
            }
        }
        if(!isJohn) {
            printf("ID: %d, Name: %s %s, Age: %d, CGPA: %.2f\n",
                   stlist[i].ID, stlist[i].fname, stlist[i].lname,
                   stlist[i].age, stlist[i].cgpa);
        }
    }

    return 0;
}
