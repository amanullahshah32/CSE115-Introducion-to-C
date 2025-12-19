#include <stdio.h>
#include <string.h>
#define MAX 100

struct Book
{
    int id;
    char name[50];
    char author[50];
    char publisher[50];
    float price;
};

int main()
{
    struct Book books[MAX];
    int n, i;

    FILE *fp, *fp_dickens, *fp_not_dickens;


    printf("Enter number of books: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &books[i].id);

        printf("Name: ");
        scanf(" %[^\n]", books[i].name);

        printf("Author: ");
        scanf(" %[^\n]", books[i].author);

        printf("Publisher: ");
        scanf(" %[^\n]", books[i].publisher);

        printf("Price: ");
        scanf("%f", &books[i].price);
    }


    fp = fopen("input.txt", "w");

    for (i = 0; i < n; i++)
    {
        fprintf(fp, "%d\n%s\n%s\n%s\n%.2f\n",
                books[i].id,
                books[i].name,
                books[i].author,
                books[i].publisher,
                books[i].price);
    }

    fclose(fp);


    fp = fopen("input.txt", "r");

    printf("\nBooks in Record System:\n");

    for (i = 0; i < n; i++)
    {
        fscanf(fp, "%d", &books[i].id);
        fscanf(fp, " %[^\n]", books[i].name);
        fscanf(fp, " %[^\n]", books[i].author);
        fscanf(fp, " %[^\n]", books[i].publisher);
        fscanf(fp, "%f", &books[i].price);

        printf("ID: %d, Name: %s, Author: %s\n",
               books[i].id,
               books[i].name,
               books[i].author);
    }

    fclose(fp);


    fp_dickens = fopen("charles_dickens.txt", "w");


    fp_not_dickens = fopen("not_charles_dickens.txt", "w");

    for (i = 0; i < n; i++)
    {
        if (strcmp(books[i].author, "Charles Dickens") == 0)
        {
            fprintf(fp_dickens, "%s\n", books[i].name);
        }
        else
        {
            fprintf(fp_not_dickens, "%s\n", books[i].name);
        }
    }

    fclose(fp_dickens);
    fclose(fp_not_dickens);

    return 0;
}

