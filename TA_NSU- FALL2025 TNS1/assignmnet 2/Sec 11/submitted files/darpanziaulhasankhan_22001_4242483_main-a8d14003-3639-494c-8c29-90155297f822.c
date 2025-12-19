#include <stdio.h>
#include <string.h>

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
    struct Book_info book[100];
    int n, i;
    FILE *fp;

    printf("Enter number of books: ");
    scanf("%d", &n);

    // a) Populate record
    for(i = 0; i < n; i++)
    {
        printf("\nBook %d details:\n", i + 1);
        printf("ID: ");
        scanf("%d", &book[i].id);
        printf("Name: ");
        scanf(" %[^\n]", book[i].name);
        printf("Author: ");
        scanf(" %[^\n]", book[i].author);
        printf("Publish Year: ");
        scanf("%d", &book[i].publish_year);
        printf("Price: ");
        scanf("%f", &book[i].price);
    }

    // b) Save to file
    fp = fopen("input.txt", "w");
    for(i = 0; i < n; i++)
    {
        fprintf(fp, "%d\n%s\n%s\n%d\n%.2f\n",
                book[i].id, book[i].name,
                book[i].author, book[i].publish_year,
                book[i].price);
    }
    fclose(fp);

    // c) Read and display Name, Author, ID
    fp = fopen("input.txt", "r");
    printf("\nBook List:\n");
    for(i = 0; i < n; i++)
    {
        fscanf(fp, "%d\n", &book[i].id);
        fgets(book[i].name, 50, fp);
        fgets(book[i].author, 50, fp);
        fscanf(fp, "%d\n%f\n", &book[i].publish_year, &book[i].price);

        printf("ID: %d, Name: %sAuthor: %s",
               book[i].id, book[i].name, book[i].author);
    }
    fclose(fp);

    // d & e) Create files based on author
    FILE *fd = fopen("dickens.txt", "w");
    FILE *fnd = fopen("not_dickens.txt", "w");

    for(i = 0; i < n; i++)
    {
        if(strstr(book[i].author, "Charles Dickens"))
            fprintf(fd, "%s", book[i].name);
        else
            fprintf(fnd, "%s", book[i].name);
    }

    fclose(fd);
    fclose(fnd);

    return 0;
}
