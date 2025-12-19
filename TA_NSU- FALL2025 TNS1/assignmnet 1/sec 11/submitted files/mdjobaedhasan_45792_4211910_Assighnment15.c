#include <stdio.h>
#include <string.h>

struct Student {
    int ID;
    char Name[30];
    float Cgpa;
    int Age;
    char Gender[10];
    char Contact[20];
    char Address[50];
};

// a) //

void showHighCGPA(struct Student st[], int n) {
    printf("\n Students with CGPA > 3.5 :\n");
    for(int i = 0; i < n; i++)
        {
        if(st[i].Cgpa > 3.5)
        {
            printf("ID: %d, Name: %s\n", st[i].ID, st[i].Name);
        }
    }
}

// b)  //

int insertStudent(struct Student st[], int n) {
        printf("\n Enter new student details :\n");
        printf(" ID : ");
        scanf("%d", &st[n].ID);
        printf("Name: ");
        scanf("%s", st[n].Name);
        printf("CGPA: ");
        scanf("%f", &st[n].Cgpa);
        printf("Age: ");
        scanf("%d", &st[n].Age);
        printf("Gender: ");
        scanf("%s", st[n].Gender);
        printf("Contact Number: ");
        scanf("%s", st[n].Contact);
        printf("Address: ");
        scanf("%s", st[n].Address);
        printf("Student added successfully!\n");

    return n + 1;


// c) //

int deleteByName(struct Student st[], int n, char name[])
{
    int index = -1;

    for(int i = 0; i < n; i++)
     {
        if(strcmp(st[i].Name, name) == 0)
            {
            index = i;
            break;
        }
    }
    if(index == -1)
        {
        printf(" Name not found! \n");
        return n;
        }

    for(int i = index; i < n - 1; i++)
        {
        st[i] = st[i + 1];
        }

    printf("Record deleted successfully.\n");

    return n - 1;
}

// d)//

void modifyInfo(struct Student st[], int n, int id)
 {
    for(int i = 0; i < n; i++)
        {
        if(st[i].ID == id)
        {

            printf("Enter new contact number: ");
            scanf("%s", st[i].Contact);
            printf("Enter new address: ");
            scanf("%s", st[i].Address);

printf("Record updated successfully.\n");
            return;
        }
    }

    printf("ID not found!\n");
}

//

int main() {

    struct Student s[100];   // max 100 students
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("\nEnter student information:\n");
    for(int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &s[i].ID);

        printf("Name: ");
        scanf("%s", s[i].Name);

        printf("CGPA: ");
        scanf("%f", &s[i].Cgpa);

        printf("Age: ");
        scanf("%d", &s[i].Age);

        printf("Gender: ");
        scanf("%s", s[i].Gender);

        printf("Contact Number: ");
        scanf("%s", s[i].Contact);

        printf("Address: ");
        scanf("%s", s[i].Address);
    }

    int choice;
    char delName[30];
    int modID;

    while(1) {

        printf("\n\n----- MENU -----\n");
        printf("1. Show all students with CGPA > 3.5\n");
        printf("2. Insert new student\n");
        printf("3. Delete student by name\n");
        printf("4. Modify contact/address by ID\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            showHighCGPA(s, n);
        }
        else if(choice == 2) {
            n = insertStudent(s, n);
        }
        else if(choice == 3) {
            printf("Enter name to delete: ");
            scanf("%s", delName);
            n = deleteByName(s, n, delName);
        }
        else if(choice == 4) {
            printf("Enter ID to modify: ");
            scanf("%d", &modID);
            modifyInfo(s, n, modID);
        }
        else if(choice == 5) {
            break;
        }
        else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
