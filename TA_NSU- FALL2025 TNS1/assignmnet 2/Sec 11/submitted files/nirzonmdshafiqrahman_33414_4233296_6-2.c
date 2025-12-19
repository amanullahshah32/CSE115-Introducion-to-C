#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
struct Book_info {
    char name[100];
    char author[100];
    int id;
    int publish_year;
    float price;
    char genre[50];    
};

int main() {
    struct Book_info books[MAX_BOOKS];
    int n;
    // a) Populate record system
    printf("Enter number of books (max 100): ");
    scanf("%d", &n);
    getchar(); 
    for(int i = 0; i < n; i++) {
        printf("\nEnter information for Book %d:\n", i+1);
        printf("Book Name: ");
        fgets(books[i].name, sizeof(books[i].name), stdin);
        books[i].name[strcspn(books[i].name, "\n")] = '\0';
        printf("Author Name: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        books[i].author[strcspn(books[i].author, "\n")] = '\0';
        printf("Book ID: ");
        scanf("%d", &books[i].id);
        printf("Publish Year: ");
        scanf("%d", &books[i].publish_year);
        printf("Price: ");
        scanf("%f", &books[i].price);
        getchar();
        printf("Genre: ");
        fgets(books[i].genre, sizeof(books[i].genre), stdin);
        books[i].genre[strcspn(books[i].genre, "\n")] = '\0';
        printf("\n");
    }
    // b)save to input.txt
    FILE *fp = fopen("input.txt", "w");
    if(fp == NULL) {
        printf("Error opening input.txt!\n");
        return 1;
    }

    for(int i = 0; i < n; i++) {
        fprintf(fp, "%s\n%s\n%d\n%d\n%.2f\n%s\n",
                books[i].name,
                books[i].author,
                books[i].id,
                books[i].publish_year,
                books[i].price,
                books[i].genre);
    }

    fclose(fp);
    // c)Read and display name, author, ID
    printf("\nReading from input.txt:\n");
    fp = fopen("input.txt", "r");

    if(fp == NULL) {
        printf("Error reading input.txt!\n");
        return 1;
    }

    printf("\nBooks currently in the record system:\n");
    struct Book_info temp;
    while(fscanf(fp, " %99[^\n]\n%99[^\n]\n%d\n%d\n%f\n%49[^\n]\n",
                 temp.name,
                 temp.author,
                 &temp.id,
                 &temp.publish_year,
                 &temp.price,
                 temp.genre) == 6)
    {
        printf("Name: %s, Author: %s, ID: %d\n",
               temp.name, temp.author, temp.id);
    }
    fclose(fp);
    // d) Books by Charles Dickens
    fp = fopen("input.txt", "r");
    FILE *fp_dickens = fopen("dickens.txt", "w");

    if(fp == NULL || fp_dickens == NULL) {
        printf("Error opening files!\n");
        return 1;
    }
    while(fscanf(fp, " %99[^\n]\n%99[^\n]\n%d\n%d\n%f\n%49[^\n]\n",
                 temp.name,
                 temp.author,
                 &temp.id,
                 &temp.publish_year,
                 &temp.price,
                 temp.genre) == 6)
    {
        if(strcmp(temp.author, "Charles Dickens") == 0) {
            fprintf(fp_dickens, "%s\n", temp.name);
        }
    }
    fclose(fp);
    fclose(fp_dickens);
    // e) Books NOT by Charles Dickens
    fp = fopen("input.txt", "r");
    FILE *fp_not = fopen("not_dickens.txt", "w");

    if(fp == NULL || fp_not == NULL) {
        printf("Error opening files!\n");
        return 1;
    }
    while(fscanf(fp, " %99[^\n]\n%99[^\n]\n%d\n%d\n%f\n%49[^\n]\n",
                 temp.name,
                 temp.author,
                 &temp.id,
                 &temp.publish_year,
                 &temp.price,
                 temp.genre) == 6)
    {
        if(strcmp(temp.author, "Charles Dickens") != 0) {
            fprintf(fp_not, "%s\n", temp.name);
        }
    }
    fclose(fp);
    fclose(fp_not);
    printf("\nFiles Created:\n");
    printf("✔ input.txt\n");
    printf("✔ dickens.txt (Books by Charles Dickens)\n");
    printf("✔ not_dickens.txt (Books NOT by Charles Dickens)\n");
    return 0;
}
