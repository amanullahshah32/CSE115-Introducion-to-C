#include <stdio.h>

typedef struct {
    int  ID;
    char fname[20];
    char lname[20];
    int  age;
    float cgpa;
} student;

int main(void)
{
    student stlist[5];
    int i, givenID, found, youngestIndex, maxCgIndex;

    // input records
    for (i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("ID: ");   scanf("%d", &stlist[i].ID);
        printf("First name: ");  scanf("%s", stlist[i].fname);
        printf("Last name: ");   scanf("%s", stlist[i].lname);
        printf("Age: ");  scanf("%d", &stlist[i].age);
        printf("CGPA: "); scanf("%f", &stlist[i].cgpa);
        printf("\n");
    }

    /* 1) information of student whose ID is provided by user   */
    printf("Enter an ID to search: ");
    scanf("%d", &givenID);

    found = -1;
    for (i = 0; i < 5; i++) {
        if (stlist[i].ID == givenID) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("Error: Invalid ID.\n");
    } else {
        printf("Student with ID %d:\n", givenID);
        printf("Name: %s %s\n", stlist[found].fname, stlist[found].lname);
        printf("Age: %d\n", stlist[found].age);
        printf("CGPA: %.2f\n", stlist[found].cgpa);
    }

    /* 2) name of youngest student */
    youngestIndex = 0;
    for (i = 1; i < 5; i++)
        if (stlist[i].age < stlist[youngestIndex].age)
            youngestIndex = i;

    printf("\nYoungest student: %s %s (Age: %d)\n",
           stlist[youngestIndex].fname,
           stlist[youngestIndex].lname,
           stlist[youngestIndex].age);

    /* 3) detail info of student(s) with highest CGPA */
    maxCgIndex = 0;
    for (i = 1; i < 5; i++)
        if (stlist[i].cgpa > stlist[maxCgIndex].cgpa)
            maxCgIndex = i;

    printf("\nStudent(s) with highest CGPA (%.2f):\n",
           stlist[maxCgIndex].cgpa);
    for (i = 0; i < 5; i++) {
        if (stlist[i].cgpa == stlist[maxCgIndex].cgpa) {
            printf("ID: %d, Name: %s %s, Age: %d\n",
                   stlist[i].ID, stlist[i].fname,
                   stlist[i].lname, stlist[i].age);
        }
    }

    /* 4) info of students whose first name is not John */
    printf("\nStudents whose first name is not John:\n");
    for (i = 0; i < 5; i++) {
        if (!(stlist[i].fname[0]=='J' && stlist[i].fname[1]=='o' &&
              stlist[i].fname[2]=='h' && stlist[i].fname[3]=='n' &&
              stlist[i].fname[4]=='\0')) {
            printf("ID: %d, Name: %s %s, Age: %d, CGPA: %.2f\n",
                   stlist[i].ID, stlist[i].fname,
                   stlist[i].lname, stlist[i].age,
                   stlist[i].cgpa);
        }
    }

    return 0;
}
