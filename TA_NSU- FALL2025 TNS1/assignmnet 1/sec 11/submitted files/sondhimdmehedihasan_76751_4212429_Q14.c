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

    // search student


     int searchID, found = 0;
    printf("\nEnter an ID to search: ");
    scanf("%d", &searchID);

    for (i = 0; i < 5; i++) {
        if (stlist[i].ID == searchID) {
            found = 1;
            printf("\nStudent found:\n");
            printf("ID: %d\n", stlist[i].ID);
            printf("Name: %s %s\n", stlist[i].fname, stlist[i].lname);
            printf("Age: %d\n", stlist[i].age);
            printf("CGPA: %.2f\n", stlist[i].cgpa);
            break;
        }
    }

    if (!found) {
        printf("\nInvalid ID! No student found.\n");
    }


    int youngestIndex = 0;
    for (i = 1; i < 5; i++) {
        if (stlist[i].age < stlist[youngestIndex].age) {
            youngestIndex = i;
        }
    }

    printf("\nYoungest Student:\n");
    printf("Name: %s %s\n", stlist[youngestIndex].fname, stlist[youngestIndex].lname);
    printf("Age: %d\n", stlist[youngestIndex].age);


    float highestCgpa = stlist[0].cgpa;

    for (i = 1; i < 5; i++) {
        if (stlist[i].cgpa > highestCgpa) {
            highestCgpa = stlist[i].cgpa;
        }
    }

    printf("\nStudent(s) with highest CGPA (%.2f):\n", highestCgpa);
    for (i = 0; i < 5; i++) {
        if (stlist[i].cgpa == highestCgpa) {
            printf("%s %s (ID: %d)\n", stlist[i].fname, stlist[i].lname, stlist[i].ID);
        }
    }


    printf("\nStudents whose first name is NOT John:\n");
    for (i = 0; i < 5; i++) {
        if (strcmp(stlist[i].fname, "John") != 0) {
            printf("%s %s (ID: %d)\n",
                   stlist[i].fname,
                   stlist[i].lname,
                   stlist[i].ID);
        }
    }

    return 0;
}

