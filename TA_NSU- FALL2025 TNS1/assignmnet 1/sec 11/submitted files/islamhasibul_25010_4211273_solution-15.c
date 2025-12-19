#include<stdio.h>
#include<string.h>
struct Student{
    int ID;
    char Name[50];
    float CgpaAge;
    char Gender[10];
    char ContactNumber[20];
    char Address[100];
};
void showHigh(struct Student s[],int n){
    int i;
    for(i=0;i<n;i++) if(s[i].CgpaAge>3.5) printf("%d %s\n",s[i].ID,s[i].Name);
}
void insertEnd(struct Student s[],int *n){
    scanf("%d%s%f%s%s",&s[*n].ID,s[*n].Name,&s[*n].CgpaAge,s[*n].Gender,s[*n].ContactNumber);
    scanf(" %[^\n]",s[*n].Address);
    (*n)++;
}
void deleteName(struct Student s[],int *n,char nm[]){
    int i,j;
    for(i=0;i<*n;i++){
        if(strcmp(s[i].Name,nm)==0){
            for(j=i;j<*n-1;j++) s[j]=s[j+1];
            (*n)--;
            break;
        }
    }
}
void modifyInfo(struct Student s[],int n,int id){
    int i;
    for(i=0;i<n;i++){
        if(s[i].ID==id){
            scanf("%s",s[i].ContactNumber);
            scanf(" %[^\n]",s[i].Address);
            break;
        }
    }
}
int main(){
    struct Student st[100];
    int n,i,id;
    char name[50];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%s%f%s%s",&st[i].ID,st[i].Name,&st[i].CgpaAge,st[i].Gender,st[i].ContactNumber);
        scanf(" %[^\n]",st[i].Address);
    }
    showHigh(st,n);
    insertEnd(st,&n);
    scanf("%s",name);
    deleteName(st,&n,name);
    scanf("%d",&id);
    modifyInfo(st,n,id);
}