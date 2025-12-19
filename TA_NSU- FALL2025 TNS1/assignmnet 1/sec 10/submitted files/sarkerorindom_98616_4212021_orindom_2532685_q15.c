#include <stdio.h>
#include <string.h>


struct Student {
int ID;
char Name[50];
float Cgpa;
int Age;
char Gender;
char ContactNumber[20];
char Address[50];
};


void displayHighCGPA(struct Student arr[], int n) {
int i;
printf("\n--- (a) Students with CGPA > 3.5 ---\n");
for(i = 0; i < n; i++) {
if(arr[i].Cgpa > 3.5) {
printf("ID: %d, Name: %s\n", arr[i].ID, arr[i].Name);
}
}
}


void insertStudent(struct Student arr[], int *n) {

int i = *n;

printf("\n--- (b) Insert New Student ---\n");

printf("Enter ID: ");
scanf("%d", &arr[i].ID);
printf("Enter Name: ");
scanf("%s", arr[i].Name);
printf("Enter CGPA: ");
scanf("%f", &arr[i].Cgpa);
printf("Enter Age: ");
scanf("%d", &arr[i].Age);
printf("Enter Gender (M/F): ");
scanf(" %c", &arr[i].Gender);
printf("Enter Contact Number: ");
scanf("%s", arr[i].ContactNumber);
printf("Enter Address: ");
scanf("%s", arr[i].Address);

*n = *n + 1;
printf("New student inserted successfully!\n");
}


void deleteByName(struct Student arr[], int *n) {
char targetName[50];
int i, j, found = 0;

printf("\n--- (c) Delete Student ---\n");
printf("Enter name to delete: ");
scanf("%s", targetName);

for(i = 0; i < *n; i++) {

if(strcmp(arr[i].Name, targetName) == 0) {

for(j = i; j < *n - 1; j++) {
arr[j] = arr[j + 1];
}
*n = *n - 1;
found = 1;
printf("Student %s deleted.\n", targetName);
break;
}
}
if(found == 0) {
printf("Student not found.\n");
}
}


void modifyRecord(struct Student arr[], int n) {
int targetID, i, found = 0;
int choice;

printf("\n--- (d) Modify Record ---\n");
printf("Enter ID to search: ");
scanf("%d", &targetID);

for(i = 0; i < n; i++) {
if(arr[i].ID == targetID) {
found = 1;
printf("Student Found: %s\n", arr[i].Name);
printf("1. Modify Contact Number\n");
printf("2. Modify Address\n");
printf("Enter choice: ");
scanf("%d", &choice);

if(choice == 1) {
printf("Enter new Contact Number: ");
scanf("%s", arr[i].ContactNumber);
} else if(choice == 2) {
printf("Enter new Address: ");
scanf("%s", arr[i].Address);
}
printf("Record updated successfully.\n");
break;
}
}
if(found == 0) {
printf("ID not found.\n");
}
}

int main() {
struct Student s[100];
int n, i;


printf("How many students to enter initially? ");
scanf("%d", &n);

for(i = 0; i < n; i++) {
printf("\nEnter details for Student %d:\n", i + 1);
printf("ID: "); scanf("%d", &s[i].ID);
printf("Name: "); scanf("%s", s[i].Name);
printf("CGPA: "); scanf("%f", &s[i].Cgpa);
printf("Age: "); scanf("%d", &s[i].Age);
printf("Gender: "); scanf(" %c", &s[i].Gender);
printf("Contact: "); scanf("%s", s[i].ContactNumber);
printf("Address: "); scanf("%s", s[i].Address);
}


displayHighCGPA(s, n);

insertStudent(s, &n);
deleteByName(s, &n);

modifyRecord(s, n);

return 0;
}
