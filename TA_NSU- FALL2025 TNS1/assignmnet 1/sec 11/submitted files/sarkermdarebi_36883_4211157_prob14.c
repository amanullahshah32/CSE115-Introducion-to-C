#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct student {
    int ID;
    char fname[20];
    char lname[20];
    int age;
    float cgpa;
};

void printStudent(const struct student *s) {
    printf("ID: %d\n", s->ID);
    printf("Name: %s %s\n", s->fname, s->lname);
    printf("Age: %d\n", s->age);
    printf("CGPA: %.2f\n", s->cgpa);
}

int equalsIgnoreCase(const char *a, const char *b) {
    while (*a && *b) {
        unsigned char ca = (unsigned char)*a++;
        unsigned char cb = (unsigned char)*b++;
        if (tolower(ca) != tolower(cb)) return 0;
    }
    return *a == '\0' && *b == '\0';
}

int main(void) {
    struct student stlist[5];
    int i;

    // Input 5 student records
    printf("Enter 5 student records as: ID FirstName LastName Age CGPA\n");
    for (i = 0; i < 5; ++i) {
        printf("Record %d: ", i + 1);
        if (scanf("%d %19s %19s %d %f",
                  &stlist[i].ID, stlist[i].fname, stlist[i].lname,
                  &stlist[i].age, &stlist[i].cgpa) != 5) {
            fprintf(stderr, "\nInvalid input format.\n");
            return 1;
        }
    }

    // 1) Search by ID
    int keyID, foundIndex = -1;
    printf("\nEnter an ID to search: ");
    if (scanf("%d", &keyID) != 1) {
        fprintf(stderr, "Invalid ID input.\n");
        return 1;
    }
    for (i = 0; i < 5; ++i) {
        if (stlist[i].ID == keyID) {
            foundIndex = i;
            break;
        }
    }

    printf("\n---- 1) Search result ----\n");
    if (foundIndex == -1) {
        printf("Error: Invalid ID. No student found with ID %d.\n", keyID);
    } else {
        printStudent(&stlist[foundIndex]);
    }

    // 2) Youngest student(s) by minimum age
    int minAge = stlist[0].age;
    for (i = 1; i < 5; ++i) {
        if (stlist[i].age < minAge) minAge = stlist[i].age;
    }

    printf("\n---- 2) Youngest student name(s) ----\n");
    for (i = 0; i < 5; ++i) {
        if (stlist[i].age == minAge) {
            printf("%s %s (Age %d)\n", stlist[i].fname, stlist[i].lname, stlist[i].age);
        }
    }

    // 3) Student(s) with highest CGPA
    float maxCgpa = stlist[0].cgpa;
    for (i = 1; i < 5; ++i) {
        if (stlist[i].cgpa > maxCgpa) maxCgpa = stlist[i].cgpa;
    }

    printf("\n---- 3) Detail of student(s) with highest CGPA (%.2f) ----\n", maxCgpa);
    for (i = 0; i < 5; ++i) {
        /* Compare using a small epsilon to account for float formatting */
        float diff = stlist[i].cgpa - maxCgpa;
        if (diff < 0.000001f && diff > -0.000001f) {
            printStudent(&stlist[i]);
        }
    }

    // 4) Students whose first name is not "John" (case-insensitive)
    printf("\n---- 4) Students whose first name is not John ----\n");
    int anyPrinted = 0;
    for (i = 0; i < 5; ++i) {
        if (!equalsIgnoreCase(stlist[i].fname, "John")) {
            printStudent(&stlist[i]);
            anyPrinted = 1;
        }
    }
    if (!anyPrinted) {
        printf("None\n");
    }

    return 0;
}
