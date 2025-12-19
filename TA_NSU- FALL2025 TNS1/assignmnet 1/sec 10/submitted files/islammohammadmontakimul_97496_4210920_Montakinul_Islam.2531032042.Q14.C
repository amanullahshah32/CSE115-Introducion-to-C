#include <stdio.h>
struct student {
    int ID;
    char fname[20];
    char lname[20];
    int age;
    float cgpa;
};

int main() {
    struct student stlist[5];
    printf(" Enter records for 5 students \n");
    for (int i=0;i<5;i++) {
        printf("\n Student %d:\n",i+1);
        printf("Enter ID:");
        scanf("%d",&stlist[i].ID);
        printf("Enter First Name:");
        scanf("%s",stlist[i].fname);
        printf("Enter Last Name:");
        scanf("%s",stlist[i].lname);
        printf("Enter Age:");
        scanf("%d",&stlist[i].age);
        printf("Enter CGPA:");
        scanf("%f",&stlist[i].cgpa);
    }
    printf("\n Search Student by ID \n");
    int searchID,found=0;
    printf("Enter ID to search: ");
    scanf("%d",&searchID);
    for(int i=0;i<5;i++) {
        if(stlist[i].ID==searchID) {
            printf("\nStudent Found:\n");
            printf("ID: %d,Name:%s %s,Age:%d,CGPA:%.2f\n",
                   stlist[i].ID,stlist[i].fname,stlist[i].lname,
                   stlist[i].age,stlist[i].cgpa);
            found=1;
            break;
        }
    }
    if(!found) {
        printf("Error: Invalid ID! No student found with ID %d\n",searchID);
    }
    printf("\n Youngest Student \n");
    int minAge=stlist[0].age;
    char youngestName[40];
    int k=0;
    for(int j=0;stlist[0].fname[j]!='\0';j++) {
        youngestName[k++]=stlist[0].fname[j];
    }
    youngestName[k++] =' ';
    for(int j=0;stlist[0].lname[j]!='\0';j++) {
        youngestName[k++]=stlist[0].lname[j];
    }
    youngestName[k]='\0';

    for(int i=1;i<5;i++) {
        if(stlist[i].age<minAge) {
            minAge=stlist[i].age;
            k=0;
            for(int j=0;stlist[i].fname[j] !='\0';j++) {
                youngestName[k++]=stlist[i].fname[j];
            }
            youngestName[k++] =' ';
            for(int j=0;stlist[i].lname[j]!='\0';j++) {
                youngestName[k++]=stlist[i].lname[j];
            }
            youngestName[k]='\0';
        }
    }
    printf("Youngest student: %s (Age: %d)\n",youngestName,minAge);
    printf("\n Student(s) with Highest CGPA \n");
    float maxCGPA=stlist[0].cgpa;
    for(int i=1;i<5;i++) {
        if(stlist[i].cgpa>maxCGPA) {
            maxCGPA=stlist[i].cgpa;
        }
    }
    for(int i=0;i<5;i++) {
        if(stlist[i].cgpa==maxCGPA) {
            printf("ID:%d,Name: %s %s,Age:%d,CGPA:%.2f\n",
                   stlist[i].ID,stlist[i].fname,stlist[i].lname,
                   stlist[i].age,stlist[i].cgpa);
        }
    }
    printf("\n Students whose first name is NOT John \n");
    int count=0;
    for(int i=0;i<5;i++)
    {
        char john[]="John";
        int isJohn=1;
        for(int j=0;j<4;j++)
        {
            if(stlist[i].fname[j]!=john[j])
            {
                isJohn=0;
                break;
            }
        }
        if(isJohn&&stlist[i].fname[4]=='\0')
        {
            isJohn=1;
        } else
        {
            isJohn=0;
        }
        if(!isJohn)
        {
            printf("ID:%d,Name:%s %s,Age:%d,CGPA:%.2f\n",
                   stlist[i].ID,stlist[i].fname,stlist[i].lname,
                   stlist[i].age,stlist[i].cgpa);
            count++;
        }
    }
    if(count==0)
    {
        printf("All students have first name 'John'\n");
    }
    return 0;
}
