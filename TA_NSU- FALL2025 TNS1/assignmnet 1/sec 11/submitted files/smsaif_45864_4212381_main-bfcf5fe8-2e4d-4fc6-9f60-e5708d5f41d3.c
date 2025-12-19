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

void displayHighCgpa(struct Student arr[], int n) {
    for(int i=0; i<n; i++) if(arr[i].Cgpa > 3.5)
        printf("ID: %d, Name: %s\n", arr[i].ID, arr[i].Name);
}

void insertStudent(struct Student arr[], int *n) {
    printf("Enter new student info (ID Name Cgpa Age Gender Contact Address):\n");
    scanf("%d %s %f %d %s %s %s", &arr[*n].ID, arr[*n].Name, &arr[*n].Cgpa, &arr[*n].Age, arr[*n].Gender, arr[*n].ContactNumber, arr[*n].Address);
    (*n)++;
}

void deleteStudent(struct Student arr[], int *n, char name[]) {
    for(int i=0; i<*n; i++) {
        if(strcmp(arr[i].Name, name)==0) {
            for(int j=i; j<*n-1; j++) arr[j] = arr[j+1];
            (*n)--;
            printf("Deleted student %s\n", name);
            return;
        }
    }
    printf("Name not found!\n");
}

void modifyStudent(struct Student arr[], int n, int id) {
    for(int i=0; i<n; i++) {
        if(arr[i].ID == id) {
            printf("Enter new contact and address:\n");
            scanf("%s %s", arr[i].ContactNumber, arr[i].Address);
            printf("Updated record for ID %d\n", id);
            return;
        }
    }
    printf("ID not found!\n");
}

int main() {
    struct Student arr[100];
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        printf("Enter info (ID Name Cgpa Age Gender Contact Address):\n");
        scanf("%d %s %f %d %s %s %s", &arr[i].ID, arr[i].Name, &arr[i].Cgpa, &arr[i].Age, arr[i].Gender, arr[i].ContactNumber, arr[i].Address);
    }

    displayHighCgpa(arr, n);
    insertStudent(arr, &n);
    char delName[50];
    printf("Enter name to delete: ");
    scanf("%s", delName);
    deleteStudent(arr, &n, delName);

    int id;
    printf("Enter ID to modify: ");
    scanf("%d", &id);
    modifyStudent(arr, n, id);

    return 0;
}

