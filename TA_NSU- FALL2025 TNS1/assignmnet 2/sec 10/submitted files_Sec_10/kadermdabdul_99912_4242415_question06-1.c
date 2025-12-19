#include<stdio.h>
#include<string.h>

struct Book_info
{
    char name[50];
    int id;
    int year;
    char author[50];
    float price;
};

int main()
{
    int n;
    struct Book_info b[100];

    printf("Enter number of books: ");
    scanf("%d",&n);

    FILE *fp = fopen("input.txt","w");

    for(int i=0;i<n;i++)
    {
        scanf(" %[^\n]", b[i].name);
        scanf("%d",&b[i].id);
        scanf("%d",&b[i].year);
        scanf(" %[^\n]", b[i].author);
        scanf("%f",&b[i].price);

        fprintf(fp,"%s %d %d %s %.2f\n",
                b[i].name,b[i].id,b[i].year,
                b[i].author,b[i].price);
    }
    fclose(fp);

    fp = fopen("input.txt","r");
    FILE *f1 = fopen("charles.txt","w");
    FILE *f2 = fopen("not_charles.txt","w");

    while(fscanf(fp,"%s %d %d %s %f",
                 b[0].name,&b[0].id,&b[0].year,
                 b[0].author,&b[0].price) != EOF)
    {
        if(strcmp(b[0].author,"Charles Dickens")==0)
            fprintf(f1,"%s\n",b[0].name);
        else
            fprintf(f2,"%s\n",b[0].name);
    }

    fclose(fp);
    fclose(f1);
    fclose(f2);

    return 0;
}