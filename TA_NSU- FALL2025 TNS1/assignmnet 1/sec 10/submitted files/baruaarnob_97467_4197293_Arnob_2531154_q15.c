#include <stdio.h>
#include <string.h>

struct Student {
    int ID; char Name[50]; float Cgpa; int Age;
    char Gender, Contact[20], Address[100];
};

void high(struct Student s[], int n){
    for(int i=0;i<n;i++)
        if(s[i].Cgpa>3.5) printf("%d %s\n",s[i].ID,s[i].Name);
}

void insert(struct Student s[], int *n){
    scanf("%d %s %f %d %c %s %s",
          &s[*n].ID,s[*n].Name,&s[*n].Cgpa,&s[*n].Age,
          &s[*n].Gender,s[*n].Contact,s[*n].Address);
    (*n)++;
}

void del(struct Student s[], int *n, char name[]){
    for(int i=0;i<*n;i++)
        if(strcmp(s[i].Name,name)==0){
            for(int j=i;j<*n-1;j++) s[j]=s[j+1];
            (*n)--; break;
        }
}

void modify(struct Student s[], int n, int id){
    for(int i=0;i<n;i++)
        if(s[i].ID==id) scanf("%s %s",s[i].Contact,s[i].Address);
}

int main(){
    int n; scanf("%d",&n);
    struct Student s[100];

    for(int i=0;i<n;i++)
        scanf("%d %s %f %d %c %s %s",
              &s[i].ID,s[i].Name,&s[i].Cgpa,&s[i].Age,
              &s[i].Gender,s[i].Contact,s[i].Address);

    int op;
    while(scanf("%d",&op)){
        if(op==1) high(s,n);
        else if(op==2) insert(s,&n);
        else if(op==3){ char x[50]; scanf("%s",x); del(s,&n,x); }
        else if(op==4){ int id; scanf("%d",&id); modify(s,n,id); }
        else break;
    }
}
