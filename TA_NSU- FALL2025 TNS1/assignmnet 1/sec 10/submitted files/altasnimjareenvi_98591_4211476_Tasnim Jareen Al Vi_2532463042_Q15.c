#include<stdio.h>
#include<string.h>
struct student
{
    int ID;
    char Name[50];
    float CGPA;
    int Age;
    char Gender[10];
    char ContactNumber[20];
    char Address[100];
};
void showMaxCGPA(struct student st[],int n)
 {
   for(int i=0; i<n; i++)
   {
      if(st[i].CGPA>3.5)
      {
         printf("%d %s\n", st[i].ID, st[i].Name);
      }
   }
 }
int main()
{
    struct student st[100];
    int n, i;
    scanf("%d",&n);

    for(i =0; i<n; i++)
    {
        scanf("%d %s %f %d %s %s %s", &st[i].ID, &st[i].Name, &st[i].CGPA, &st[i].Age, &st[i].Gender, &st[i].ContactNumber, &st[i].Address);
    }

    showMaxCGPA(st, n);

    printf("Insert a new student:\n");
    scanf("%d %s %f %d %s %s %s", &st[n].ID, &st[n].Name, &st[n].CGPA, &st[n].Age, &st[n].Gender, &st[n].ContactNumber, &st[n].Address);
    n++;

    char delName[50];
    scanf("%s", delName);
    for(i=0; i<n; i++)
    {
        if(strcmp(st[i].Name,delName)==0)
        {
            for(int j=i; j<n-1;j++)
              {
                  st[j]=st[j+1];
              }
                  n--;
                  break;
        }
    }
    int id,c;
    scanf("%d", &id);
    for(i=0; i<n; i++)
    {
        if(st[i].ID==id)
        {
            scanf("%d",&c);
            if(c==1)
            {
                scanf("%s",st[i].ContactNumber);
            }
            else if(c==2)
            {
                scanf("%s",st[i].Address);
            }
            break;
        }
    }
  return 0;
}

