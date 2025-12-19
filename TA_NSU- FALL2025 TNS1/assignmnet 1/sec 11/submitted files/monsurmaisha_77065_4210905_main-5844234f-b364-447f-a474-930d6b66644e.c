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

    printf("Enter data for 5 students:\n");
    for(i=0; i<5; i++) {
        printf("ID: "); scanf("%d", &stlist[i].ID);
        printf("First Name: "); scanf("%s", stlist[i].fname);
        printf("Last Name: "); scanf("%s", stlist[i].lname);
        printf("Age: "); scanf("%d", &stlist[i].age);
        printf("CGPA: "); scanf("%f", &stlist[i].cgpa);
    }

    // 1) Search by ID
    int searchID, found = 0;
    printf("Enter ID to search: ");
    scanf("%d", &searchID);

    for(i=0; i<5; i++) {
        if(stlist[i].ID == searchID) {
            found = 1;
            printf("Student found: %s %s, Age %d, CGPA %.2f\n",
                   stlist[i].fname, stlist[i].lname, stlist[i].age, stlist[i].cgpa);
        }
    }
    if(!found) printf("Invalid ID!\n");

    // 2) Youngest student
    int minAge = stlist[0].age;
    for(i=1; i<5; i++)
        if(stlist[i].age < minAge)
            minAge = stlist[i].age;

    printf("Youngest student(s):\n");
    for(i=0; i<5; i++)
        if(stlist[i].age == minAge)
            printf("%s %s\n", stlist[i].fname, stlist[i].lname);

    // 3) Highest CGPA
    float maxCG = stlist[0].cgpa;
    for(i=1; i<5; i++)
        if(stlist[i].cgpa > maxCG)
            maxCG = stlist[i].cgpa;

    printf("Highest CGPA student(s):\n");
    for(i=0; i<5; i++)
        if(stlist[i].cgpa == maxCG)
            printf("%s %s\n", stlist[i].fname, stlist[i].lname);

    // 4) First name not John
    printf("Students whose first name is not John:\n");
    for(i=0; i<5; i++)
        if(strcmp(stlist[i].fname, "John") != 0)
            printf("%s %s\n", stlist[i].fname, stlist[i].lname);


    return 0;
}
