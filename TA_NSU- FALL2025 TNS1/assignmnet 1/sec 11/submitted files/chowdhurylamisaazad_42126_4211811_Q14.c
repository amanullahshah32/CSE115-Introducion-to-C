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
    for (int i = 0; i < 5; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

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

    printf("\nStudent Records:\n");
    printf("ID\tFirst Name\tLast Name\tAge\tCGPA\n");

    for (int i = 0; i < 5; i++) {
        printf("%d\t%s\t\t%s\t\t%d\t%.2f\n",
               stlist[i].ID,
               stlist[i].fname,
               stlist[i].lname,
               stlist[i].age,
               stlist[i].cgpa);
    }

    return 0;
}

