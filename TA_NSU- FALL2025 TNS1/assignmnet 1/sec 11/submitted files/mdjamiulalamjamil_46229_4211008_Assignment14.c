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
    int i, searchID, found, youngestIndex, maxCGPAIndex;
    float maxCGPA;

    // Input records
    for(i = 0; i < 5; i++) {
        printf("\nEnter details for student %d:\n", i+1);
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

    // 1) Search by ID
    printf("\nEnter ID to search: ");
    scanf("%d", &searchID);

    found = 0;
    for(i = 0; i < 5; i++) {
        if(stlist[i].ID == searchID) {
            printf("Student Found:\n");
            printf("ID: %d, Name: %s %s, Age: %d, CGPA: %.2f\n",
                   stlist[i].ID, stlist[i].fname, stlist[i].lname,
                   stlist[i].age, stlist[i].cgpa);
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("Invalid ID! No student found.\n");
    }

    // 2) Youngest student
    youngestIndex = 0;
    for(i = 1; i < 5; i++) {
        if(stlist[i].age < stlist[youngestIndex].age) {
            youngestIndex = i;
        }
    }
    printf("\nYoungest student: %s %s (Age: %d)\n",
           stlist[youngestIndex].fname, stlist[youngestIndex].lname,
           stlist[youngestIndex].age);

    // 3) Highest CGPA
    maxCGPA = stlist[0].cgpa;
    maxCGPAIndex = 0;
    printf("\nStudent(s) with highest CGPA:\n");

    // Find max CGPA
    for(i = 1; i < 5; i++) {
        if(stlist[i].cgpa > maxCGPA) {
            maxCGPA = stlist[i].cgpa;
        }
    }

    // Display all with max CGPA
    for(i = 0; i < 5; i++) {
        if(stlist[i].cgpa == maxCGPA) {
            printf("ID: %d, Name: %s %s, CGPA: %.2f\n",
                   stlist[i].ID, stlist[i].fname, stlist[i].lname,
                   stlist[i].cgpa);
        }
    }

    // 4) Not named John
    printf("\nStudents not named John:\n");
    for(i = 0; i < 5; i++) {
        // Check if first name is NOT John (case insensitive)
        if(!(stlist[i].fname[0] == 'J' || stlist[i].fname[0] == 'j') ||
           !(stlist[i].fname[1] == 'o' || stlist[i].fname[1] == 'O') ||
           !(stlist[i].fname[2] == 'h' || stlist[i].fname[2] == 'H') ||
           !(stlist[i].fname[3] == 'n' || stlist[i].fname[3] == 'N') ||
           stlist[i].fname[4] != '\0') {
            printf("ID: %d, Name: %s %s\n",
                   stlist[i].ID, stlist[i].fname, stlist[i].lname);
        }
    }

    return 0;
}
