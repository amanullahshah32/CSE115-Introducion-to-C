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
        printf("Student %d\n", i+1);
        printf("Enter ID: ");
        scanf("%d", &stlist[i].ID);
        getchar(); // consume leftover newline

        printf("Enter first name: ");
        fgets(stlist[i].fname, sizeof(stlist[i].fname), stdin);
        stlist[i].fname[strcspn(stlist[i].fname, "\n")] = '\0';

        printf("Enter last name: ");
        fgets(stlist[i].lname, sizeof(stlist[i].lname), stdin);
        stlist[i].lname[strcspn(stlist[i].lname, "\n")] = '\0';

        printf("Enter age: ");
        scanf("%d", &stlist[i].age);

        printf("Enter CGPA: ");
        scanf("%f", &stlist[i].cgpa);
        getchar();
    }

    int SearchID, found = 0;
    printf("Enter an ID to search: ");
    scanf("%d", &SearchID);

    for(i = 0; i < 5; i++) {
        if(stlist[i].ID == SearchID) {
            found = 1;
            printf("Student found\n");
            printf("ID: %d\n", stlist[i].ID);
            printf("Name: %s %s\n", stlist[i].fname, stlist[i].lname);
            printf("Age: %d\n", stlist[i].age);
            printf("CGPA: %.2f\n", stlist[i].cgpa);
            break;
        }
    }
    if(!found) {
        printf("\nError: Invalid ID!\n");
    }

    int youngest = 0;
    for(i = 1; i < 5; i++) {
        if(stlist[i].age < stlist[youngest].age) {
            youngest = i;
        }
    }

    printf("\nYoungest student: Age %d, Name: %s %s\n", stlist[youngest].age, stlist[youngest].fname, stlist[youngest].lname);

    float maxcgpa = stlist[0].cgpa;
    for(i = 1; i < 5; i++) {
        if(stlist[i].cgpa > maxcgpa) {
            maxcgpa = stlist[i].cgpa;
        }
    }

    printf("\nStudent(s) with highest CGPA %.2f:\n", maxcgpa);
    for(i = 0; i < 5; i++) {
        if(stlist[i].cgpa == maxcgpa) {
            printf("ID: %d, Name: %s %s, Age: %d, CGPA: %.2f\n", stlist[i].ID, stlist[i].fname, stlist[i].lname, stlist[i].age, stlist[i].cgpa);
        }
    }

    printf("\nStudents whose first name is not John:\n");
    for(i = 0; i < 5; i++) {
        if(strcmp(stlist[i].fname, "John") != 0) {
            printf("ID: %d, Name: %s %s, Age: %d, CGPA: %.2f\n", stlist[i].ID, stlist[i].fname, stlist[i].lname, stlist[i].age, stlist[i].cgpa);
        }
    }

    return 0;
}
