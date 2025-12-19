#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book_info {
    int id;
    char name[100];
    char author[50];
    int publishYear;
    float price;
};

int main() {
    struct Book_info books[100];
    int n;

    printf("Enter the number of books to input (max 100): ");
    scanf("%d", &n);
    if (n > 100) return 1;

    getchar();

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Book %d\n", i+1);
        scanf("%d", &books[i].id);

        printf("Book Name ");
        gets(books[i].name);

        printf("Author ");
        gets(books[i].author);

        printf("Publish Year ");
        scanf("%d", &books[i].publishYear);

        printf("Price ");
        scanf("%f", &books[i].price);

        getchar();
    }

    FILE *fp = fopen("input.txt", "w");
    if (fp == NULL) return 1;

    for (int i = 0; i < n; i++) {
        fprintf(fp, "%d\n%s\n%s\n%d\n%.2f\n", books[i].id, books[i].name, books[i].author, books[i].publishYear, books[i].price);
    }
    fclose(fp);

    fp = fopen("input.txt", "r");
    if (fp == NULL) return 1;

    for (int i = 0; i < n; i++) {
        fscanf(fp, "%d\n", &books[i].id);
        gets(books[i].name);
        gets(books[i].author);
        fscanf(fp, "%d\n", &books[i].publishYear);
        fscanf(fp, "%f\n", &books[i].price);
    }
    fclose(fp);

    for (int i = 0; i < n; i++) {
        printf("ID: %d\nName: %s\nAuthor: %s\nPublish Year: %d\nPrice: %.2f\n\n",
               books[i].id, books[i].name, books[i].author, books[i].publishYear, books[i].price);
    }

    FILE *fdickens = fopen("charles_dickens.txt", "w");
    FILE *fnotdickens = fopen("not_charles_dickens.txt", "w");

    for (int i = 0; i < n; i++) {
        if (strcmp(books[i].author, "Charles Dickens") == 0)
            fprintf(fdickens, "%s\n", books[i].name);
        else
            fprintf(fnotdickens, "%s\n", books[i].name);
    }

    fclose(fdickens);
    fclose(fnotdickens);


    return 0;
}
