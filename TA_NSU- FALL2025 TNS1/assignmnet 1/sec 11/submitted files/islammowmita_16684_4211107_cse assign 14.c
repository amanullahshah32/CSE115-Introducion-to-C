#include <stdio.h>

struct student {
    int ID;
    char fname[20];
    char lname[20];
    int age;
    float cgpa;
};

int main() {
    struct student stlist[5];
    int i, id, youngestAge = 9999;
    float maxCgpa = 0;

    printf("Enter records of 5 students:\n");
    for(i = 0; i < 5; i++) {
        printf("Student %d:\n", i+1);
        printf("ID: "); scanf("%d", &stlist[i].ID);
        printf("First Name: "); scanf("%s", stlist[i].fname);
        printf("Last Name: "); scanf("%s", stlist[i].lname);
        printf("Age: "); scanf("%d", &stlist[i].age);
        printf("CGPA: "); scanf("%f", &stlist[i].cgpa);
        if(stlist[i].age < youngestAge) youngestAge = stlist[i].age;
        if(stlist[i].cgpa > maxCgpa) maxCgpa = stlist[i].cgpa;
    }


    printf("\nEnter ID to search: ");
    scanf("%d", &id);

    int found = 0;
    for(i = 0; i < 5; i++) {
        if(stlist[i].ID == id) {
            found = 1;
            printf("Student Found:\n");
            printf("%d %s %s %d %.2f\n", stlist[i].ID, stlist[i].fname, stlist[i].lname, stlist[i].age, stlist[i].cgpa);
        }
    }
    if(!found) printf("Invalid ID!\n");


    printf("\nYoungest Student(s):\n");
    for(i = 0; i < 5; i++)
        if(stlist[i].age == youngestAge)
            printf("%s %s\n", stlist[i].fname, stlist[i].lname);


    printf("\nHighest CGPA Student(s):\n");
    for(i = 0; i < 5; i++)
        if(stlist[i].cgpa == maxCgpa)
            printf("%d %s %s %d %.2f\n", stlist[i].ID, stlist[i].fname, stlist[i].lname, stlist[i].age, stlist[i].cgpa);


    printf("\nStudents whose first name is not John:\n");
    for(i = 0; i < 5; i++)
        if(!(stlist[i].fname[0]=='J'&&stlist[i].fname[1]=='o'&&stlist[i].fname[2]=='h'&&stlist[i].fname[3]=='n'&&stlist[i].fname[4]=='\0'))
            printf("%s %s\n", stlist[i].fname, stlist[i].lname);

    return 0;
}
