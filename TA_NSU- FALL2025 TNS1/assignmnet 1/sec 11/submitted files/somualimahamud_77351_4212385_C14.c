struct student {
    int ID;
    char fname[20];
    char lname[20];
    int age;
    float cgpa;
};
#include <stdio.h>
#include <string.h>
int main() {
    struct student s[5];
    int id, youngest = 0;
    float maxCgpa = 0;

    printf("Enter data for 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &s[i].ID);
        printf("First Name: ");
        scanf("%s", s[i].fname);
        printf("Last Name: ");
        scanf("%s", s[i].lname);
        printf("Age: ");
        scanf("%d", &s[i].age);
        printf("CGPA: ");
        scanf("%f", &s[i].cgpa);
    }

    printf("\nEnter ID to search: ");
    scanf("%d", &id);
    int found = 0;
    for (int i = 0; i < 5; i++) {
        if (s[i].ID == id) {
            found = 1;
            printf("Student found: %s %s, CGPA: %.2f\n", s[i].fname, s[i].lname, s[i].cgpa);
        }
    }
    if (!found)
    {
        printf("Invalid ID\n");
    }

    for (int i = 1; i < 5; i++) {
        if (s[i].age < s[youngest].age)
        {
            youngest = i;

        }
    }
    printf("\nYoungest student: %s %s\n", s[youngest].fname, s[youngest].lname);

    for (int i = 0; i < 5; i++) {
        if (s[i].cgpa > maxCgpa)
            {
                maxCgpa = s[i].cgpa;
            }
    }
    printf("\nStudents with highest CGPA:\n");
    for (int i = 0; i < 5; i++) {
        if (s[i].cgpa == maxCgpa)
        {
            printf("%s %s (CGPA %.2f)\n", s[i].fname, s[i].lname, s[i].cgpa);

        }
    }
    printf("\nStudents whose first name is NOT John:\n");
    for (int i = 0; i < 5; i++) {
        if (strcmp(s[i].fname, "John") != 0)
        {
            printf("%s %s\n", s[i].fname, s[i].lname);

        }
    }

    return 0;
}

