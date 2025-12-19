#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100

struct Book_info {
    char name[100];
    int id;
    int pub_year;
    char author[100];
    float price;
};

int main() {
    struct Book_info library[MAX_BOOKS];
    struct Book_info temp_book;
    int n, i;
    FILE *fptr, *f_dickens, *f_others;

    printf("Enter the number of books to add (Max 100): ");
    scanf("%d", &n);
    getchar();

    if (n > MAX_BOOKS) {
        printf("Error: Maximum limit is 100 books.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nBook %d Details:\n", i + 1);

        printf("Enter Book Name: ");
        scanf("%[^\n]", library[i].name);

        printf("Enter Book ID: ");
        scanf("%d", &library[i].id);

        printf("Enter Publish Year: ");
        scanf("%d", &library[i].pub_year);

        printf("Enter Price: ");
        scanf("%f", &library[i].price);

        getchar();

        printf("Enter Author Name: ");
        scanf("%[^\n]", library[i].author);

        getchar();
    }

    fptr = fopen("input.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        fprintf(fptr, "%s\n%d\n%d\n%.2f\n%s\n",
                library[i].name,
                library[i].id,
                library[i].pub_year,
                library[i].price,
                library[i].author);
    }
    fclose(fptr);

    printf("\n--- Reading from File: All Books ---\n");
    printf("%-30s %-30s %-10s\n", "Book Name", "Author", "ID");
    printf("------------------------------------------------------------------------\n");

    fptr = fopen("input.txt", "r");
    while (fscanf(fptr, " %[^\n]", temp_book.name) != EOF) {
        fscanf(fptr, "%d", &temp_book.id);
        fscanf(fptr, "%d", &temp_book.pub_year);
        fscanf(fptr, "%f", &temp_book.price);
        fscanf(fptr, " %[^\n]", temp_book.author);

        printf("%-30s %-30s %d\n", temp_book.name, temp_book.author, temp_book.id);
    }
    fclose(fptr);

    fptr = fopen("input.txt", "r");
    f_dickens = fopen("dickens_books.txt", "w");
    f_others = fopen("other_books.txt", "w");

    while (fscanf(fptr, " %[^\n]", temp_book.name) != EOF) {
        fscanf(fptr, "%d", &temp_book.id);
        fscanf(fptr, "%d", &temp_book.pub_year);
        fscanf(fptr, "%f", &temp_book.price);
        fscanf(fptr, " %[^\n]", temp_book.author);

        if (strcmp(temp_book.author, "Charles Dickens") == 0) {
            fprintf(f_dickens, "%s\n", temp_book.name);
        } else {
            fprintf(f_others, "%s\n", temp_book.name);
        }
    }

    fclose(fptr);
    fclose(f_dickens);
    fclose(f_others);

    return 0;
}
