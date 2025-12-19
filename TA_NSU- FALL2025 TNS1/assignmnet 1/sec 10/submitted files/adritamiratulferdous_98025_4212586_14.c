#include <stdio.h>
#include <string.h>

struct student {
    int id, age;
    float cgpa;
    char fname[20], lname[20];
};

int main() {
    struct student s[5];
    int searchID;

    for (int i = 0; i < 5; i++) {
        scanf("%d %s %s %d %f",
              &s[i].id, s[i].fname, s[i].lname,
              &s[i].age, &s[i].cgpa);
    }

    scanf("%d", &searchID);
    int found = 0;

    for (int i = 0; i < 5; i++) {
        if (s[i].id == searchID) {
            printf("%s %s", s[i].fname, s[i].lname);
            found = 1;
        }
    }

    if (!found)
        printf("Invalid ID");
