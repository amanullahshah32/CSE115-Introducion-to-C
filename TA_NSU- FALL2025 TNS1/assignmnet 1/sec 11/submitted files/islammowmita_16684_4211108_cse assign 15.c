#include <stdio.h>

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
    printf("\nStudents with CGPA > 3.5:\n");
    for(int i = 0; i < n; i++)
        if(arr[i].Cgpa > 3.5)
            printf("%d %s\n", arr[i].ID, arr[i].Name);
}


int insertStudent(struct Student arr[], int n) {
    printf("\nEnter new student info:\n");

    printf("ID: "); scanf("%d", &arr[n].ID);
    printf("Name: "); scanf("%s", arr[n].Name);
    printf("CGPA: "); scanf("%f", &arr[n].Cgpa);
    printf("Age: "); scanf("%d", &arr[n].Age);
    printf("Gender: "); scanf("%s", arr[n].Gender);
    printf("Contact: "); scanf("%s", arr[n].ContactNumber);
    printf("Address: "); scanf("%s", arr[n].Address);

    return n + 1;
}


int deleteByName(struct Student arr[], int n, char name[]) {
    int pos = -1;
    for(int i = 0; i < n; i++) {
        int j = 0;
        int match = 1;
        while(arr[i].Name[j] != '\0' || name[j] != '\0') {
            if(arr[i].Name[j] != name[j]) {
                match = 0; break;
            }
            j++;
        }
        if(match) { pos = i; break; }
    }

    if(pos == -1) {
        printf("Name not found.\n");
        return n;
    }

    for(int i = pos; i < n-1; i++)
        arr[i] = arr[i+1];

    return n - 1;
}


void modifyByID(struct Student arr[], int n, int id) {
    for(int i = 0; i < n; i++) {
        if(arr[i].ID == id) {
            printf("Modify Contact or Address?\n1.Contact\n2.Address\nChoice: ");
            int ch; scanf("%d", &ch);

            if(ch == 1) {
                printf("New Contact: ");
                scanf("%s", arr[i].ContactNumber);
            }
            else if(ch == 2) {
                printf("New Address: ");
                scanf("%s", arr[i].Address);
            }
            return;
        }
    }
    printf("ID not found.\n");
}

int main() {
    struct Student arr[100];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Student %d:\n", i+1);
        printf("ID: "); scanf("%d", &arr[i].ID);
        printf("Name: "); scanf("%s", arr[i].Name);
        printf("CGPA: "); scanf("%f", &arr[i].Cgpa);
        printf("Age: "); scanf("%d", &arr[i].Age);
        printf("Gender: "); scanf("%s", arr[i].Gender);
        printf("Contact: "); scanf("%s", arr[i].ContactNumber);
        printf("Address: "); scanf("%s", arr[i].Address);
    }

    displayHighCgpa(arr, n);

    n = insertStudent(arr, n);

    char delName[50];
    printf("\nEnter name to delete: ");
    scanf("%s", delName);
    n = deleteByName(arr, n, delName);

    int id;
    printf("\nEnter ID to modify contact/address: ");
    scanf("%d", &id);
    modifyByID(arr, n, id);

    return 0;
}
