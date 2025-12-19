#include<stdio.h>
#include<string.h>
struct student{
    int ID;
    char fname[20];
    char lname[20];
    int age;
    float cgpa;
};
int main(){
    struct student s[5];
    int i,id,f=0,y=0;
    float m;
    for(i=0;i<5;i++)
        scanf("%d%s%s%d%f",&s[i].ID,s[i].fname,s[i].lname,&s[i].age,&s[i].cgpa);
    scanf("%d",&id);
    for(i=0;i<5;i++){
        if(s[i].ID==id){
            printf("%d %s %s %d %.2f\n",s[i].ID,s[i].fname,s[i].lname,s[i].age,s[i].cgpa);
            f=1;
        }
    }
    if(!f) printf("Invalid ID\n");
    for(i=1;i<5;i++) if(s[i].age<s[y].age) y=i;
    printf("%s\n",s[y].fname);
    m=s[0].cgpa;
    for(i=1;i<5;i++) if(s[i].cgpa>m) m=s[i].cgpa;
    for(i=0;i<5;i++) if(s[i].cgpa==m) printf("%d %s %s %d %.2f\n",s[i].ID,s[i].fname,s[i].lname,s[i].age,s[i].cgpa);
    for(i=0;i<5;i++) if(strcmp(s[i].fname,"John")!=0) printf("%d %s %s %d %.2f\n",s[i].ID,s[i].fname,s[i].lname,s[i].age,s[i].cgpa);
}