#include <stdio.h>
#include <string.h>

typedef struct student {
    int ID;
    char fname[20];
    char lname[20];
    int age;
    float cgpa;
} student;

int main() {
    student stlist[5];

    printf("Enter student info:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nEnter ID: ");
        scanf("%d", &stlist[i].ID);

        printf("Enter first name: ");
        scanf("%s", stlist[i].fname);

        printf("Enter last name: ");
        scanf("%s", stlist[i].lname);

        printf("Enter age: ");
        scanf("%d", &stlist[i].age);

        printf("Enter CGPA: ");
        scanf("%f", &stlist[i].cgpa);
    }

    
    // 1. SEARCH BY ID
    
    int targetID;
    printf("\nEnter ID to search: ");
    scanf("%d", &targetID);

    int found = 0;
    for (int i = 0; i < 5; i++) {
        if (stlist[i].ID == targetID) {
            found = 1;
            printf("\n--- Student Found ---\n");
            printf("ID: %d\n", stlist[i].ID);
            printf("Name: %s %s\n", stlist[i].fname, stlist[i].lname);
            printf("Age: %d\n", stlist[i].age);
            printf("CGPA: %.2f\n", stlist[i].cgpa);
            break;
        }
    }
    if (!found) {
        printf("\nError: Invalid ID\n");
    }

    
    // 2. YOUNGEST STUDENT
    
    int youngest = stlist[0].age;
    for (int i = 1; i < 5; i++) {
        if (stlist[i].age < youngest) {
            youngest = stlist[i].age;
        }
    }

    printf("\n--- Youngest Student(s) ---\n");
    for (int i = 0; i < 5; i++) {
        if (stlist[i].age == youngest) {
            printf("%s %s (Age: %d)\n", stlist[i].fname, stlist[i].lname, stlist[i].age);
        }
    }

    
    // 3. STUDENT(S) WITH HIGHEST CGPA
    
    float highestCG = stlist[0].cgpa;
    for (int i = 1; i < 5; i++) {
        if (stlist[i].cgpa > highestCG) {
            highestCG = stlist[i].cgpa;
        }
    }

    printf("\n--- Highest CGPA Student(s) ---\n");
    for (int i = 0; i < 5; i++) {
        if (stlist[i].cgpa == highestCG) {
            printf("ID: %d\n", stlist[i].ID);
            printf("Name: %s %s\n", stlist[i].fname, stlist[i].lname);
            printf("Age: %d\n", stlist[i].age);
            printf("CGPA: %.2f\n\n", stlist[i].cgpa);
        }
    }

   
    // 4. STUDENTS WHOSE FIRST NAME IS NOT "John"
   
    printf("\n--- Students whose first name is NOT John ---\n");
    for (int i = 0; i < 5; i++) {
        if (strcmp(stlist[i].fname, "John") != 0) {
            printf("ID: %d\n", stlist[i].ID);
            printf("Name: %s %s\n", stlist[i].fname, stlist[i].lname);
            printf("Age: %d\n", stlist[i].age);
            printf("CGPA: %.2f\n\n", stlist[i].cgpa);
        }
    }

    return 0;
}
