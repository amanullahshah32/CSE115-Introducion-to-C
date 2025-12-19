#include <stdio.h>
#include <string.h>

#define MAX 100

struct Book_info {
    char name[50];
    int id;
    int publish_year;
    char author[50];
    float price;
};

int main()
 {
    struct Book_info books[MAX];
    int n, i;
    FILE *fp, *fp_dickens, *fp_others;

    printf("Enter number of books: ");
    scanf("%d", &n);


    for(i = 0; i < n; i++)
    {
        printf("\nEnter details for Book %d\n", i + 1);

        printf("Book Name: ");
        scanf(" %[^\n]", books[i].name);

        printf("Book ID: ");
        scanf("%d", &books[i].id);

        printf("Publish Year: ");
        scanf("%d", &books[i].publish_year);

        printf("Author Name: ");
        scanf(" %[^\n]", books[i].author);

        printf("Price: ");
        scanf("%f", &books[i].price);
    }


    fp = fopen("input.txt", "w");
    if(fp == NULL) {
        printf("File cannot be opened.\n");
        return 1;
    }

    for(i = 0; i < n; i++) {
        fprintf(fp, "%s\n%d\n%d\n%s\n%.2f\n",
                books[i].name,
                books[i].id,
                books[i].publish_year,
                books[i].author,
                books[i].price);
    }
    fclose(fp);


    fp = fopen("input.txt", "r");
    printf("\nBooks available in record system:\n");

    for(i = 0; i < n; i++) {
        fscanf(fp, " %[^\n]", books[i].name);
        fscanf(fp, "%d", &books[i].id);
        fscanf(fp, "%d", &books[i].publish_year);
        fscanf(fp, " %[^\n]", books[i].author);
        fscanf(fp, "%f", &books[i].price);

        printf("Name: %s | Author: %s | ID: %d\n",
               books[i].name,
               books[i].author,
               books[i].id);
    }
    fclose(fp);


    fp = fopen("input.txt", "r");
    fp_dickens = fopen("charles_dickens.txt", "w");
    fp_others = fopen("other_authors.txt", "w");

    for(i = 0; i < n; i++) {
        fscanf(fp, " %[^\n]", books[i].name);
        fscanf(fp, "%d", &books[i].id);
        fscanf(fp, "%d", &books[i].publish_year);
        fscanf(fp, " %[^\n]", books[i].author);
        fscanf(fp, "%f", &books[i].price);

        if(strcmp(books[i].author, "Charles Dickens") == 0)
        {
            fprintf(fp_dickens, "%s\n", books[i].name);
        } else {
            fprintf(fp_others, "%s\n", books[i].name);
        }
    }

    fclose(fp);
    fclose(fp_dickens);
    fclose(fp_others);

    printf("\nFiles created successfully.\n");
    return 0;
}

