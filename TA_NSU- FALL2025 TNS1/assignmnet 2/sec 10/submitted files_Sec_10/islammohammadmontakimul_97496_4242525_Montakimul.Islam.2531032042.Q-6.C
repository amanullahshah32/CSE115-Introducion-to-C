#include <stdio.h>
#include <string.h>

struct Book_info
{
    char name[100];
    int id;
    int year;
    char author[100];
    float price;
};

int main()
{
    struct Book_info books[100];
    int n;

    printf("Enter number of books: ");
    scanf("%d", &n);
    getchar(); // to consume newline

    // a) Populate records
    for (int i = 0; i < n; i++)
    {
        printf("\nBook %d:\n", i + 1);
        printf("Name: ");
        fgets(books[i].name, 100, stdin);
        books[i].name[strcspn(books[i].name, "\n")] = 0;
        printf("ID: ");
        scanf("%d", &books[i].id);
        printf("Year: ");
        scanf("%d", &books[i].year);
        getchar();
        printf("Author: ");
        fgets(books[i].author, 100, stdin);
        books[i].author[strcspn(books[i].author, "\n")] = 0;
        printf("Price: ");
        scanf("%f", &books[i].price);
        getchar();
    }

    // b) Save to file
    FILE *fp = fopen("input.txt", "w");
    for (int i = 0; i < n; i++)
    {
        fprintf(fp, "%s|%d|%d|%s|%.2f\n", books[i].name, books[i].id, books[i].year, books[i].author, books[i].price);
    }
    fclose(fp);
    printf("\nSaved to input.txt\n");

    // c) Read and display
    printf("\n--- All Books ---\n");
    fp = fopen("input.txt", "r");
    char line[300];
    while (fgets(line, 300, fp))
    {
        char name[100], author[100];
        int id;
        sscanf(line, "%[^|]|%d|%*d|%[^|]|%*f", name, &id, author);
        printf("Name: %s, Author: %s, ID: %d\n", name, author, id);
    }
    fclose(fp);

    // d) Books by Charles Dickens
    fp = fopen("input.txt", "r");
    FILE *fp_dickens = fopen("dickens_books.txt", "w");
    while (fgets(line, 300, fp))
    {
        char name[100], author[100];
        sscanf(line, "%[^|]|%*d|%*d|%[^|]|%*f", name, author);
        if (strcmp(author, "Charles Dickens") == 0)
        {
            fprintf(fp_dickens, "%s\n", name);
        }
    }
    fclose(fp);
    fclose(fp_dickens);
    printf("\nDickens books saved to dickens_books.txt\n");

    // e) Books NOT by Charles Dickens
    fp = fopen("input.txt", "r");
    FILE *fp_not_dickens = fopen("not_dickens_books.txt", "w");
    while (fgets(line, 300, fp))
    {
        char name[100], author[100];
        sscanf(line, "%[^|]|%*d|%*d|%[^|]|%*f", name, author);
        if (strcmp(author, "Charles Dickens") != 0)
        {
            fprintf(fp_not_dickens, "%s\n", name);
        }
    }
    fclose(fp);
    fclose(fp_not_dickens);
    printf("Non-Dickens books saved to not_dickens_books.txt\n");

    return 0;
}
