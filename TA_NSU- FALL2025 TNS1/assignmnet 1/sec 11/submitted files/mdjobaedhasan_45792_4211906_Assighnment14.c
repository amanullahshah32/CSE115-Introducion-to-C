#include <stdio.h>

struct student
 {
    int ID;
    char fname[20];
    char lname[20];
    int age;
    float cgpa;
};

int main() {

    struct student s[5];

    printf("Enter records of 5 students : \n");

    for(int i = 0; i < 5; i++)
        {
        printf("\nStudent %d:\n", i+1);
        printf("ID : ");
        scanf("%d", &s[i].ID);
        printf("First name: ");
        scanf("%s", s[i].fname);
        printf("Last name: ");
        scanf("%s", s[i].lname);
        printf("Age: ");
        scanf("%d", &s[i].age);
        printf("CGPA: ");
        scanf("%f", &s[i].cgpa);
    }

    // 1) Info of student ID

    int searchID;
    printf("\n Enter ID to search : ");
    scanf("%d", &searchID);

    int found = 0;
    for(int i = 0; i < 5; i++)
        {
        if(s[i].ID == searchID)
         {
            printf("Student found: %s %s, Age %d, CGPA %.2f\n",
                   s[i].fname, s[i].lname, s[i].age, s[i].cgpa);
            found = 1;
            break;
        }
    }

    if(!found) printf("Invalid ID!\n");

    // 2) Name of the youngest student

    int minAge = s[0].age, idx = 0;
    for(int i = 1; i < 5; i++)
        if(s[i].age < minAge)
            {
            minAge = s[i].age;
            idx = i;
        }

    printf("\n Youngest student : %s %s\n", s[idx].fname, s[idx].lname);


    // 3) Student(s) with highest CGPA

    float maxCG = s[0].cgpa;
    for(int i = 1; i < 5; i++)

        if(s[i].cgpa > maxCG)
            maxCG = s[i].cgpa;

    printf("\nStudents with highest CGPA:\n");
    for(int i = 0; i < 5; i++)

        if(s[i].cgpa == maxCG)
            printf("%s %s (%.2f)\n", s[i].fname, s[i].lname, s[i].cgpa);

    // 4) Students whose first name is NOT "John"

    printf("\nStudents whose first name is not John:\n");

    for(int i = 0; i < 5; i++)

        if(!(s[i].fname[0]=='J' && s[i].fname[1]=='o'
          && s[i].fname[2]=='h' && s[i].fname[3]=='n'
          && s[i].fname[4]=='\0'))

            printf("%s %s\n", s[i].fname, s[i].lname);

    return 0;
}
