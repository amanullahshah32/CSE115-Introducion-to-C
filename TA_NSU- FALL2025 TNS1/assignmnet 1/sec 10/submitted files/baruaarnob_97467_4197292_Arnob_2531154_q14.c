#include <stdio.h>
struct student{int ID;char fname[20];char lname[20];int age;float cgpa;};
int main(){struct student s[5];
for(int i=0;i<5;i++)scanf("%d %s %s %d %f",&s[i].ID,s[i].fname,s[i].lname,&s[i].age,&s[i].cgpa);
int id;scanf("%d",&id);int f=0;
for(int i=0;i<5;i++)if(s[i].ID==id){printf("Found %s %s",s[i].fname,s[i].lname);f=1;}
if(!f)printf("Invalid ID");
int y=0;for(int i=1;i<5;i++)if(s[i].age<s[y].age)y=i;printf("Youngest=%s",s[y].fname);
float mx=s[0].cgpa;for(int i=1;i<5;i++)if(s[i].cgpa>mx)mx=s[i].cgpa;
for(int i=0;i<5;i++)if(s[i].cgpa==mx)printf("%d %s
",s[i].ID,s[i].fname);
for(int i=0;i<5;i++)if(strcmp(s[i].fname,"John")!=0)printf("%s
",s[i]
