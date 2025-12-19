#include <stdio.h>
#include <string.h>
typedef struct Book_info
{
    char name[20];
    int id;
    int publish_year;
    char author[20];
    float present_price;
} Book_info;
int main()
{
    Book_info book[100];
    printf("\n enter number of books:");
    int n;
    scanf("%d", &n);
    getchar();

    // Populate the record system

    printf("\nBooks Info:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter Book name:");
        gets(book[i].name);
        printf("\nEnter ID:");
        scanf("%d",&book[i].id);
        getchar();
        printf("\nEnter publish year:");
        scanf("%d",&book[i].publish_year);
        getchar();
        printf("\nEnter Author name:");
        gets(book[i].author);
        printf("\nEnter present price:");
        scanf("%f",&book[i].present_price);
        getchar();
    }

    // Save the information in a file input.txt

    FILE *fp = fopen("input.txt", "a");
    if (fp == NULL)
    {
        printf("\n File not Found");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        fprintf(fp, "%s,%d,%d,%s,%f\n",
                book[i].name,
                book[i].id,
                book[i].publish_year,
                book[i].author,
                book[i].present_price);
    }
    fclose(fp);
    printf("\nbook records saved to input.txt\n");

    // Read information from the file input.txt and display the name of books, author and Id of all
    //  books available in the record system.

    fp = fopen("input.txt", "r");
    if (fp == NULL)
    {
        printf("\n File not Found");
        return 1;
    }
    
    printf("\nBooks in record system:\n");
    while (fscanf(fp, "%[^,],%d,%d,%[^,],%f\n", book[0].name, &book[0].id, &book[0].publish_year, book[0].author, &book[0].present_price) == 5)
    {
        printf("Name: %s\nID:%d\nAuthor: %s\n", book[0].name, book[0].id, book[0].author);
        
    }
    fclose(fp);

    // Read information from file input.txt and create a new file that will contain book names written
    //  by the author Charles Dickens

    fp = fopen("input.txt", "r");
    FILE *fpp = fopen("charles.txt", "w");
    
    if (fp == NULL || fpp == NULL)
    {
        printf("\n File not Found");
        return 1;
    }
    
    {
        while (fscanf(fp, "%[^,],%d,%d,%[^,],%f\n", book[0].name, &book[0].id, &book[0].publish_year, book[0].author, &book[0].present_price) == 5)
        if (strcmp(book[0].author, "Charles Dickens") == 0)
        {
            fprintf(fpp, "%s\n", book[0].name);
        }
       
    }
    printf("\nBooks by Charles Dickens saved in charles.txt\n");
    fclose(fp);
    fclose(fpp);

    // Read information from file input.txt and create a new file that will contain book names not
    //  written by author Charles Dickens

    fp = fopen("input.txt", "r");
    FILE *fppp = fopen("other.txt", "w");

    if (fp == NULL || fppp == NULL)
    {
        printf("\n File not Found");
        return 1;
    }
    
    while (fscanf(fp, "%[^,],%d,%d,%[^,],%f\n", book[0].name, &book[0].id, &book[0].publish_year, book[0].author, &book[0].present_price) == 5)
    {
        if (strcmp(book[0].author, "Charles Dickens") != 0)
        {
            fprintf(fppp, "%s\n", book[0].name);
        }
       
    }
    printf("\nBooks by other than Charles Dickens saved in other.txt\n");
    fclose(fp);
    fclose(fppp);
    return 0;
}
