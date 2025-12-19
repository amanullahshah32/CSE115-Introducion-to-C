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
    int i, searchID, found = 0;


    printf("Enter details for 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &stlist[i].ID);
        printf("First Name: ");
        scanf("%s", stlist[i].fname);
        printf("Last Name: ");
        scanf("%s", stlist[i].lname);
        printf("Age: ");
        scanf("%d", &stlist[i].age);
        printf("CGPA: ");
        scanf("%f", &stlist[i].cgpa);
    }


    printf("\n\n--- Search Student by ID ---\n");
    printf("Enter ID to search: ");
    scanf("%d", &searchID);

    found = 0;
    for (i = 0; i < 5; i++) {
        if (stlist[i].ID == searchID) {
            printf("\nStudent Found:\n");
            printf("ID: %d\n", stlist[i].ID);
            printf("Name: %s %s\n", stlist[i].fname, stlist[i].lname);
            printf("Age: %d\n", stlist[i].age);
            printf("CGPA: %.2f\n", stlist[i].cgpa);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Error: Invalid ID! No student found with ID %d\n", searchID);
    }


    printf("\n\n--- Youngest Student ---\n");
    int minAge = stlist[0].age;
    int youngestIndex = 0;

    for (i = 1; i < 5; i++) {
        if (stlist[i].age < minAge) {
            minAge = stlist[i].age;
            youngestIndex = i;
        }
    }
    printf("Youngest student is: %s %s (Age: %d)\n",
           stlist[youngestIndex].fname, stlist[youngestIndex].lname, minAge);


    printf("\n\n--- Student(s) with Highest CGPA ---\n");
    float maxCGPA = stlist[0].cgpa;

    for (i = 1; i < 5; i++) {
        if (stlist[i].cgpa > maxCGPA) {
            maxCGPA = stlist[i].cgpa;
        }
    }


    printf("Highest CGPA: %.2f\n", maxCGPA);
    printf("Students with highest CGPA:\n");
    for (i = 0; i < 5; i++) {
        if (stlist[i].cgpa == maxCGPA) {
            printf("- %s %s (ID: %d, CGPA: %.2f)\n",
                   stlist[i].fname, stlist[i].lname, stlist[i].ID, stlist[i].cgpa);
        }
    }


    printf("\n\n--- Students whose first name is not John ---\n");
    found = 0;
    for (i = 0; i < 5; i++) {

        int isJohn = 1;
        int j = 0;


        char *name = stlist[i].fname;
        char john[] = "John";

        while (john[j] != '\0' && name[j] != '\0') {
            if (john[j] != name[j]) {
                isJohn = 0;
                break;
            }
            j++;
        }


        if (john[j] != '\0' || name[j] != '\0') {
            isJohn = 0;
        }

        if (!isJohn) {
            printf("ID: %d, Name: %s %s, Age: %d, CGPA: %.2f\n",
                   stlist[i].ID, stlist[i].fname, stlist[i].lname,
                   stlist[i].age, stlist[i].cgpa);
            found = 1;
        }
    }

    if (!found) {
        printf("All students are named John!\n");
    }

    return 0;
}
