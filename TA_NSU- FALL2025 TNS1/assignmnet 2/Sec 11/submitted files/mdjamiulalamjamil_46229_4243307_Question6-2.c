#include <stdio.h>
#include <string.h>

#define MAX 100

/* Structure to store book information */
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
    int n, i;
    FILE *fp, *fp_dickens, *fp_not_dickens;

    /* Take input for number of books */
    printf("Enter number of books (max 100): ");
    scanf("%d", &n);

    /* Populate the record system */
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &books[i].id);

        printf("Book Name: ");
        scanf(" %[^\n]", books[i].name);

        printf("Author Name: ");
        scanf(" %[^\n]", books[i].author);

        printf("Publish Year: ");
        scanf("%d", &books[i].publish_year);

        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    /* Save information to input.txt */
    fp = fopen("input.txt", "w");

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

    /* Read from file and display Name, Author and ID */
    printf("\nBooks available in the record system:\n");

    fp = fopen("input.txt", "r");

    for (i = 0; i < n; i++)
    {
        fscanf(fp, "%d\n", &books[i].id);
        fgets(books[i].name, 50, fp);
        books[i].name[strcspn(books[i].name, "\n")] = '\0';

        fgets(books[i].author, 50, fp);
        books[i].author[strcspn(books[i].author, "\n")] = '\0';

        fscanf(fp, "%d\n", &books[i].publish_year);
        fscanf(fp, "%f\n", &books[i].price);

        printf("ID: %d, Name: %s, Author: %s\n",
               books[i].id, books[i].name, books[i].author);
    }

    fclose(fp);

    /* Create files for Charles Dickens and others */
    fp = fopen("input.txt", "r");
    fp_dickens = fopen("dickens.txt", "w");
    fp_not_dickens = fopen("not_dickens.txt", "w");

    for (i = 0; i < n; i++)
    {
        fscanf(fp, "%d\n", &books[i].id);
        fgets(books[i].name, 50, fp);
        books[i].name[strcspn(books[i].name, "\n")] = '\0';

        fgets(books[i].author, 50, fp);
        books[i].author[strcspn(books[i].author, "\n")] = '\0';

        fscanf(fp, "%d\n", &books[i].publish_year);
        fscanf(fp, "%f\n", &books[i].price);

        if (strcmp(books[i].author, "Charles Dickens") == 0)
        {
            fprintf(fp_dickens, "%s\n", books[i].name);
        }
        else
        {
            fprintf(fp_not_dickens, "%s\n", books[i].name);
        }
    }

    fclose(fp);
    fclose(fp_dickens);
    fclose(fp_not_dickens);

    printf("\nFiles created successfully.\n");

    return 0;
}
