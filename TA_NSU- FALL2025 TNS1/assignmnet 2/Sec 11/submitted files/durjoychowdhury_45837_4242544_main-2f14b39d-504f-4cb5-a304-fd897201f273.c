#include <stdio.h>
#include <string.h>

struct Book_info {
    char name[50];
    char author[50];
    int id;
    int publish_year;
    float price;
};

int main() {
    struct Book_info books[100], temp;
    int n;

    /* a) Take input and populate record system */
    printf("Enter number of books: ");
    scanf("%d", &n);

    FILE *fp = fopen("input.txt", "w");

    for (int i = 0; i < n; i++) {
        printf("\nBook %d details:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", books[i].name);

        printf("Author: ");
        scanf(" %[^\n]", books[i].author);

        printf("ID: ");
        scanf("%d", &books[i].id);

        printf("Publish Year: ");
        scanf("%d", &books[i].publish_year);

        printf("Price: ");
        scanf("%f", &books[i].price);

        /* b) Save information in input.txt */
        fprintf(fp, "%s;%s;%d;%d;%.2f\n",
                books[i].name,
                books[i].author,
                books[i].id,
                books[i].publish_year,
                books[i].price);
    }

    fclose(fp);

    /* c) Read from file and display name, author, id */
    fp = fopen("input.txt", "r");
    printf("\nBooks available in record system:\n");

    while (fscanf(fp, "%[^;];%[^;];%d;%d;%f\n",
                  temp.name,
                  temp.author,
                  &temp.id,
                  &temp.publish_year,
                  &temp.price) != EOF) {

        printf("Name: %s | Author: %s | ID: %d\n",
               temp.name, temp.author, temp.id);
    }
    fclose(fp);

    /* d & e) Create files based on author */
    fp = fopen("input.txt", "r");
    FILE *fp1 = fopen("charles_dickens.txt", "w");
    FILE *fp2 = fopen("not_charles_dickens.txt", "w");

    while (fscanf(fp, "%[^;];%[^;];%d;%d;%f\n",
                  temp.name,
                  temp.author,
                  &temp.id,
                  &temp.publish_year,
                  &temp.price) != EOF) {

        if (strcmp(temp.author, "Charles Dickens") == 0) {
            fprintf(fp1, "%s\n", temp.name);
        } else {
            fprintf(fp2, "%s\n", temp.name);
        }
    }

    fclose(fp);
    fclose(fp1);
    fclose(fp2);

    printf("\nFiles created successfully.\n");
    return 0;
}
