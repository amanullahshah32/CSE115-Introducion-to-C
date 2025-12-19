#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[20];
    float cgpa;
    int age;
    char gender[10];
    char cn[20];
    char adrs[100];
};
void display(struct student st[],int n)
{
    int i;
    printf("Students with CGPA higher than 3.5:\n");
    for(i=0; i<n; i++)
    {
        if(st[i].cgpa>3.5)
        {
            printf("Name:%s\n",st[i].name);
            printf("Id:%d\n",st[i].id);
            printf("\n");
        }
    }
}
int insertst(struct student st[],int n)
{
    printf("\nEnter id:");
    scanf("%d",&st[n].id);
    printf("Enter name:");
    scanf("%s",st[n].name);
    printf("Enter CGPA:");
    scanf("%f",&st[n].cgpa);
    printf("Enter age:");
    scanf("%d",&st[n].age);
    printf("Enter Gender:");
    scanf("%s",st[n].gender);
    printf("Enter Contact Number:");
    scanf("%s",st[n].cn);
    printf("Enter address:");
    scanf(" %[^\n]",st[n].adrs);
    printf("\n");
    return n+1;
}
int deletest(struct student st[],int n,char name[])
{
    int i,j,flag=0;
    for(i=0; i<n; i++)
    {
        if(strcmp(st[i].name,name)==0)
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        for(j=i; j<n-1; j++)
        {
            st[j]=st[j+1];
        }
        printf("\nStudent deleted succesfully!!");
        return n-1;
    }
    else
    {
        printf("\nStudents not found.");
        return n;
    }
}
void modst(struct student st[],int n,int sk)
{
    int flag=0,fdex=0,op,i;
    for(i=0; i<n; i++)
    {
        if(st[i].id==sk)
        {
            flag=1;
            fdex=i;
            break;
        }
    }
    if(flag)
    {
        printf("Press 1 to modify Contact Number.\n");
        printf("Press 2 to modify Address.\n");
        scanf("%d",&op);
        if(op==1)
        {
            printf("Enter new Contact Number:");
            scanf("%s",st[fdex].cn);
        }
        else if(op==2)
        {
            printf("Enter new address:");
            scanf(" %[^\n]",st[fdex].adrs);
        }
        else
        {
            printf("\nInvalid input.");
        }
    }
    else
    {
        printf("ID not found.");
    }
}
int main()
{
    int n,op,sk;
    char name[20];
    printf("Enter number of students n:");
    scanf("%d",&n);
    struct student st[100];
    for(int i=0; i<n; i++)
    {
        printf("Enter id:");
        scanf("%d",&st[i].id);
        printf("Enter name:");
        scanf("%s",st[i].name);
        printf("Enter CGPA:");
        scanf("%f",&st[i].cgpa);
        printf("Enter age:");
        scanf("%d",&st[i].age);
        printf("Enter Gender:");
        scanf("%s",st[i].gender);
        printf("Enter Contact Number:");
        scanf("%s",st[i].cn);
        printf("Enter address:");
        scanf(" %[^\n]",st[i].adrs);
        printf("\n");
    }
    do
    {
        printf("\n \n Menu \n \n");
        printf("Press 1 for  CGPA more than 3.5.\n");
        printf("Press 2 to insert a new student information.\n");
        printf("Press 3 to delete student information.\n");
        printf("Press 4 to modify contact number/address.\n");
        printf("Press 5 to exit.\n");
        scanf("%d",&op);
        switch(op)
        {
        case 1:
            display(st,n);
            break;
        case 2:
            n=insertst(st,n);
            break;
        case 3:
            printf("Enter name to delete:");
            scanf(" %[^\n]",name);
            n=deletest(st,n,name);
            break;
        case 4:
            printf("Enter id to serach:");
            scanf("%d",&sk);
            modst(st,n,sk);
            break;
        case 5:
            break;
        default:
            printf("Invalid input.");
        }
    }
    while(op!=5);
}


