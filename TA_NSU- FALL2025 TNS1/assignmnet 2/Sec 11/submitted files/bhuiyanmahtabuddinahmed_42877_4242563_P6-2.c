#include <stdio.h>
#include <string.h>

struct Book_info
{
    int id;
    char name[100];
    char author[100];
    int year;
    float price;
};

int main()
{
    struct Book_info book[100];
    int n;

    printf("Enter number of books");
    scanf("%d",&n);
    getchar();

    //a

    for(int i=0;i<n;i++)
    {
        printf("Enter book %d name ",i+1);

        fgets(book[i].name,100,stdin);

        book[i].name[strcspn(book[i].name,"\n")]=0;

        printf("Enter author name");

        fgets(book[i].author,100,stdin);

        book[i].author[strcspn(book[i].author,"\n")]=0;

        printf("Enter book id");
        scanf("%d",&book[i].id);

        printf("Enter publish year");
        scanf("%d",&book[i].year);

        printf("Enter price ");
        scanf("%f",&book[i].price);
        getchar();
    }

    //b

    FILE *fp;
    fp = fopen("input.txt","w");

    for(int i=0;i<n;i++)
    {
        fprintf(fp,"%d\n",book[i].id);
        fprintf(fp,"%s\n",book[i].name);
        fprintf(fp,"%s\n",book[i].author);
        fprintf(fp,"%d\n",book[i].year);
        fprintf(fp,"%f\n",book[i].price);
    }

    fclose(fp);

    //c

    printf("Books available");

    fp = fopen("input.txt","r");

    struct Book_info temp;
    for(int i=0;i<n;i++)
    {
        fscanf(fp,"%d\n",&temp.id);
        fgets(temp.name,100,fp);
        temp.name[strcspn(temp.name,"\n")]=0;
        fgets(temp.author,100,fp);
        temp.author[strcspn(temp.author,"\n")]=0;
        fscanf(fp,"%d \n",&temp.year);
        fscanf(fp,"%f \n",&temp.price);

        printf("Nameis  %s | Author  %s | ID %d\n",temp.name,temp.author,temp.id);
    }

    fclose(fp);

    //d,e

    FILE *fd,*fnd;
    fp = fopen("input.txt","r");
    fd = fopen("dickens.txt","w");
    fnd = fopen("not_dickens.txt","w");

    for(int i=0;i<n;i++)
    {
        fscanf(fp,"%d\n",&temp.id);
        fgets(temp.name,100,fp);

        temp.name[strcspn(temp.name,"\n")]=0;
        fgets(temp.author,100,fp);

        temp.author[strcspn(temp.author,"\n")]=0;
        fscanf(fp,"%d\n",&temp.year);
        fscanf(fp,"%f\n",&temp.price);

        if(strcmp(temp.author,"Charles Dickens")==0)
            fprintf(fd,"%s\n",temp.name);
        else
            fprintf(fnd,"%s\n",temp.name);
    }

    fclose(fp);
    fclose(fd);
    fclose(fnd);

    printf("\nFiles created successfully\n");

    return 0;
}

