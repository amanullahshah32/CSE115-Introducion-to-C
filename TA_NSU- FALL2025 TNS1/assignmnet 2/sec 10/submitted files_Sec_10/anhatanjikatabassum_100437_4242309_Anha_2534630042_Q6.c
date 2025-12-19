#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_LEN 100


typedef struct {
    char name[MAX_LEN];
    int id;
    char author[MAX_LEN];
    int publish_year;
    float price;
} Book_info;

int main() {
    Book_info books[MAX_BOOKS];
    int n, i;

    FILE *fp, *charles_fp, *other_fp;


    printf("Enter number of books in the record system (max %d): ", MAX_BOOKS);
    scanf("%d", &n);
    getchar();

    if(n > MAX_BOOKS) {
        printf("Number of books exceeds maximum limit.\n");
        return 1;
    }


    for(i = 0; i < n; i++) {
        printf("\n--- Enter details for Book %d ---\n", i + 1);

        printf("Book Name: ");
        fgets(books[i].name, MAX_LEN, stdin);
        books[i].name[strcspn(books[i].name, "\n")] = '\0';

        printf("Book ID: ");
        scanf("%d", &books[i].id);
        getchar();

        printf("Author: ");
        fgets(books[i].author, MAX_LEN, stdin);
        books[i].author[strcspn(books[i].author, "\n")] = '\0';

        printf("Publish Year: ");
        scanf("%d", &books[i].publish_year);
        getchar();

        printf("Price: ");
        scanf("%f", &books[i].price);
        getchar();
    }


    fp = fopen("input.txt", "w");
    if(fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    for(i = 0; i < n; i++) {
        fprintf(fp, "%s,%d,%s,%d,%.2f\n", books[i].name, books[i].id, books[i].author, books[i].publish_year, books[i].price);
    }

    fclose(fp);
    printf("\nBook information saved to input.txt successfully.\n");


    fp = fopen("input.txt", "r");
    if(fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\n--- Books in Record System ---\n");
    char line[256];
    while(fgets(line, sizeof(line), fp)) {
        char name[MAX_LEN], author[MAX_LEN];
        int id;
        sscanf(line, "%[^,],%d,%[^,],%*d,%*f", name, &id, author);
        printf("Book Name: %s, Author: %s, ID: %d\n", name, author, id);
    }
    fclose(fp);


    fp = fopen("input.txt", "r");
    charles_fp = fopen("charles_books.txt", "w");
    if(fp == NULL || charles_fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while(fgets(line, sizeof(line), fp)) {
        char name[MAX_LEN], author[MAX_LEN];
        sscanf(line, "%[^,],%*d,%[^,],%*d,%*f", name, author);
        if(strcmp(author, "Charles Dickens") == 0) {
            fprintf(charles_fp, "%s\n", name);
        }
    }
    fclose(fp);
    fclose(charles_fp);
    printf("\nBooks by Charles Dickens saved to charles_books.txt\n");


    fp = fopen("input.txt", "r");
    other_fp = fopen("other_books.txt", "w");
    if(fp == NULL || other_fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while(fgets(line, sizeof(line), fp)) {
        char name[MAX_LEN], author[MAX_LEN];
        sscanf(line, "%[^,],%*d,%[^,],%*d,%*f", name, author);
        if(strcmp(author, "Charles Dickens") != 0) {
            fprintf(other_fp, "%s\n", name);
        }
    }
    fclose(fp);
    fclose(other_fp);
    printf("Books not by Charles Dickens saved to other_books.txt\n");

    return 0;
}
