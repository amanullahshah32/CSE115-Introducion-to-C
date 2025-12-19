#include <stdio.h>
#include <string.h>

struct Book_info {
    int id;
    char name[50];
    char author[50];
    int year;
    float price;
};

int main() {
    struct Book_info book[100];
    int n;

    FILE *fp = fopen("input.txt", "w");

    printf("Enter number of books: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);
        scanf("%d %s %s %d %f",
              &book[i].id,
              book[i].name,
              book[i].author,
              &book[i].year,
              &book[i].price);

        fprintf(fp, "%d %s %s %d %.2f\n",
                book[i].id,
                book[i].name,
                book[i].author,
                book[i].year,
                book[i].price);
    }
    fclose(fp);


    fp = fopen("input.txt", "r");
    printf("\nBooks in record:\n");
    while (fscanf(fp, "%d %s %s %d %f",
                  &book[0].id,
                  book[0].name,
                  book[0].author,
                  &book[0].year,
                  &book[0].price) != EOF) {
        printf("ID: %d Name: %s Author: %s\n",
               book[0].id, book[0].name, book[0].author);
    }
    fclose(fp);


    fp = fopen("input.txt", "r");
    FILE *fp1 = fopen("dickens.txt", "w");
    FILE *fp2 = fopen("non_dickens.txt", "w");

    while (fscanf(fp, "%d %s %s %d %f",
                  &book[0].id,
                  book[0].name,
                  book[0].author,
                  &book[0].year,
                  &book[0].price) != EOF) {

        if (strcmp(book[0].author, "CharlesDickens") == 0)
            fprintf(fp1, "%s\n", book[0].name);
        else
            fprintf(fp2, "%s\n", book[0].name);
    }

    fclose(fp);
    fclose(fp1);
    fclose(fp2);

    return 0;
}
