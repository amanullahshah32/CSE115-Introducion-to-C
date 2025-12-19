#include <stdio.h>
#include <stdlib.h>
#define MAX 100



struct Book_info
{
    int id;
    char name[50];
    char author[50];
    int publish_year;
    float price;
};

int main()
{
    struct Book_info books[MAX];
    int n;


    printf("Enter number of books (max 100): ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("\nBook %d\n",i + 1);
        printf("ID: ");
        scanf("%d", &books[i].id);

        printf("Name:");
        scanf(" %[^\n]", books[i].name);

        printf("Author:");
        scanf(" %[^\n]", books[i].author);

        printf("Publish Year: ");
        scanf("%d", &books[i].publish_year);

        printf("Price:");
        scanf("%f",&books[i].price);
    }

    FILE *fp =fopen("input.txt", "w");
    for(int i =0; i< n;i++)
    {
        fprintf(fp, "%d\n%s\n%s\n%d\n%.2f\n",
                books[i].id,
        books[i].name,
        books[i].author,
                books[i].publish_year,
        books[i].price);
    }
    fclose(fp);

    fp = fopen("input.txt", "r");
    printf("\nBooks available in record system:\n");
    printf("ID\tName\t\tAuthor\n");

    for(int i = 0; i < n; i++)
    {
        fscanf(fp, "%d\n", &books[i].id);
        fgets(books[i].name,50, fp);
        books[i].name[strcspn(books[i].name, "\n")] = 0;
        fgets(books[i].author, 50,fp);
        books[i].author[strcspn(books[i].author, "\n")] = 0;
        fscanf(fp, "%d\n", &books[i].publish_year);
        fscanf(fp, "%f\n", &books[i].price);

        printf("%d\t%s\t\t%s\n",
               books[i].id,
               books[i].name,
               books[i].author);
    }
    fclose(fp);


    FILE *fd= fopen("dickens.txt", "w");
    for(int i=0; i < n;i++)
    {
        if(strcmp(books[i].author, "Charles Dickens") == 0)
        {
            fprintf(fd, "%s\n",books[i].name);
        }
    }
    fclose(fd);


    FILE *fnd = fopen("not_dickens.txt","w");
    for(int i = 0; i < n; i++)
    {
        if(strcmp(books[i].author,"Charles Dickens") != 0)
        {
            fprintf(fn"%s\n", books[i].name);
        }
    }
    fclose(fnd);

    printf("\nData processing completed successfully.\n");

    return 0;
}


