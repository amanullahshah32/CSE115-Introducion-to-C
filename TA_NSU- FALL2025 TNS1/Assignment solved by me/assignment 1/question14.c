
#include <stdio.h>
#include <string.h> // Needed for strcmp to compare names

// Define the Structure
struct student {
    int ID;
    char fname[20];
    char lname[20];
    int age;
    float cgpa;
};

int main() {
    struct student stlist[5];
    int i, searchID, found = 0;

    // --- 1. POPULATE DATA ---
    printf("Enter records for 5 students:\n");
    for(i = 0; i < 5; i++) {
        printf("Student %d (ID fname lname age cgpa): ", i+1);
        scanf("%d %s %s %d %f", &stlist[i].ID, stlist[i].fname, stlist[i].lname, &stlist[i].age, &stlist[i].cgpa);
    }

    // --- TASK 1: SEARCH BY ID ---
    printf("\n--- Search by ID ---\n");
    printf("Enter ID to search: ");
    scanf("%d", &searchID);
    for(i = 0; i < 5; i++) {
        if(stlist[i].ID == searchID) {
            printf("Found: %s %s, CGPA: %.2f\n", stlist[i].fname, stlist[i].lname, stlist[i].cgpa);
            found = 1;
        }
    }
    if(found == 0) printf("Error: Invalid ID\n");

    // --- TASK 2: YOUNGEST STUDENT ---
    int minAgeIndex = 0; // Assume first student is youngest initially
    for(i = 1; i < 5; i++) {
        if(stlist[i].age < stlist[minAgeIndex].age) {
            minAgeIndex = i; // Found someone younger, update index
        }
    }
    printf("\nYoungest Student: %s %s (Age: %d)\n", stlist[minAgeIndex].fname, stlist[minAgeIndex].lname, stlist[minAgeIndex].age);

    // --- TASK 3: HIGHEST CGPA ---
    float maxCGPA = stlist[0].cgpa;
    // First, find the max value
    for(i = 1; i < 5; i++) {
        if(stlist[i].cgpa > maxCGPA) maxCGPA = stlist[i].cgpa;
    }
    printf("\nStudent(s) with Highest CGPA (%.2f):\n", maxCGPA);
    // Print EVERYONE who matches that max value (in case of ties)
    for(i = 0; i < 5; i++) {
        if(stlist[i].cgpa == maxCGPA) {
            printf("- %s %s\n", stlist[i].fname, stlist[i].lname);
        }
    }

    // --- TASK 4: FNAME NOT 'John' ---
    printf("\nStudents whose first name is NOT John:\n");
    for(i = 0; i < 5; i++) {
        // strcmp returns 0 if strings are identical.
        // We want strings that are DIFFERENT (return value != 0)
        if(strcmp(stlist[i].fname, "John") != 0) {
            printf("- %s %s\n", stlist[i].fname, stlist[i].lname);
        }
    }

    return 0;
}
