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

    // 1) Display info of student by ID
    int searchID;
    int found = 0;

    printf("\nEnter an ID to search: ");
    scanf("%d", &searchID);

    for(i = 0; i < 5; i++) {
        if(stlist[i].ID == searchID) {
            printf("\nStudent Found:\n");
            printf("ID: %d\n", stlist[i].ID);
            printf("Name: %s %s\n", stlist[i].fname, stlist[i].lname);
            printf("Age: %d\n", stlist[i].age);
            printf("CGPA: %.2f\n", stlist[i].cgpa);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("\nInvalid ID! No student found.\n");
    }

    // 2) Name of youngest student
    int minAge = stlist[0].age;
    for(i = 1; i < 5; i++) {
        if(stlist[i].age < minAge)
            minAge = stlist[i].age;
    }

    printf("\nYoungest student(s):\n");
    for(i = 0; i < 5; i++) {
        if(stlist[i].age == minAge) {
            printf("%s %s (Age: %d)\n", stlist[i].fname, stlist[i].lname, stlist[i].age);
        }
    }

    // 3) Student(s) with highest CGPA
    float maxCgpa = stlist[0].cgpa;
    for(i = 1; i < 5; i++) {
        if(stlist[i].cgpa > maxCgpa)
            maxCgpa = stlist[i].cgpa;
    }

    printf("\nStudent(s) with highest CGPA:\n");
    for(i = 0; i < 5; i++) {
        if(stlist[i].cgpa == maxCgpa) {
            printf("ID: %d\n", stlist[i].ID);
            printf("Name: %s %s\n", stlist[i].fname, stlist[i].lname);
            printf("Age: %d\n", stlist[i].age);
            printf("CGPA: %.2f\n\n", stlist[i].cgpa);
        }
    }

    // 4) Students whose first name is NOT John
    printf("\nStudents whose first name is NOT John:\n");
    for(i = 0; i < 5; i++) {
        if(strcmp(stlist[i].fname, "John") != 0) {
            printf("ID: %d, Name: %s %s, Age: %d, CGPA: %.2f\n",
                   stlist[i].ID, stlist[i].fname, stlist[i].lname,
                   stlist[i].age, stlist[i].cgpa);
        }
    }

    return 0;
}
