#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100


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
    struct Book_info books[MAX_BOOKS];
    int n;


    printf("Enter number of books (max 100): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details of book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &books[i].id);

        getchar();

        printf("Book Name: ");
        gets(books[i].name);

        printf("Author Name: ");
        gets(books[i].author);

        printf("Publish Year: ");
        scanf("%d", &books[i].publish_year);

        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    FILE *fp = fopen("input.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened!\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        fprintf(fp, "%d\n", books[i].id);
        fprintf(fp, "%s\n", books[i].name);
        fprintf(fp, "%s\n", books[i].author);
        fprintf(fp, "%d\n", books[i].publish_year);
        fprintf(fp, "%.2f\n", books[i].price);
    }

    fclose(fp);

    fp = fopen("input.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened!\n");
        return 1;
    }

    printf("\nBooks available in record system:\n");

    struct Book_info temp;
    for (int i = 0; i < n; i++)
    {
        fscanf(fp, "%d\n", &temp.id);
        fgets(temp.name, sizeof(temp.name), fp);
        temp.name[strcspn(temp.name, "\n")] = '\0';

        fgets(temp.author, sizeof(temp.author), fp);
        temp.author[strcspn(temp.author, "\n")] = '\0';

        fscanf(fp, "%d\n", &temp.publish_year);
        fscanf(fp, "%f\n", &temp.price);

        printf("ID: %d, Name: %s, Author: %s\n",
               temp.id, temp.name, temp.author);
    }

    fclose(fp);


    fp = fopen("input.txt", "r");
    FILE *fp_dickens = fopen("charles_dickens.txt", "w");
    FILE *fp_other = fopen("other_authors.txt", "w");

    if (fp == NULL || fp_dickens == NULL || fp_other == NULL)
    {
        printf("File error!\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        fscanf(fp, "%d\n", &temp.id);
        fgets(temp.name, sizeof(temp.name), fp);
        temp.name[strcspn(temp.name, "\n")] = '\0';

        fgets(temp.author, sizeof(temp.author), fp);
        temp.author[strcspn(temp.author, "\n")] = '\0';

        fscanf(fp, "%d\n", &temp.publish_year);
        fscanf(fp, "%f\n", &temp.price);

        if (strcmp(temp.author, "Charles Dickens") == 0)
        {
            fprintf(fp_dickens, "%s\n", temp.name);
        }
        else
        {
            fprintf(fp_other, "%s\n", temp.name);
        }
    }

    fclose(fp);
    fclose(fp_dickens);
    fclose(fp_other);

    printf("\nFiles created successfully.\n");
    printf("Books by Charles Dickens -> charles_dickens.txt\n");
    printf("Books by other authors -> other_authors.txt\n");

    return 0;
}
