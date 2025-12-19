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


    for (i = 0; i < 5; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &stlist[i].ID);
        printf("First name: ");
        scanf("%19s", stlist[i].fname);
        printf("Last name: ");
        scanf("%19s", stlist[i].lname);
        printf("Age: ");
        scanf("%d", &stlist[i].age);
        printf("CGPA: ");
        scanf("%f", &stlist[i].cgpa);
    }


    int searchID;
    int found = 0;
    printf("\nEnter ID to search: ");
    scanf("%d", &searchID);
    for (i = 0; i < 5; i++) {
        if (stlist[i].ID == searchID) {
            printf("Student found:\n");
            printf("ID: %d\n", stlist[i].ID);
            printf("Name: %s %s\n", stlist[i].fname, stlist[i].lname);
            printf("Age: %d\n", stlist[i].age);
            printf("CGPA: %.2f\n", stlist[i].cgpa);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Error: Invalid ID\n");
    }


    int min_age_index = 0;
    for (i = 1; i < 5; i++) {
        if (stlist[i].age < stlist[min_age_index].age) {
            min_age_index = i;
        }
    }
    printf("\nYoungest student: %s %s (Age %d)\n",
           stlist[min_age_index].fname,
           stlist[min_age_index].lname,
           stlist[min_age_index].age);


    int max_cg_index = 0;
    for (i = 1; i < 5; i++) {
        if (stlist[i].cgpa > stlist[max_cg_index].cgpa) {
            max_cg_index = i;
        }
    }
    float max_cgpa = stlist[max_cg_index].cgpa;
    printf("\nStudent(s) with highest CGPA (%.2f):\n", max_cgpa);
    for (i = 0; i < 5; i++) {
        if (stlist[i].cgpa == max_cgpa) {
            printf("ID: %d, Name: %s %s, Age: %d, CGPA: %.2f\n",
                   stlist[i].ID, stlist[i].fname, stlist[i].lname,
                   stlist[i].age, stlist[i].cgpa);
        }
    }


    printf("\nStudents whose first name is NOT John:\n");
    int any = 0;
    for (i = 0; i < 5; i++) {
        if (strcmp(stlist[i].fname, "John") != 0) {
            printf("ID: %d, Name: %s %s, Age: %d, CGPA: %.2f\n",
                   stlist[i].ID, stlist[i].fname, stlist[i].lname,
                   stlist[i].age, stlist[i].cgpa);
            any = 1;
        }
    }
    if (!any) {
        printf("None\n");
    }

    return 0;
}
