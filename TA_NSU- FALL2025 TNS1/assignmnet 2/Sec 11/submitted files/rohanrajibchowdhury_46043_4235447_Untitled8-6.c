//Rohan Rajib Chowdhury
//ID 2312932043

#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct Book_info {
    int id;
    char name[50];
    char author[50];
    int publish_year;
    float price;
};

int main() {
    struct Book_info books[MAX_BOOKS];
    int n, i;

    FILE *fp, *fp_dickens, *fp_not_dickens;

    printf("Enter number of books (max 100): ");
    scanf("%d", &n);

    if (n > MAX_BOOKS || n <= 0) {
        printf("Invalid number of books.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nEnter details of book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &books[i].id);

        getchar();

        printf("Book Name: ");
        fgets(books[i].name, sizeof(books[i].name), stdin);
        books[i].name[strcspn(books[i].name, "\n")] = '\0';

        printf("Author Name: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        books[i].author[strcspn(books[i].author, "\n")] = '\0';

        printf("Publish Year: ");
        scanf("%d", &books[i].publish_year);

        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    fp = fopen("input.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        fprintf(fp, "%d\n%s\n%s\n%d\n%.2f\n",
                books[i].id,
                books[i].name,
                books[i].author,
                books[i].publish_year,
                books[i].price);
    }
    fclose(fp);

    printf("\nBooks available in the system:\n");

    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error reading file.\n");
        return 1;
    }

    while (fscanf(fp, "%d\n", &books[0].id) != EOF) {
        fgets(books[0].name, sizeof(books[0].name), fp);
        fgets(books[0].author, sizeof(books[0].author), fp);
        fscanf(fp, "%d\n%f\n", &books[0].publish_year, &books[0].price);

        books[0].name[strcspn(books[0].name, "\n")] = '\0';
        books[0].author[strcspn(books[0].author, "\n")] = '\0';

        printf("ID: %d, Name: %s, Author: %s\n",
               books[0].id, books[0].name, books[0].author);
    }
    fclose(fp);

    fp = fopen("input.txt", "r");
    fp_dickens = fopen("charles_dickens.txt", "w");

    while (fscanf(fp, "%d\n", &books[0].id) != EOF) {
        fgets(books[0].name, sizeof(books[0].name), fp);
        fgets(books[0].author, sizeof(books[0].author), fp);
        fscanf(fp, "%d\n%f\n", &books[0].publish_year, &books[0].price);

        books[0].author[strcspn(books[0].author, "\n")] = '\0';

        if (strcmp(books[0].author, "Charles Dickens") == 0) {
            fprintf(fp_dickens, "%s", books[0].name);
        }
    }
    fclose(fp);
    fclose(fp_dickens);

    fp = fopen("input.txt", "r");
    fp_not_dickens = fopen("not_charles_dickens.txt", "w");

    while (fscanf(fp, "%d\n", &books[0].id) != EOF) {
        fgets(books[0].name, sizeof(books[0].name), fp);
        fgets(books[0].author, sizeof(books[0].author), fp);
        fscanf(fp, "%d\n%f\n", &books[0].publish_year, &books[0].price);

        books[0].author[strcspn(books[0].author, "\n")] = '\0';

        if (strcmp(books[0].author, "Charles Dickens") != 0) {
            fprintf(fp_not_dickens, "%s", books[0].name);
        }
    }

    fclose(fp);
    fclose(fp_not_dickens);

    printf("\nFiles created successfully.\n");

    return 0;
}
