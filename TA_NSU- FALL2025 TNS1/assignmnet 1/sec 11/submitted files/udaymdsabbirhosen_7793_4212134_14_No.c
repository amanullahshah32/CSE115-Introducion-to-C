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


    for (int i = 0; i < 5; i++) {
        printf("\nEnter info for student %d:\n", i + 1);
        printf("ID: "); scanf("%d", &stlist[i].ID);
        printf("First Name: "); scanf("%19s", stlist[i].fname);
        printf("Last Name: "); scanf("%19s", stlist[i].lname);
        printf("Age: "); scanf("%d", &stlist[i].age);
        printf("CGPA: "); scanf("%f", &stlist[i].cgpa);
    }


    int searchID, found = 0;
    printf("\nEnter ID to search: ");
    scanf("%d", &searchID);

    for (int i = 0; i < 5; i++) {
        if (stlist[i].ID == searchID) {
            found = 1;
            printf("\nStudent Found:\n");
            printf("ID: %d\nName: %s %s\nAge: %d\nCGPA: %.2f\n",
                stlist[i].ID, stlist[i].fname, stlist[i].lname,
                stlist[i].age, stlist[i].cgpa);
            break;
        }
    }
    if (!found) printf("Invalid ID!\n");


    int youngest = 0;
    for (int i = 1; i < 5; i++)
        if (stlist[i].age < stlist[youngest].age)
            youngest = i;

    printf("\nYoungest Student: %s %s (Age: %d)\n",
        stlist[youngest].fname, stlist[youngest].lname, stlist[youngest].age);


    float highest = stlist[0].cgpa;
    for (int i = 1; i < 5; i++)
        if (stlist[i].cgpa > highest)
            highest = stlist[i].cgpa;

    printf("\nStudents with Highest CGPA (%.2f):\n", highest);
    for (int i = 0; i < 5; i++)
        if (stlist[i].cgpa == highest)
            printf("%s %s (ID: %d)\n",
                stlist[i].fname, stlist[i].lname, stlist[i].ID);


    printf("\nStudents whose first name is NOT John:\n");
    for (int i = 0; i < 5; i++)
        if (strcmp(stlist[i].fname, "John") != 0)
            printf("%s %s (ID: %d)\n",
                stlist[i].fname, stlist[i].lname, stlist[i].ID);

    return 0;
}
