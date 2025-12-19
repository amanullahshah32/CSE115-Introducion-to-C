#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Book_info
{
    char name[30];
    int id;
    int py;
    char author[20];
    int pp;
};
int main()
{
    int n,i;
    struct Book_info books[100];
    FILE*fp=fopen("input.txt","w");
    printf("Enter no. of books you want to give information about:");
    scanf("%d",&n);
    printf("Enter book info:-\n");
    getchar();
    for(i=0; i<n; i++)
    {
        printf("Enter book name:");
        gets(books[i].name);
        printf("Enter book id:");
        scanf("%d",&books[i].id);
        printf("Enter book publish year:");
        scanf("%d",&books[i].py);
        getchar();
        printf("Enter book author name(withouts spaces):");
        gets(books[i].author);
        printf("Enter book present price:");
        scanf("%d",&books[i].pp);
        getchar();

        fprintf(fp,"%s %d %d %s %d\n",books[i].name,books[i].id,books[i].py,books[i].author,books[i].pp);
    }
    fclose(fp);
    fp=fopen("input.txt","r");
    printf("\n\nBooks in Book Shop:-\n\n");
    i=0;
    while((fscanf(fp,"%s %d %d %s %d",books[i].name,&books[i].id,&books[i].py,books[i].author,&books[i].pp))==5)
    {
        printf("Book name:%s\n",books[i].name);
        printf("Book id:%d\n",books[i].id);
        printf("Book publish Year:%d\n",books[i].py);
        printf("Author name:%s\n",books[i].author);
        printf("Book Present price:%d\n",books[i].pp);
        i++;

    }
    struct Book_info book;
    fclose(fp);
    FILE *dickens,*nd;
    dickens=fopen("dickens.txt","w");
    nd=fopen("nd.txt","w");
    fp=fopen("input.txt","r");
    while((fscanf(fp,"%s %d %d %s %d",book.name,&book.id,&book.py,book.author,&book.pp))==5)
    {
        if(strcmp(book.author, "CharlesDickens")==0)
        {
            fprintf(dickens,"%s\n",book.name);
        }
        else
        {
            fprintf(nd,"%s\n",book.name);
        }
    }
    fclose(dickens);
    fclose(nd);
}

