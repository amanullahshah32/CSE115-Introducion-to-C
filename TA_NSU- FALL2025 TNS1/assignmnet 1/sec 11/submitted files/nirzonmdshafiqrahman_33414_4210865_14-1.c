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
    int i, idSearch;
    
    printf("Enter information of 5 students:\n");
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
    printf("\nEnter ID to search: ");
    scanf("%d", &idSearch);

    int found = 0;
    for (i = 0; i < 5; i++) {
        if (stlist[i].ID == idSearch) {
            found = 1;
            printf("\nStudent Found:\n");
            printf("ID: %d\n", stlist[i].ID);
            printf("Name: %s %s\n", stlist[i].fname, stlist[i].lname);
            printf("Age: %d\n", stlist[i].age);
            printf("CGPA: %.2f\n", stlist[i].cgpa);
            break;
        }
    }
    if (!found) {
        printf("\nInvalid ID! Student not found.\n");
    }
    int minAgeIndex = 0;
    for (i = 1; i < 5; i++) {
        if (stlist[i].age < stlist[minAgeIndex].age) {
            minAgeIndex = i;
        }
    }

    printf("\nYoungest student:\n");
    printf("ID: %d\n", stlist[minAgeIndex].ID);
    printf("Name: %s %s\n", stlist[minAgeIndex].fname, stlist[minAgeIndex].lname);
    printf("Age: %d\n", stlist[minAgeIndex].age);
    printf("CGPA: %.2f\n", stlist[minAgeIndex].cgpa);

    float maxCGPA = stlist[0].cgpa;
    for (i = 1; i < 5; i++) {
        if (stlist[i].cgpa > maxCGPA) {
            maxCGPA = stlist[i].cgpa;
        }
    }

    printf("\nStudent(s) with highest CGPA (%.2f):\n", maxCGPA);
    for (i = 0; i < 5; i++) {
        if (stlist[i].cgpa == maxCGPA) {
            printf("ID: %d, Name: %s %s, Age: %d, CGPA: %.2f\n",
                   stlist[i].ID, stlist[i].fname, stlist[i].lname,
                   stlist[i].age, stlist[i].cgpa);
        }
    }
    printf("\nStudents whose first name is NOT John:\n");
    for (i = 0; i < 5; i++) {
        if (strcmp(stlist[i].fname, "John") != 0) {
            printf("ID: %d, Name: %s %s, Age: %d, CGPA: %.2f\n",
                   stlist[i].ID, stlist[i].fname, stlist[i].lname,
                   stlist[i].age, stlist[i].cgpa);
        }
    }

    return 0;
}
