#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Create a structure called Student with the following members: ID, Name, CgpaAge,
Gender, ContactNumber and Address. Assume that there will be maximum of 100
students in the array.
Populate the array with information of n number of students (the number n is to be
provided by user). [You may write a menu driven program or you may make function
calls from main().You may not declare the array of structure as global variable.]
a) Write a function to display id and names of all students who have a CGPA more than
3.5 in the n number of students in the array
b)Write a function to insert a new student information at the end of n number of students
in the array
c)Write a function to delete student information given a name by the user [Consider all
names are unique]
d) Write a function to modify contact number or address of a record given the ID number
of a student.
*/


struct Student {
    int ID;
    char Name[50];
    float Cgpa;
    int Age;
    char Gender[10];
    char ContactNumber[20];
    char Address[100];
};

// a) Display students with CGPA > 3.5
void showHighCgpa(struct Student st[], int n) {
    int i;
    printf("\nStudents with CGPA > 3.5:\n");
    for(i = 0; i < n; i++) {
        if(st[i].Cgpa > 3.5) {
            printf("ID: %d, Name: %s\n", st[i].ID, st[i].Name);
        }
    }
}

// b) Insert at end
void insertStudent(struct Student st[], int *n) {
    printf("\nEnter new student info (ID Name Cgpa Age Gender Contact Address):\n");
    scanf("%d %s %f %d %s %s %s",
          &st[*n].ID, st[*n].Name, &st[*n].Cgpa, &st[*n].Age,
          st[*n].Gender, st[*n].ContactNumber, st[*n].Address);

    (*n)++; // increase count
}

// c) Delete student by name
void deleteByName(struct Student st[], int *n, char name[]) {
    int i, index = -1;

    for(i = 0; i < *n; i++) {
        if(strcmp(st[i].Name, name) == 0) {
            index = i;
            break;
        }
    }

    if(index == -1) {
        printf("\nName not found!\n");
        return;
    }

    // shift left
    for(i = index; i < *n - 1; i++) {
        st[i] = st[i+1];
    }
    (*n)--;

    printf("Record deleted.\n");
}

// d) Modify contact or address by ID
void modifyStudent(struct Student st[], int n, int id) {
    int i;

    for(i = 0; i < n; i++) {
        if(st[i].ID == id) {
            printf("Modify (1) Contact or (2) Address? ");
            int ch; scanf("%d", &ch);

            if(ch == 1) {
                printf("Enter new contact: ");
                scanf("%s", st[i].ContactNumber);
            } else {
                printf("Enter new address: ");
                scanf("%s", st[i].Address);
            }
            printf("Record updated.\n");
            return;
        }
    }
    printf("Invalid ID!\n");
}

int main() {
    struct Student stlist[100];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input
    for(i = 0; i < n; i++) {
        printf("\nEnter info: ID Name Cgpa Age Gender Contact Address:\n");
        scanf("%d %s %f %d %s %s %s",
              &stlist[i].ID, stlist[i].Name, &stlist[i].Cgpa,
              &stlist[i].Age, stlist[i].Gender,
              stlist[i].ContactNumber, stlist[i].Address);
    }

    // Example operations
    showHighCgpa(stlist, n);

    insertStudent(stlist, &n);

    char delName[50];
    printf("\nEnter name to delete: ");
    scanf("%s", delName);
    deleteByName(stlist, &n, delName);

    int id;
    printf("\nEnter ID to modify: ");
    scanf("%d", &id);
    modifyStudent(stlist, n, id);

    return 0;
}
