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

    printf("Enter records of 5 students:\n");

    for(i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &stlist[i].ID);
        printf("First name: ");
        scanf("%s", stlist[i].fname);
        printf("Last name: ");
        scanf("%s", stlist[i].lname);
        printf("Age: ");
        scanf("%d", &stlist[i].age);
        printf("CGPA: ");
        scanf("%f", &stlist[i].cgpa);
    }

    // ----------------------------------------------------
    // 1) Information by ID
    // ----------------------------------------------------
    int searchID;
    int found = 0;

    printf("\nEnter an ID to search: ");
    scanf("%d", &searchID);

    for(i = 0; i < 5; i++) {
        if(stlist[i].ID == searchID) {
            found = 1;
            printf("\nStudent Found:\n");
            printf("ID: %d\n", stlist[i].ID);
            printf("Name: %s %s\n", stlist[i].fname, stlist[i].lname);
            printf("Age: %d\n", stlist[i].age);
            printf("CGPA: %.2f\n", stlist[i].cgpa);
            break;
        }
    }

    if(!found) {
        printf("Invalid ID! Student not found.\n");
    }

    // ----------------------------------------------------
    // 2) Name of youngest student
    // ----------------------------------------------------
    int minAgeIndex = 0;
    for(i = 1; i < 5; i++) {
        if(stlist[i].age < stlist[minAgeIndex].age)
            minAgeIndex = i;
    }

    printf("\nYoungest student: %s %s (Age: %d)\n",
           stlist[minAgeIndex].fname,
           stlist[minAgeIndex].lname,
           stlist[minAgeIndex].age);

    // ----------------------------------------------------
    // 3) Students with highest CGPA
    // ----------------------------------------------------
    float highest = stlist[0].cgpa;

    for(i = 1; i < 5; i++) {
        if(stlist[i].cgpa > highest)
            highest = stlist[i].cgpa;
    }

    printf("\nStudents with highest CGPA (%.2f):\n", highest);

    for(i = 0; i < 5; i++) {
        if(stlist[i].cgpa == highest) {
            printf("ID: %d, Name: %s %s, Age: %d\n",
                   stlist[i].ID,
                   stlist[i].fname,
                   stlist[i].lname,
                   stlist[i].age);
        }
    }


    printf("\nStudents whose first name is not John:\n");
    for(i = 0; i < 5; i++) {
        if(strcmp(stlist[i].fname, "John") != 0) {
            printf("ID: %d, Name: %s %s\n",
                    stlist[i].ID,
                    stlist[i].fname,
                    stlist[i].lname);
        }
    }

    return 0;
}
