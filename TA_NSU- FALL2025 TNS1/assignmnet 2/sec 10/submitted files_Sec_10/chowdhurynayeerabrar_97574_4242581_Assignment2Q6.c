#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    char ID[20];
    int PubYear;
    char author[30];
    float price;
} Book_info;

int main()
{
    int n;
    printf("Enter the number of books: ");
    scanf("%d", &n);

    Book_info Blist[n];

    for (int i=0;i<n;i++)
    {
        printf("\nBook %d\n", i+1);

        printf("Enter book name (use _ for spaces): ");
        scanf("%s", Blist[i].name);

        printf("Enter book ID: ");
        scanf("%s", Blist[i].ID);

        printf("Enter book author (use _ for spaces): ");
        scanf("%s", Blist[i].author);

        printf("Enter book Publish Year: ");
        scanf("%d", &Blist[i].PubYear);

        printf("Enter book price: ");
        scanf("%f", &Blist[i].price);
    }


    FILE *fp = fopen("input.txt", "w");
    for (int i= 0; i<n;i++)
    {
        fprintf(fp, "%s %s %s %d %.2f\n",
                Blist[i].ID,
                Blist[i].name,
                Blist[i].author,
                Blist[i].PubYear,
                Blist[i].price);
    }
    fclose(fp);


    printf("\nAll Books:\n");
    fp = fopen("input.txt", "r");

    Book_info temp;
    while (fscanf(fp, "%s %s %s %d %f",
                  temp.ID,
                  temp.name,
                  temp.author,
                  &temp.PubYear,
                  &temp.price) != EOF)
    {
        printf("ID: %s  Name: %s  Author: %s\n",
               temp.ID, temp.name, temp.author);
    }
    fclose(fp);


    fp = fopen("input.txt", "r");
    FILE *fpd = fopen("CDBooks.txt", "w");

    while (fscanf(fp, "%s %s %s %d %f",
                  temp.ID,
                  temp.name,
                  temp.author,
                  &temp.PubYear,
                  &temp.price) != EOF)
    {
        if (strcmp(temp.author, "Charles_Dickens") == 0)
            fprintf(fpd, "%s\n", temp.name);
    }

    fclose(fp);
    fclose(fpd);

    // Not Charles Dickens books
    fp = fopen("input.txt", "r");
    FILE *fpnd = fopen("NCDBooks.txt", "w");

    while (fscanf(fp, "%s %s %s %d %f",
                  temp.ID,
                  temp.name,
                  temp.author,
                  &temp.PubYear,
                  &temp.price) != EOF)
    {
        if (strcmp(temp.author, "Charles_Dickens") != 0)
            fprintf(fpnd, "%s\n", temp.name);
    }

    fclose(fp);
    fclose(fpnd);

    printf("\nFiles created successfully.\n");

    return 0;
}
