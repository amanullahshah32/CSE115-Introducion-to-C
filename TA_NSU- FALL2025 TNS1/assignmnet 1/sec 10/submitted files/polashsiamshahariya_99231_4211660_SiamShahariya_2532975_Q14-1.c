#include <stdio.h>
#include <string.h>

int main() {
    struct student {
        int ID;
        char fname[20];
        char lname[20];
        int age;
        float cgpa;
    } stlist[5];

    for (int i = 0; i < 5; i++) {
        printf("ID: ");
        scanf("%d", &stlist[i].ID);

        printf("First name: ");
        scanf(" %[^\n]", stlist[i].fname);

        printf("Last name: ");
        scanf(" %[^\n]", stlist[i].lname);

        printf("Age: ");
        scanf("%d", &stlist[i].age);

        printf("CGPA: ");
        scanf("%f", &stlist[i].cgpa);

        printf("\n");
    }

    int tar;
    printf("Enter the Target ID: ");
    scanf("%d", &tar);
    printf("\n");

    printf("1) Information of student by provided ID\n");

    int flag = 0, tarindex = -1;
    for (int i = 0; i < 5; i++) {
        if (tar == stlist[i].ID) {
            flag = 1;
            tarindex = i;
            break;
        }
    }

    if (flag == 1) {
        printf("First name: %s\n", stlist[tarindex].fname);
        printf("Last name: %s\n", stlist[tarindex].lname);
        printf("Age: %d\n", stlist[tarindex].age);
        printf("CGPA: %.2f\n", stlist[tarindex].cgpa);
        printf("\n");
    } else {
        printf("Invalid ID\n\n");
    }

    printf("2) The name of youngest student\n");
    int min = stlist[0].age, minindex = 0;

    for (int i = 1; i < 5; i++) {
        if (stlist[i].age < min) {
            min = stlist[i].age;
            minindex = i;
        }
    }

    printf("First name: %s\n", stlist[minindex].fname);
    printf("Last name: %s\n\n", stlist[minindex].lname);


    printf("3) Details of students with highest CGPA\n");
    float max = stlist[0].cgpa;

    for (int i = 1; i < 5; i++) {
        if (stlist[i].cgpa > max) {
            max = stlist[i].cgpa;
        }
    }

    for (int i = 0; i < 5; i++) {
        if (stlist[i].cgpa == max) {
            printf("ID: %d\n", stlist[i].ID);
            printf("First name: %s\n", stlist[i].fname);
            printf("Last name: %s\n", stlist[i].lname);
            printf("Age: %d\n", stlist[i].age);
            printf("CGPA: %.2f\n\n", stlist[i].cgpa);
        }
    }
    printf("4) Information of students whose first name is not John\n");

    for (int i = 0; i < 5; i++) {
        if (strcmp(stlist[i].fname, "John") != 0) {
            printf("ID: %d\n", stlist[i].ID);
            printf("First name: %s\n", stlist[i].fname);
            printf("Last name: %s\n", stlist[i].lname);
            printf("Age: %d\n", stlist[i].age);
            printf("CGPA: %.2f\n\n", stlist[i].cgpa);
        }
    }

    return 0;
}
