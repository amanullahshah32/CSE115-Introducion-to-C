#include <stdio.h>
#include <string.h>

struct Student {
    int ID;
    char Name[50];
    float Cgpa;
    int Age;
    char Gender[10];
    char ContactNumber[20];
    char Address[100];
};

/* Function Prototypes */
void showAbove3_5(struct Student arr[], int n);
void insertStudent(struct Student arr[], int *n);
void deleteStudent(struct Student arr[], int *n, char name[]);
void modifyStudent(struct Student arr[], int n, int id);

int main() {
    struct Student st[100];
    int n, choice, id;
    char name[50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        printf("\nEnter info for student %d\n", i+1);
        printf("ID: ");
        scanf("%d", &st[i].ID);
        printf("Name: ");
        scanf("%s", st[i].Name);
        printf("CGPA: ");
        scanf("%f", &st[i].Cgpa);
        printf("Age: ");
        scanf("%d", &st[i].Age);
        printf("Gender: ");
        scanf("%s", st[i].Gender);
        printf("Contact Number: ");
        scanf("%s", st[i].ContactNumber);
        printf("Address: ");
        scanf("%s", st[i].Address);
    }

    while(1){
        printf("\nMENU:\n");
        printf("1. Display students with CGPA > 3.5\n");
        printf("2. Insert new student\n");
        printf("3. Delete student by name\n");
        printf("4. Modify contact or address by ID\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                showAbove3_5(st, n);
                break;
            case 2:
                insertStudent(st, &n);
                break;
            case 3:
                printf("Enter name to delete: ");
                scanf("%s", name);
                deleteStudent(st, &n, name);
                break;
            case 4:
                printf("Enter ID to modify: ");
                scanf("%d", &id);
                modifyStudent(st, n, id);
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
}

/* Part (a) */
void showAbove3_5(struct Student arr[], int n){
    printf("\nStudents with CGPA > 3.5:\n");
    int found = 0;

    for(int i=0; i<n; i++){
        if(arr[i].Cgpa > 3.5){
            printf("ID: %d, Name: %s\n", arr[i].ID, arr[i].Name);
            found = 1;
        }
    }

    if(!found)
        printf("No student found.\n");
}

/* Part (b) */
void insertStudent(struct Student arr[], int *n){
    printf("\nEnter new student information:\n");
    printf("ID: ");
    scanf("%d", &arr[*n].ID);
    printf("Name: ");
    scanf("%s", arr[*n].Name);
    printf("CGPA: ");
    scanf("%f", &arr[*n].Cgpa);
    printf("Age: ");
    scanf("%d", &arr[*n].Age);
    printf("Gender: ");
    scanf("%s", arr[*n].Gender);
    printf("Contact Number: ");
    scanf("%s", arr[*n].ContactNumber);
    printf("Address: ");
    scanf("%s", arr[*n].Address);

    (*n)++;
    printf("Student added.\n");
}

/* Part (c) */
void deleteStudent(struct Student arr[], int *n, char name[]){
    int index = -1;

    for(int i=0; i<*n; i++){
        if(strcmp(arr[i].Name, name) == 0){
            index = i;
            break;
        }
    }

    if(index == -1){
        printf("Name not found.\n");
        return;
    }

    for(int i=index; i<(*n)-1; i++){
        arr[i] = arr[i+1];
    }

    (*n)--;

    printf("Record deleted.\n");
}

/* Part (d) */
void modifyStudent(struct Student arr[], int n, int id){
    int index = -1, choice;

    for(int i=0; i<n; i++){
        if(arr[i].ID == id){
            index = i;
            break;
        }
    }

    if(index == -1){
        printf("ID not found.\n");
        return;
    }

    printf("Modify:\n1. Contact Number\n2. Address\nEnter choice: ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Enter new contact number: ");
        scanf("%s", arr[index].ContactNumber);
    }
    else if(choice == 2){
        printf("Enter new address: ");
        scanf("%s", arr[index].Address);
    }
    else{
        printf("Invalid choice.\n");
    }

    printf("Record updated.\n");
}

