#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    /*
struct student{ int ID; char fname[20]; char lname[20]; int age; float cgpa; }; Using
the structure student (declared above), enter the records of 5 students in an array of
structure named stlist[] and display
1)information of student whose ID is provided by user. If Invalid ID, then show an error
message,
2) the name of youngest student
3) detail information of student/students with highest cgpa
4) information of students whose first name (fname ) is not John
    */

struct student{
    int ID;
    char fname[20];
    char lname[20];
    int age;
    float cgpa;
};

int main() {

    struct student stlist[5];
    int i;

    // Input 5 students
    for(i = 0; i < 5; i++) {
        printf("Enter ID, fname, lname, age, cgpa of student %d:\n", i+1);
        scanf("%d %s %s %d %f",
              &stlist[i].ID, stlist[i].fname, stlist[i].lname,
              &stlist[i].age, &stlist[i].cgpa);
    }

    // 1. Information of student with given ID
    int searchID;
    int found = 0;
    printf("\nEnter ID to search: ");
    scanf("%d", &searchID);

    for(i = 0; i < 5; i++) {
        if(stlist[i].ID == searchID) {
            printf("\nStudent found:\n");
            printf("ID: %d, Name: %s %s, Age: %d, CGPA: %.2f\n",
                   stlist[i].ID, stlist[i].fname, stlist[i].lname,
                   stlist[i].age, stlist[i].cgpa);
            found = 1;
            break;
        }
    }
    if(!found) printf("Invalid ID!\n");

    // 2. Youngest student
    int youngestIndex = 0;
    for(i = 1; i < 5; i++) {
        if(stlist[i].age < stlist[youngestIndex].age) {
            youngestIndex = i;
        }
    }
    printf("\nYoungest student: %s %s (Age %d)\n",
           stlist[youngestIndex].fname, stlist[youngestIndex].lname,
           stlist[youngestIndex].age);

    // 3. Student(s) with highest CGPA
    float highest = stlist[0].cgpa;
    for(i = 1; i < 5; i++)
        if(stlist[i].cgpa > highest)
            highest = stlist[i].cgpa;

    printf("\nStudents with highest CGPA (%.2f):\n", highest);
    for(i = 0; i < 5; i++) {
        if(stlist[i].cgpa == highest) {
            printf("ID: %d, %s %s, Age: %d\n",
                   stlist[i].ID, stlist[i].fname, stlist[i].lname,
                   stlist[i].age);
        }
    }

    // 4. Students whose fname is NOT John
    printf("\nStudents whose first name is NOT John:\n");
    for(i = 0; i < 5; i++) {
        if(strcmp(stlist[i].fname, "John") != 0) {
            printf("ID: %d, %s %s\n",
                   stlist[i].ID, stlist[i].fname, stlist[i].lname);
        }
    }

    return 0;
}
