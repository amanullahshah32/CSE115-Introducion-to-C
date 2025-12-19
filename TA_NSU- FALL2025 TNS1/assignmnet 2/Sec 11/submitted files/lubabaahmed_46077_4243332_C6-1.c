#include <stdio.h>
#include <string.h>

struct Book_info {
    char name[100];
    int id;
    int year;
    char author[50];
    float price;
};

int main() {
    struct Book_info books[100];
    int n, i;
    FILE *fp;

    printf("Enter number of books: ");
    scanf("%d", &n);
    getchar();

    for(i = 0; i < n; i++) {
        printf("\nBook %d:\n", i+1);

        printf("Name: ");
        fgets(books[i].name, 100, stdin);
        books[i].name[strlen(books[i].name)-1] = '\0';

        printf("ID: ");
        scanf("%d", &books[i].id);

        printf("Year: ");
        scanf("%d", &books[i].year);
        getchar();

        printf("Author: ");
        fgets(books[i].author, 50, stdin);
        books[i].author[strlen(books[i].author)-1] = '\0';

        printf("Price: ");
        scanf("%f", &books[i].price);
        getchar();
    }


    fp = fopen("input.txt", "w");
    for(i = 0; i < n; i++) {
        fprintf(fp, "%s,%d,%d,%s,%.2f\n", books[i].name, books[i].id,
                books[i].year, books[i].author, books[i].price);
    }
    fclose(fp);
    printf("\nSaved to input.txt\n");

    printf("\n=== Book List ===\n");
    fp = fopen("input.txt", "r");
    char line[200];
    while(fgets(line, sizeof(line), fp)) {
        struct Book_info b;
        sscanf(line, "%[^,],%d,%d,%[^,],%f", b.name, &b.id, &b.year, b.author, &b.price);
        printf("ID: %d | Name: %s | Author: %s\n", b.id, b.name, b.author);
    }
    fclose(fp);

    fp = fopen("input.txt", "r");
    FILE *fp_dickens = fopen("dickens_books.txt", "w");
    fprintf(fp_dickens, "Books by Charles Dickens:\n");

    while(fgets(line, sizeof(line), fp)) {
        struct Book_info b;
        sscanf(line, "%[^,],%d,%d,%[^,],%f", b.name, &b.id, &b.year, b.author, &b.price);

        if(strcmp(b.author, "Charles Dickens") == 0) {
            fprintf(fp_dickens, "%s\n", b.name);
        }
    }
    fclose(fp);
    fclose(fp_dickens);
    printf("\nCreated dickens_books.txt\n");


    fp = fopen("input.txt", "r");
    FILE *fp_others = fopen("other_books.txt", "w");
    fprintf(fp_others, "Books NOT by Charles Dickens:\n");

    while(fgets(line, sizeof(line), fp)) {
        struct Book_info b;
        sscanf(line, "%[^,],%d,%d,%[^,],%f", b.name, &b.id, &b.year, b.author, &b.price);

        if(strcmp(b.author, "Charles Dickens") != 0) {
            fprintf(fp_others, "%s by %s\n", b.name, b.author);
        }
    }
    fclose(fp);
    fclose(fp_others);
    printf("Created other_books.txt\n");

    return 0;
}
