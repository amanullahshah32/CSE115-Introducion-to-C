#include <stdio.h>

struct Book_info
{
    char name[50];
    char author[50];
    int id;
    int year;
    float price;
};

int main()
{
    struct Book_info b[100];
    int n;
    int i;
    FILE *fp;

    printf("Enter number of books: ");
    scanf("%d", &n);

    fp = fopen("input.txt", "w");

    for (i = 0; i < n; i++)
    {
        printf("Book name: ");
        scanf(" %[^\n]", b[i].name);

        printf("Author: ");
        scanf(" %[^\n]", b[i].author);

        printf("ID: ");
        scanf("%d", &b[i].id);

        printf("Publish year: ");
        scanf("%d", &b[i].year);

        printf("Price: ");
        scanf("%f", &b[i].price);

        fprintf(fp, "%s\n%s\n%d\n%d\n%.2f\n",
                b[i].name,
                b[i].author,
                b[i].id,
                b[i].year,
                b[i].price);
    }

    fclose(fp);

    fp = fopen("input.txt", "r");

    printf("\nBooks in record:\n");

    while (fscanf(fp, " %[^\n] %[^\n] %d %d %f",
                  b[0].name,
                  b[0].author,
                  &b[0].id,
                  &b[0].year,
                  &b[0].price) != EOF)
    {
        printf("Name: %s | Author: %s | ID: %d\n",
               b[0].name,
               b[0].author,
               b[0].id);
    }

    fclose(fp);

    return 0;
}

