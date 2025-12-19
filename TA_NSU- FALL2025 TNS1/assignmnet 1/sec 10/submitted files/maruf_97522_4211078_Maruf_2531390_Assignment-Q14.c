#include <stdio.h>
struct student {
    int ID;
    char fname[20];
    char lname[20];
    int age;
    float cgpa;
};

int main(){
    struct student stlist[5];
    int i;
    printf("Enter information of 5 students:\n");
    for(i=0;i<5;i++){
        printf("\nFor No. %d Student:\n",i+1);
        printf("Enter ID:");
        scanf("%d",&stlist[i].ID);
        printf("Enter First Name:");
        scanf("%s",stlist[i].fname);
        printf("Enteer Last Name:");
        scanf("%s",stlist[i].lname);
        printf("Enter Age:");
        scanf("%d",&stlist[i].age);
        printf("Enter CGPA:");
        scanf("%f",&stlist[i].cgpa);

    }
    int searchID;
    printf("\nEnter ID to search:");
    scanf("%d",&searchID);
    int found=0;
    for(i=0;i<5;i++){
        if(stlist[i].ID==searchID)
        {
            printf("\nStudent Found:\n");
            printf("ID:%d\n",stlist[i].ID);
            printf("Name:%s %s\n",stlist[i].fname,stlist[i].lname);
            printf("Age:%d\n",stlist[i].age);
            printf("CGPA:%.2f\n",stlist[i].cgpa);
            found=1;
            break;
        }
    }
    if(!found)
        printf("Invalid ID.\n");
    int minAge=stlist[0].age;
    int min=0;
    for(i=1;i<5;i++)
    {
        if(stlist[i].age<minAge){
            minAge=stlist[i].age;
            min=i;
        }


    }
    printf("\nYoungest student:%s %s(Age:%d)\n",stlist[min].fname, stlist[min].lname, stlist[min].age);
    float maxCGPA=stlist[0].cgpa;
    for(i=1;i<5;i++){
        if(stlist[i].cgpa>maxCGPA)
            maxCGPA=stlist[i].cgpa;
    }
    printf("\nStudent(s) with highest CGPA(%.2f):\n",maxCGPA);
    for(i=0;i<5;i++){
        if(stlist[i].cgpa==maxCGPA){
            printf("\nID:%d\n",stlist[i].ID);
            printf("Name:%s %s\n",stlist[i].fname,stlist[i].lname);
            printf("Age:%d\n",stlist[i].age);
            printf("CGPA:%.2f\n",stlist[i].cgpa);

        }


    }
    printf("\nStudents whose first name is NOT John:\n");
    for(i=0;i<5;i++){
        int isJohn=1;
        char t1[]="John";
        for(int k=0;t1[k]!='\0' || stlist[i].fname[k]!='\0';k++){
            if(t1[k]!=stlist[i].fname[k]){
                isJohn=0;
                break;
            }
        }
        if(!isJohn){
            printf("%s %s(ID:%d)\n",stlist[i].fname,stlist[i].lname,stlist[i].ID);
        }

    }




}

