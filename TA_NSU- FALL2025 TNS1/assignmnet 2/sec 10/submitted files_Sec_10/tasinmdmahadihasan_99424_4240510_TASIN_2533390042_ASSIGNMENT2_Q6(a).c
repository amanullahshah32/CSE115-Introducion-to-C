#include<stdio.h>
struct Book_info
{
    char name[50];
    char author[50];
    int id;
    int publish_year;
    float price;
};

int main()
{
    struct Book_info books[100];
    int n, i;
    printf("Enter number of books: ");
    scanf("%d", &n);
    getchar();

    for(i=0; i<n; i++)
    {
        printf("\nBook %d\n", i+1);

        printf("ID: ");
        scanf("%d", &books[i].id);
        fflush(stdin);
        printf("Book Name: ");
        gets(books[i].name);

        printf("Author Name: ");
        gets(books[i].author);

        printf("Publish Year: ");
        scanf("%d", &books[i].publish_year);

        printf("Price: ");
        scanf("%f", &books[i].price);
    }
    printf("\nRecord system populated successfully.\n");
    return 0;
}
