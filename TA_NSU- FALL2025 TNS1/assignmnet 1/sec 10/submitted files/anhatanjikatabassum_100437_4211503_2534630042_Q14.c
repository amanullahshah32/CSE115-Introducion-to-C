#include <stdio.h>
#include <string.h>

struct student {
    int ID;
    char fname[20];
    int age;
    float cgpa;
};

int main() {
    struct student stlist[5];
    int i;

    printf("Enter records of 5 students:\n");

    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &stlist[i].ID);

        printf("First Name: ");
        scanf("%s", stlist[i].fname);

        printf("Age: ");
        scanf("%d", &stlist[i].age);

        printf("CGPA: ");
        scanf("%f", &stlist[i].cgpa);
    }
    int searchID, found = 0;
    printf("\nEnter ID to search: ");
    scanf("%d", &searchID);

    for (i = 0; i < 5; i++) {
        if (stlist[i].ID == searchID) {
            found = 1;
            printf("\nStudent Found:");
            printf("ID: %d\n", stlist[i].ID);
            printf("First Name: %s\n", stlist[i].fname);
            printf("Age: %d\n", stlist[i].age);
            printf("CGPA: %.2f\n", stlist[i].cgpa);
            break;
        }
    }
    if (!found) {
        printf("\nError! Invalid ID.\n");
    }


    int minAge = stlist[0].age;
    int minIndex = 0;

    for (i = 1; i < 5; i++) {
        if (stlist[i].age < minAge) {
            minAge = stlist[i].age;
            minIndex = i;
        }
    }

    printf("\nYoungest Student:\n");
    printf("ID: %d\n", stlist[minIndex].ID);
    printf("First Name: %s\n", stlist[minIndex].fname);
    printf("Age: %d\n", stlist[minIndex].age);
    printf("CGPA: %.2f\n", stlist[minIndex].cgpa);

    float maxCGPA = stlist[0].cgpa;
    for (i = 1; i < 5; i++) {
        if (stlist[i].cgpa > maxCGPA) {
            maxCGPA = stlist[i].cgpa;
        }
    }

    printf("\nStudent(s) with Highest CGPA (%.2f):\n", maxCGPA);
    for (i = 0; i < 5; i++) {
        if (stlist[i].cgpa == maxCGPA) {
            printf("\nID: %d\n", stlist[i].ID);
            printf("First Name: %s\n", stlist[i].fname);
            printf("Age: %d\n", stlist[i].age);
            printf("CGPA: %.2f\n", stlist[i].cgpa);
        }
    }


    printf("\nStudents whose first name is NOT John:\n");
    for (i = 0; i < 5; i++) {
        if (strcmp(stlist[i].fname, "John") != 0) {
            printf("\nID: %d\n", stlist[i].ID);
            printf("First Name: %s\n", stlist[i].fname);
            printf("Age: %d\n", stlist[i].age);
            printf("CGPA: %.2f\n", stlist[i].cgpa);
        }
    }

    return 0;
}
