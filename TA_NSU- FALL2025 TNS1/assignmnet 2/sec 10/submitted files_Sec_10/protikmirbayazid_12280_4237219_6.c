#include <stdio.h>
#include <string.h>

#define MAX 100

struct Book_info
{
    int id;
    char name[100];
    char author[100];
    int publish_year;
    float price;
};

int main()
{
    struct Book_info books[MAX];
    int n, i;

    FILE *fp, *fp_dickens, *fp_not_dickens;


    printf("Enter number of books (max 100): ");
    scanf("%d", &n);
    getchar();


    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &books[i].id);
        getchar();

        printf("Book Name: ");
        gets(books[i].name);

        printf("Author Name: ");
        gets(books[i].author);

        printf("Publish Year: ");
        scanf("%d", &books[i].publish_year);

        printf("Present Price: ");
        scanf("%f", &books[i].price);
        getchar();
    }


    fp = fopen("input.txt", "w");
    if (fp == NULL)
    {
        printf("File cannot be opened.\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        fprintf(fp, "%d\n%s\n%s\n%d\n%.2f\n",
                books[i].id,
                books[i].name,
                books[i].author,
                books[i].publish_year,
                books[i].price);
    }

    fclose(fp);

    printf("\nBooks available in the record system:\n");

    fp = fopen("input.txt", "r");

    while (fscanf(fp, "%d\n", &books[0].id) != EOF)
    {
        fgets(books[0].name, 100, fp);
        fgets(books[0].author, 100, fp);
        fscanf(fp, "%d\n", &books[0].publish_year);
        fscanf(fp, "%f\n", &books[0].price);

        books[0].name[strcspn(books[0].name, "\n")] = '\0';
        books[0].author[strcspn(books[0].author, "\n")] = '\0';

        printf("ID: %d | Name: %s | Author: %s\n",
               books[0].id,
               books[0].name,
               books[0].author);
    }

    fclose(fp);


    fp = fopen("input.txt", "r");
    fp_dickens = fopen("charles_dickens.txt", "w");
    fp_not_dickens = fopen("not_charles_dickens.txt", "w");

    while (fscanf(fp, "%d\n", &books[0].id) != EOF)
    {
        fgets(books[0].name, 100, fp);
        fgets(books[0].author, 100, fp);
        fscanf(fp, "%d\n", &books[0].publish_year);
        fscanf(fp, "%f\n", &books[0].price);

        books[0].name[strcspn(books[0].name, "\n")] = '\0';
        books[0].author[strcspn(books[0].author, "\n")] = '\0';

        if (strcmp(books[0].author, "Charles Dickens") == 0)
        {
            fprintf(fp_dickens, "%s\n", books[0].name);
        }
        else
        {
            fprintf(fp_not_dickens, "%s\n", books[0].name);
        }
    }

    fclose(fp);
    fclose(fp_dickens);
    fclose(fp_not_dickens);

    printf("\nFiles created successfully.\n");
    printf("charles_dickens.txt → Books by Charles Dickens\n");
    printf("not_charles_dickens.txt → Books by other authors\n");

    return 0;
}

