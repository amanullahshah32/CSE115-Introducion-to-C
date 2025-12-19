#include <stdio.h>
#include<string.h>
struct Book_info
{
    char name[80];
    int id;
    int year;
    char author[80];
    float price;
};

int main()
{
    struct Book_info books[100];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d Name: ", i+1);
        scanf(" %s", books[i].name);

        printf("ID: ");
        scanf("%d", &books[i].id);

        printf("Publish Year: ");
        scanf("%d", &books[i].year);

        printf("Author: ");
        scanf(" %s", books[i].author);

        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    FILE *fp = fopen("book.info.txt", "w");
    for(i = 0; i < n; i++)
    {
        fprintf(fp, "%s,%d,%d,%s,%.2f\n",books[i].name,books[i].id,books[i].year,books[i].author,books[i].price);
    }
    fclose(fp);


    fp = fopen("book.info.txt", "r");
    printf("\nBooks Available:\n");

    for(i = 0; i < n; i++)
    {
        fscanf(fp, "%[^,],%d,%d,%[^,],%f\n",books[i].name,&books[i].id,&books[i].year,books[i].author,&books[i].price);

        printf("Name: %s | Author: %s | ID: %d\n",books[i].name,books[i].author,books[i].id);
    }
    fclose(fp);


    fp = fopen("book.info.txt", "r");
    FILE *fd = fopen("Dickens.txt", "w");

    for(i = 0; i < n; i++)
    {
        fscanf(fp, "%[^,],%d,%d,%[^,],%f\n",books[i].name,&books[i].id,&books[i].year,books[i].author,&books[i].price);

        if(strcmp(books[i].author, "Charles Dickens") == 0)
            fprintf(fd, "%s\n", books[i].name);
    }
    fclose(fp);
    fclose(fd);

    fp = fopen("book.info.txt", "r");
    FILE *fnd = fopen("Not_Dickens.txt", "w");

    for(i = 0; i < n; i++)
    {
        fscanf(fp, "%[^,],%d,%d,%[^,],%f\n",books[i].name,&books[i].id,&books[i].year,books[i].author,&books[i].price);

        if(strcmp(books[i].author, "Charles Dickens") != 0)
            fprintf(fnd, "%s\n", books[i].name);
    }
    fclose(fp);
    fclose(fnd);

    return 0;
}
