
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

    // Input 5 student records
    printf("Enter records for 5 students:\n");
    for(i = 0; i < 5; i++) {
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
    // 1. Information of student by ID search
    int searchID, found = 0;
    printf("\nEnter ID to search: ");
    scanf("%d", &searchID);

    for(i = 0; i < 5; i++) {
        if(stlist[i].ID == searchID) {
            printf("\nRecord Found:\n");
            printf("ID: %d\n", stlist[i].ID);
            printf("Name: %s %s\n", stlist[i].fname, stlist[i].lname);
            printf("Age: %d\n", stlist[i].age);
            printf("CGPA: %.2f\n", stlist[i].cgpa);
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("Invalid ID! No student found.\n");
    }

    // 2. Youngest student
    int minAge = stlist[0].age;
    int minIndex = 0;
    for(i = 1; i < 5; i++) {
        if(stlist[i].age < minAge) {
            minAge = stlist[i].age;
            minIndex = i;
        }
    }
    printf("\nYoungest Student: %s %s (Age: %d)\n",
           stlist[minIndex].fname,
           stlist[minIndex].lname,
           stlist[minIndex].age);

    // 3. Students with highest CGPA
    float maxCGPA = stlist[0].cgpa;
    for(i = 1; i < 5; i++) {
        if(stlist[i].cgpa > maxCGPA) {
            maxCGPA = stlist[i].cgpa;
        }
    }

    printf("\nStudents with Highest CGPA (%.2f):\n", maxCGPA);
    for(i = 0; i < 5; i++) {
        if(stlist[i].cgpa == maxCGPA) {
            printf("ID: %d, Name: %s %s, Age: %d, CGPA: %.2f\n",
                   stlist[i].ID,
                   stlist[i].fname,
                   stlist[i].lname,
                   stlist[i].age,
                   stlist[i].cgpa);
        }
    }

    // 4. Students whose first name is not John
    printf("\nStudents whose first name is not John:\n");
    for(i = 0; i < 5; i++) {
        if(strcmp(stlist[i].fname, "John") != 0) {
            printf("ID: %d, Name: %s %s, Age: %d, CGPA: %.2f\n",
                   stlist[i].ID,
                   stlist[i].fname,
                   stlist[i].lname,
                   stlist[i].age,
                   stlist[i].cgpa);
        }
    }

    return 0;
}
