#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
6) Write a full code that will contain all the following measures. Suppose, you are running a
book shop. You can have a maximum of 100 books there. Design a structure name Book_info to
store all the books’ Name, Id, publish year, author, present price and any other information that
is needed. Take input from user on the number of books that must be existent in the record
system initially.
a)Populate the record system.
b)Save the information in a file input.txt
c)Read information from the file input.txt and display the name of books, author and Id of all
books available in the record system.
d)Read information from file input.txt and create a new file that will contain book names written
by the author Charles Dickens
e)Read information from file input.txt and create a new file that will contain book names not
written by the author Charles Dickens
*/

struct Book_info {
    char name[100];
    int id;
    int publishYear;
    char author[50];
    float price;
};

int main() {
    struct Book_info books[100];
    int n;

    printf("Enter number of books to record (max 100): ");
    scanf("%d", &n);
    getchar();  // consume leftover newline from scanf

    // a) Populate the record system
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for book %d:\n", i + 1);

        printf("Name: ");
        fgets(books[i].name, sizeof(books[i].name), stdin);
        // Remove newline if present
        int len = strlen(books[i].name);
        if (books[i].name[len - 1] == '\n')
            books[i].name[len - 1] = '\0';

        printf("ID: ");
        scanf("%d", &books[i].id);
        getchar();

        printf("Publish Year: ");
        scanf("%d", &books[i].publishYear);
        getchar();

        printf("Author: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        len = strlen(books[i].author);
        if (books[i].author[len - 1] == '\n')
            books[i].author[len - 1] = '\0';

        printf("Price: ");
        scanf("%f", &books[i].price);
        getchar();
    }

    // b) Save information to input.txt
    FILE *fp = fopen("input.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(fp, "%s,%d,%d,%s,%.2f\n", books[i].name, books[i].id, books[i].publishYear, books[i].author, books[i].price);
    }
    fclose(fp);
    printf("\nData saved to input.txt successfully.\n");

    // c) Read information from input.txt and display Name, Author, ID
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nBooks available:\n");
    char line[200];
    while (fgets(line, sizeof(line), fp)) {
        char name[100], author[50];
        int id, year;
        float price;

        sscanf(line, "%[^,],%d,%d,%[^,],%f", name, &id, &year, author, &price);
        printf("Name: %s, Author: %s, ID: %d\n", name, author, id);
    }
    fclose(fp);

    // d) Create a new file with books by Charles Dickens
    fp = fopen("input.txt", "r");
    FILE *fp_dickens = fopen("Charles_Dickens_Books.txt", "w");
    if (fp == NULL || fp_dickens == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fp)) {
        char name[100], author[50];
        int id, year;
        float price;

        sscanf(line, "%[^,],%d,%d,%[^,],%f", name, &id, &year, author, &price);

        if (strcmp(author, "Charles Dickens") == 0) {
            fprintf(fp_dickens, "%s\n", name);
        }
    }
    fclose(fp);
    fclose(fp_dickens);
    printf("\nBooks by Charles Dickens saved in Charles_Dickens_Books.txt\n");

    // e) Create a new file with books NOT by Charles Dickens
    fp = fopen("input.txt", "r");
    FILE *fp_other = fopen("Other_Books.txt", "w");
    if (fp == NULL || fp_other == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fp)) {
        char name[100], author[50];
        int id, year;
        float price;

        sscanf(line, "%[^,],%d,%d,%[^,],%f", name, &id, &year, author, &price);

        if (strcmp(author, "Charles Dickens") != 0) {
            fprintf(fp_other, "%s\n", name);
        }
    }

    fclose(fp);
    fclose(fp_other);
    printf("Books NOT by Charles Dickens saved in Other_Books.txt\n");

    return 0;
}
