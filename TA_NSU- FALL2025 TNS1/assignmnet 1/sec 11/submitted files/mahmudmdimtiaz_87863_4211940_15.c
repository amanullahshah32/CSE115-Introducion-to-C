// Property of Imtiaz 2512169

#include <stdio.h>
#include <string.h>

struct Student
{
    int ID;
    char name[30];
    float cgpa;
    int age;
    char gender[10];
    char contact[20];
    char address[50];
};

// a. Display students with CGPA greater than 3.5
void highestCGPA(struct Student st[], int n)
{
    printf("\nStudents with CGPA more than 3.5:\n");
    for(int i=0; i<n; i++)
    {
        if(st[i].cgpa > 3.5)
        {
            printf("ID: %d, Name: %s\n", st[i].ID, st[i].name);
        }
    }
}

// b. Modify contact or address using ID
void modifyByID(struct Student st[], int n)
{
    int id;
    printf("\nEnter student ID to modify: ");
    scanf("%d", &id);
    
    for(int i=0; i<n; i++)
    {
        if(st[i].ID == id)
        {
            printf("Modify Contact Number: ");
            scanf("%s", st[i].contact);
            
            printf("Modify Address: ");
            scanf("%s", st[i].address);
            
            printf("Record updated successfully.\n");
            return;
        }
    }
}

int main()
{
    int n;
    struct Student st[100];
    
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    printf("\nEnter information of %d students:\n", n);
    for(int i=0; i<n; i++)
    {
        printf("\nStudent %d\n", i+1);
        printf("ID: ");
        scanf("%d", &st[i].ID);
        
        printf("Name: ");
        scanf("%s", st[i].name);
        
        printf("CGPA: ");
        scanf("%f", &st[i].cgpa);
        
        printf("Age: ");
        scanf("%d", &st[i].age);
        
        printf("Gender: ");
        scanf("%s", st[i].gender);
        
        printf("Contact Number: ");
        scanf("%s", st[i].contact);
        
        printf("Address: ");
        scanf("%s", st[i].address);
    }
    
    // Functions
    highestCGPA(st, n);
    modifyByID(st, n);
    
    return 0;
}

// Property of Imtiaz 2512169
