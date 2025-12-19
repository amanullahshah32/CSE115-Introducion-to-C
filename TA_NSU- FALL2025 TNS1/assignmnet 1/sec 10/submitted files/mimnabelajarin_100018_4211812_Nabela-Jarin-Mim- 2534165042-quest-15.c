#include <stdio.h>
#include <string.h>
struct Student {
    int ID;
    char Name[50];
    float Cgpa;
    int Age;
    char Gender;
    char ContactNumber[20];
    char Address[100];
};

// a) Show students with CGPA > 3.5
void MoreGPA(struct Student arr[], int n) {
    printf("\nStudents with CGPA > 3.5:\n");
    for (int i = 0; i < n; i++) {
        if (arr[i].Cgpa > 3.5) {
            printf("ID: %d | Name: %s\n", arr[i].ID, arr[i].Name);
        }
    }
}

// b) Insert new student at the end
void insertNewStudent(struct Student arr[], int *n) {
    printf("\nEnter new student info:\n");
    printf("ID: ");
    scanf("%d",&arr[*n].ID);
    printf("Name: ");
    scanf("%s",arr[*n].Name);
    printf("CGPA: ");
    scanf("%f",&arr[*n].Cgpa);
    printf("Age: ");
    scanf("%d",&arr[*n].Age);
    printf("Gender: ");
    scanf(" %c",&arr[*n].Gender);
    printf("Contact Number: ");
    scanf("%s",arr[*n].ContactNumber);
    printf("Address: ");
    scanf("%s",arr[*n].Address);
    (*n)++;
}

// c) Delete student by name
void deleteByName(struct Student arr[], int *n, char name[]) {
    int index = -1;
  for (int i=0;i<*n;i++){
        if (strcmp(arr[i].Name,name)==0){
            index =i;
            break;}
    }
    if(index ==-1){
        printf("\nName not found! Cannot delete.\n");
        return;}
   for (int i = index; i < *n - 1; i++){
        arr[i] = arr[i + 1];}
(*n)--;
    printf("\nRecord deleted successfully.\n");
}

// d) Modify contact or address using ID
void modifyByID(struct Student arr[],int n,int id) {
    for (int i = 0; i < n; i++){
        if (arr[i].ID == id){

    printf("Enter new Contact Number: ");
    scanf("%s",arr[i].ContactNumber);

    printf("Enter new Address: ");
    scanf("%s",arr[i].Address);

    printf("\nRecord updated.\n");
    return;}
    }
    printf("\nID not found!\n");}
int main(){
    int n;
    struct Student arr[100];
    printf("Enter number of students: ");
    scanf("%d",&n);
    printf("\nEnter student information:\n");
    for (int i=0;i<n;i++){
        printf("\nStudent %d:\n", i + 1);
       printf("ID: ");
        scanf("%d",&arr[i].ID);
       printf("Name: ");
        scanf("%s",arr[i].Name);
        printf("CGPA: ");
        scanf("%f",&arr[i].Cgpa);
        printf("Age: ");
        scanf("%d",&arr[i].Age);
        printf("Gender: ");
        scanf(" %c", &arr[i].Gender);
        printf("Contact Number: ");
        scanf("%s",arr[i].ContactNumber);
        printf("Address: ");
        scanf("%s",arr[i].Address);
    }
    MoreGPA(arr, n);             // a) show all CGPA > 3.5

    insertNewStudent(arr, &n);   // b) insert a new student

    char nameToDelete[50];
    printf("\nEnter name to delete: ");
    scanf("%s", nameToDelete);
    deleteByName(arr, &n, nameToDelete);  // c) delete student

    int idModify;
    printf("\nEnter ID to modify: ");
    scanf("%d", &idModify);
    modifyByID(arr, n, idModify); // d) modify by ID
    return 0;
}
