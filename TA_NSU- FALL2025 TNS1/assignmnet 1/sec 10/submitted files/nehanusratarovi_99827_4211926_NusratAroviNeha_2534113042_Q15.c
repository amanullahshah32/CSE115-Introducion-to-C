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

    // Input records of 5 students
    printf("Enter information of 5 students:\n");
    for(i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Enter ID: ");
        scanf("%d", &stlist[i].ID);
        printf("Enter first name: ");
        scanf("%s", stlist[i].fname);
        printf("Enter last name: ");
        scanf("%s", stlist[i].lname);
        printf("Enter age: ");
        scanf("%d", &stlist[i].age);
        printf("Enter CGPA: ");
        scanf("%f", &stlist[i].cgpa);
    }

   //task 1:search by id
    int searchID, found = 0;
    printf("Enter ID to search: ");
    scanf("%d", &searchID);

    for(i = 0; i < 5; i++) {
        if(stlist[i].ID == searchID) {
            printf("\nStudent Found:\n");
            printf("ID: %d\nName: %s %s\nAge: %d\nCGPA: %.2f\n",
                   stlist[i].ID, stlist[i].fname, stlist[i].lname,
                   stlist[i].age, stlist[i].cgpa);
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("Error: No student found with ID %d\n", searchID);
    }

   //task 2:find the youngest
    int minAge = stlist[0].age;
    for(i = 1; i < 5; i++) {
        if(stlist[i].age < minAge) {
            minAge = stlist[i].age;
        }
    }
    printf("Youngest student(s):\n");
    for(i = 0; i < 5; i++) {
        if(stlist[i].age == minAge) {
            printf("%s %s (Age: %d)\n", stlist[i].fname, stlist[i].lname, stlist[i].age);
        }
    }

   //task 3:students with high cgpa
    float maxCgpa = stlist[0].cgpa;
    for(i = 1; i < 5; i++) {
        if(stlist[i].cgpa > maxCgpa) {
            maxCgpa = stlist[i].cgpa;
        }
    }
    printf("Student(s) with highest CGPA:\n");
    for(i = 0; i < 5; i++) {
        if(stlist[i].cgpa == maxCgpa) {
            printf("ID: %d, Name: %s %s, Age: %d, CGPA: %.2f\n",
                   stlist[i].ID, stlist[i].fname, stlist[i].lname,
                   stlist[i].age, stlist[i].cgpa);
        }
    }

    //task4:students whose first name is not John
    for(i = 0; i < 5; i++) {
        if(strcmp(stlist[i].fname, "John") != 0) {
            printf("ID: %d, Name: %s %s, Age: %d, CGPA: %.2f\n",
                   stlist[i].ID, stlist[i].fname, stlist[i].lname,
                   stlist[i].age, stlist[i].cgpa);
        }
    }

    return 0;
}
