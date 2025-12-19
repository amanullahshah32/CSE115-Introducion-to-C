#include <stdio.h>

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
    struct Book_info books[100];
    int n, i;
    FILE *fp;

    fp=fopen("input.txt", "w");

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("\nBook %d\n", i+1);

        printf("ID: ");
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
        getchar();

        fprintf(fp, "%d\n", books[i].id);
        fprintf(fp, "%s\n", books[i].name);
        fprintf(fp, "%s\n", books[i].author);
        fprintf(fp, "%d\n", books[i].publish_year);
        fprintf(fp, "%.2f\n", books[i].price);
    }
    fclose(fp);
    printf("Data saved to input.txt\n");
    return 0;
}
