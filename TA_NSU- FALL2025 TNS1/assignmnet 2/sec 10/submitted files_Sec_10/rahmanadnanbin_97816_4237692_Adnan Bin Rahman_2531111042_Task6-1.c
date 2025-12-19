#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100
typedef struct {
    char name[100];
    int id;
    int publishYear;
    char author[50];
    float price;
} Book_info;
void populateBooks(Book_info books[], int n) {
    for(int i = 0; i < n; i++) {
        printf("\nEnter details for book %d:\n", i + 1);
        printf("Book Name: ");
        getchar();
        fgets(books[i].name, sizeof(books[i].name), stdin);
        books[i].name[strcspn(books[i].name, "\n")] = '\0';
        printf("Book ID: ");
        scanf("%d", &books[i].id);
        printf("Publish Year: ");
        scanf("%d", &books[i].publishYear);
        printf("Author: ");
        getchar();
        fgets(books[i].author, sizeof(books[i].author), stdin);
        books[i].author[strcspn(books[i].author, "\n")] = '\0';
        printf("Price: ");
        scanf("%f", &books[i].price);
    }
}
void saveToFile(Book_info books[], int n) {
    FILE *fp = fopen("input.txt", "w");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return;
    }
    for(int i = 0; i < n; i++) {
        fprintf(fp, "%s,%d,%d,%s,%.2f\n", books[i].name, books[i].id,
                books[i].publishYear, books[i].author, books[i].price);
    }
    fclose(fp);
    printf("\nBooks saved to file input.txt successfully.\n");
}
void displayBooksFromFile() {
    FILE *fp = fopen("input.txt", "r");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return;
    }
    char line[256];
    printf("\nBooks available in record system:\n");
    printf("Name\t\tAuthor\t\tID\n");

    while(fgets(line, sizeof(line), fp)) {
        char name[100], author[50];
        int id, year;
        float price;

        sscanf(line, "%[^,],%d,%d,%[^,],%f", name, &id, &year, author, &price);
        printf("%s\t%s\t%d\n", name, author, id);
    }

    fclose(fp);
}
void booksByCharlesDickens() {
    FILE *fp = fopen("input.txt", "r");
    FILE *fp_new = fopen("CharlesDickens.txt", "w");
    if(fp == NULL || fp_new == NULL) {
        printf("Error opening file!\n");
        return;
    }

    char line[256];
    while(fgets(line, sizeof(line), fp)) {
        char name[100], author[50];
        int id, year;
        float price;

        sscanf(line, "%[^,],%d,%d,%[^,],%f", name, &id, &year, author, &price);

        if(strcmp(author, "Charles Dickens") == 0) {
            fprintf(fp_new, "%s\n", name);
        }
    }
    fclose(fp);
    fclose(fp_new);
    printf("\nFile CharlesDickens.txt created successfully.\n");
}
void booksNotByCharlesDickens() {
    FILE *fp = fopen("input.txt", "r");
    FILE *fp_new = fopen("NotCharlesDickens.txt", "w");
    if(fp == NULL || fp_new == NULL) {
        printf("Error opening file!\n");
        return;
    }

    char line[256];
    while(fgets(line, sizeof(line), fp)) {
        char name[100], author[50];
        int id, year;
        float price;

        sscanf(line, "%[^,],%d,%d,%[^,],%f", name, &id, &year, author, &price);

        if(strcmp(author, "Charles Dickens") != 0) {
            fprintf(fp_new, "%s\n", name);
        }
    }

    fclose(fp);
    fclose(fp_new);
    printf("File NotCharlesDickens.txt created successfully.\n");
}
int main() {
    int n;
    Book_info books[MAX_BOOKS];

    printf("Enter number of books to add (max 100): ");
    scanf("%d", &n);

    if(n > MAX_BOOKS) {
        printf("Number of books exceeds maximum limit!\n");
        return 1;
    }

    // a) Populate the records
    populateBooks(books, n);

    // b) Save information to input.txt
    saveToFile(books, n);

    // c) Read and display books
    displayBooksFromFile();

    // d) Create file with books by Charles Dickens
    booksByCharlesDickens();

    // e) Create file with books not by Charles Dickens
    booksNotByCharlesDickens();

    return 0;
}
