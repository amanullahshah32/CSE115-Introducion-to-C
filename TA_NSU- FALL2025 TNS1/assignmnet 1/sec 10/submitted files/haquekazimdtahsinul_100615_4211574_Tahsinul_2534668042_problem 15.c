#include <stdio.h>
struct Student {
    int ID;
    char Name[50];
    float Cgpa;
    int Age;
    char Gender;
    char ContactNumber[15];
    char Address[100];
};
void displayHighCGPA(struct Student students[], int n);
void insertStudent(struct Student students[], int *n);
void deleteStudent(struct Student students[], int *n);
void modifyStudent(struct Student students[], int n);

int compareStrings(char str1[], char str2[]);
void copyString(char dest[], char src[]);
int stringLength(char str[]);

int main() {
    struct Student students[100];
    int n = 0;
    int choice;

    printf("Enter number of students to add initially: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\n=== Student %d ===\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &students[i].ID);
        getchar();

        printf("Enter Name: ");
        int j = 0;
        char ch;
        while ((ch = getchar()) != '\n' && j < 49) {
            students[i].Name[j++] = ch;
        }
        students[i].Name[j] = '\0';

        printf("Enter CGPA: ");
        scanf("%f", &students[i].Cgpa);

        printf("Enter Age: ");
        scanf("%d", &students[i].Age);

        printf("Enter Gender (M/F): ");
        scanf(" %c", &students[i].Gender);
        getchar();

        printf("Enter Contact Number: ");
        j = 0;
        while ((ch = getchar()) != '\n' && j < 14) {
            students[i].ContactNumber[j++] = ch;
        }
        students[i].ContactNumber[j] = '\0';

        printf("Enter Address: ");
        j = 0;
        while ((ch = getchar()) != '\n' && j < 99) {
            students[i].Address[j++] = ch;
        }
        students[i].Address[j] = '\0';
    }

    do {
        printf("\n=== STUDENT MANAGEMENT SYSTEM ===\n");
        printf("1. Display students with CGPA > 3.5\n");
        printf("2. Insert new student\n");
        printf("3. Delete student by name\n");
        printf("4. Modify contact/address by ID\n");
        printf("5. Display all students\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayHighCGPA(students, n);
                break;
            case 2:
                insertStudent(students, &n);
                break;
            case 3:
                deleteStudent(students, &n);
                break;
            case 4:
                modifyStudent(students, n);
                break;
            case 5:
                printf("\n=== ALL STUDENTS ===\n");
                for (int i = 0; i < n; i++) {
                    printf("ID: %d, Name: %s, CGPA: %.2f, Age: %d, Gender: %c\n",
                           students[i].ID, students[i].Name, students[i].Cgpa,
                           students[i].Age, students[i].Gender);
                }
                break;
            case 6:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 6);

    return 0;
}
void displayHighCGPA(struct Student students[], int n) {
    printf("\n=== Students with CGPA > 3.5 ===\n");
    int found = 0;

    for (int i = 0; i < n; i++) {
        if (students[i].Cgpa > 3.5) {
            printf("ID: %d, Name: %s\n", students[i].ID, students[i].Name);
            found = 1;
        }
    }

    if (!found) {
        printf("No students found with CGPA > 3.5\n");
    }
}

void insertStudent(struct Student students[], int *n) {
    if (*n >= 100) {
        printf("Cannot insert! Maximum capacity reached (100 students).\n");
        return;
    }

    printf("\n=== Insert New Student ===\n");
    int i = *n;

    printf("Enter ID: ");
    scanf("%d", &students[i].ID);
    getchar();

    printf("Enter Name: ");
    int j = 0;
    char ch;
    while ((ch = getchar()) != '\n' && j < 49) {
        students[i].Name[j++] = ch;
    }
    students[i].Name[j] = '\0';

    printf("Enter CGPA: ");
    scanf("%f", &students[i].Cgpa);

    printf("Enter Age: ");
    scanf("%d", &students[i].Age);

    printf("Enter Gender (M/F): ");
    scanf(" %c", &students[i].Gender);
    getchar();

    printf("Enter Contact Number: ");
    j = 0;
    while ((ch = getchar()) != '\n' && j < 14) {
        students[i].ContactNumber[j++] = ch;
    }
    students[i].ContactNumber[j] = '\0';

    printf("Enter Address: ");
    j = 0;
    while ((ch = getchar()) != '\n' && j < 99) {
        students[i].Address[j++] = ch;
    }
    students[i].Address[j] = '\0';

    (*n)++;
    printf("Student added successfully! Total students: %d\n", *n);
}


void deleteStudent(struct Student students[], int *n) {
    if (*n == 0) {
        printf("No students to delete!\n");
        return;
    }

    printf("\n=== Delete Student ===\n");
    char searchName[50];

    printf("Enter name of student to delete: ");
    getchar();
    int j = 0;
    char ch;
    while ((ch = getchar()) != '\n' && j < 49) {
        searchName[j++] = ch;
    }
    searchName[j] = '\0';

    int foundIndex = -1;

    for (int i = 0; i < *n; i++) {
        if (compareStrings(students[i].Name, searchName)) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex == -1) {
        printf("Student '%s' not found!\n", searchName);
        return;
    }
    printf("Deleting student: %s (ID: %d)\n", students[foundIndex].Name, students[foundIndex].ID);

    for (int i = foundIndex; i < *n - 1; i++) {
        students[i].ID = students[i + 1].ID;
        copyString(students[i].Name, students[i + 1].Name);
        students[i].Cgpa = students[i + 1].Cgpa;
        students[i].Age = students[i + 1].Age;
        students[i].Gender = students[i + 1].Gender;
        copyString(students[i].ContactNumber, students[i + 1].ContactNumber);
        copyString(students[i].Address, students[i + 1].Address);
    }

    (*n)--;
    printf("Student deleted successfully! Total students: %d\n", *n);
}
void modifyStudent(struct Student students[], int n) {
    if (n == 0) {
        printf("No students available!\n");
        return;
    }

    printf("\n=== Modify Student ===\n");
    int searchID, foundIndex = -1;

    printf("Enter student ID: ");
    scanf("%d", &searchID);

    for (int i = 0; i < n; i++) {
        if (students[i].ID == searchID) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex == -1) {
        printf("Student with ID %d not found!\n", searchID);
        return;
    }

    int choice;
    printf("\nStudent found: %s (ID: %d)\n", students[foundIndex].Name, searchID);
    printf("What do you want to modify?\n");
    printf("1. Contact Number\n");
    printf("2. Address\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    getchar();

    if (choice == 1) {
        printf("Current Contact: %s\n", students[foundIndex].ContactNumber);
        printf("Enter new Contact Number: ");
        int j = 0;
        char ch;
        while ((ch = getchar()) != '\n' && j < 14) {
            students[foundIndex].ContactNumber[j++] = ch;
        }
        students[foundIndex].ContactNumber[j] = '\0';
        printf("Contact number updated!\n");
    }
    else if (choice == 2) {
        printf("Current Address: %s\n", students[foundIndex].Address);
        printf("Enter new Address: ");
        int j = 0;
        char ch;
        while ((ch = getchar()) != '\n' && j < 99) {
            students[foundIndex].Address[j++] = ch;
        }
        students[foundIndex].Address[j] = '\0';
        printf("Address updated!\n");
    }
    else {
        printf("Invalid choice!\n");
    }
}
int compareStrings(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 1;
    }
    return 0;
}

void copyString(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int stringLength(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}
