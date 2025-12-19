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
    printf("Enter information for 5 students:\n");
    for (i = 0; i < 5; i++) {
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
    int searchID, found = 0;
    printf("\nEnter an ID to search: ");
    scanf("%d", &searchID);

    for (i = 0; i < 5; i++) {
        if (stlist[i].ID == searchID) {
            printf("\nStudent found:\n");
            printf("ID: %d\n", stlist[i].ID);
            printf("Name: %s %s\n", stlist[i].fname, stlist[i].lname);
            printf("Age: %d\n", stlist[i].age);
            printf("CGPA: %.2f\n", stlist[i].cgpa);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nError: Invalid ID!\n");
    }

    int youngest = stlist[0].age;
    int index = 0;

    for (i = 1; i < 5; i++) {
        if (stlist[i].age < youngest) {
           youngest = stlist[i].age;
            index = i;
        }
    }

    printf("\nYoungest student: %s %s (Age: %d)\n",
           stlist[index].fname, stlist[index].lname, stlist[index].age);


    float maxCGPA = stlist[0].cgpa;
    for (i = 1; i < 5; i++) {
        if (stlist[i].cgpa > maxCGPA)
            maxCGPA = stlist[i].cgpa;
    }

    printf("\nStudent(s) with highest CGPA :\n", maxCGPA);
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

