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

    for(i = 0; i < 5; i++) {
        printf("Enter ID, first name, last name, age, CGPA for student %d: ", i + 1);
        scanf("%d %s %s %d %f", &stlist[i].ID, stlist[i].fname, stlist[i].lname, &stlist[i].age, &stlist[i].cgpa);
    }

    int searchID, found = 0;
    printf("Enter ID to search: ");
    scanf("%d", &searchID);

    for(i = 0; i < 5; i++) {
        if(stlist[i].ID == searchID) {
            printf("ID: %d\nName: %s %s\nAge: %d\nCGPA: %.2f\n", stlist[i].ID, stlist[i].fname, stlist[i].lname, stlist[i].age, stlist[i].cgpa);
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("Error: Invalid ID\n");
    }

    int minAge = stlist[0].age, minIndex = 0;
    for(i = 1; i < 5; i++) {
        if(stlist[i].age < minAge) {
            minAge = stlist[i].age;
            minIndex = i;
        }
    }
    printf("Youngest student: %s %s\n", stlist[minIndex].fname, stlist[minIndex].lname);

    float maxCgpa = stlist[0].cgpa;
    for(i = 1; i < 5; i++) {
        if(stlist[i].cgpa > maxCgpa) {
            maxCgpa = stlist[i].cgpa;
        }
    }
    printf("Student(s) with highest CGPA:\n");
    for(i = 0; i < 5; i++) {
        if(stlist[i].cgpa == maxCgpa) {
            printf("ID: %d\nName: %s %s\nAge: %d\nCGPA: %.2f\n", stlist[i].ID, stlist[i].fname, stlist[i].lname, stlist[i].age, stlist[i].cgpa);
        }
    }

    printf("Students whose first name is not John:\n");
    for(i = 0; i < 5; i++) {
        if(strcmp(stlist[i].fname, "John") != 0) {
            printf("ID: %d\nName: %s %s\nAge: %d\nCGPA: %.2f\n", stlist[i].ID, stlist[i].fname, stlist[i].lname, stlist[i].age, stlist[i].cgpa);
        }
    }

    return 0;
}
