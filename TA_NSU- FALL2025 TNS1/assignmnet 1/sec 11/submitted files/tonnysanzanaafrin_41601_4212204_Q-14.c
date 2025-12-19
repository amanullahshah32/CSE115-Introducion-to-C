
//Sanzana Afrin Tonny
//2231370042


#include <stdio.h>
#include <string.h>


struct student {
    int ID;
    char firstname[20];
    char lastname[20];
    int age;
    float cgpa;
};

int main() {
    struct student st[5];
    int i;
    int searchID, found = 0;
    int smallestIndex = 0;
    float maxCGPA = -1.0;


    printf("Enter records for 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &st[i].ID);

        printf("Enter First Name: ");
        scanf("%s", st[i].firstname);

        printf("Enter Last Name: ");
        scanf("%s", st[i].lastname);

        printf("Enter Age: ");
        scanf("%d", &st[i].age);

        printf("Enter CGPA: ");
        scanf("%f", &st[i].cgpa);
    }

    printf("Search Student by ID\n");
    printf("Enter ID to search: ");
    scanf("%d", &searchID);

    for (i = 0; i < 5; i++) {
        if (st[i].ID == searchID) {
            printf("Found: %s %s, Age: %d, CGPA: %.2f\n", st[i].firstname, st[i].lastname, st[i].age, st[i].cgpa);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Invalid\n");
    }


    printf("youngest Student\n");

    smallestIndex = 0;

    for (i = 1; i < 5; i++) {

        if (st[i].age < st[smallestIndex].age) {
            smallestIndex = i;
        }
    }

    printf("The youngest student is: %s %s\n", st[smallestIndex].firstname, st[smallestIndex].lastname);


    printf("Student with highest CGPA\n");


    maxCGPA = st[0].cgpa;
    for (i = 1; i < 5; i++) {
        if (st[i].cgpa > maxCGPA) {
            maxCGPA = st[i].cgpa;
        }
    }


    for (i = 0; i < 5; i++) {
        if (st[i].cgpa == maxCGPA) {
            printf("ID: %d, Name: %s %s, Age: %d, CGPA: %.2f\n", st[i].ID, st[i].firstname, st[i].lastname, st[i].age, st[i].cgpa);
        }
    }


    printf("Students whose name is not John\n");

    for (i = 0; i < 5; i++) {

        if (strcmp(st[i].firstname, "John") != 0) {
            printf("%s %s (ID: %d)\n", st[i].firstname, st[i].lastname, st[i].ID);
        }
    }

    return 0;
}

