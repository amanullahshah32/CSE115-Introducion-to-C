#include <stdio.h>
#include <stdlib.h>





struct Book_info {
    int id;
    char name[50];
    char author[50];
    int publish_year;
    float price;
};

int main() {
    struct Book_info book[MAX];
    int n;
    FILE *fp, *fp_dickens, *fp_other;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &book[i].id);

        printf("Name: ");
        scanf("%s", book[i].name);

        printf("Author: ");
        scanf("%s", book[i].author);

        printf("Publish Year: ");
        scanf("%d", &book[i].publish_year);

        printf("Price: ");
        scanf("%f", &book[i].price);
    }


    fp = fopen("input.txt", "w");

    for(int i = 0; i < n; i++) {
        fprintf(fp, "%d %s %s %d %.2f\n",
                book[i].id,
                book[i].name,
                book[i].author,
                book[i].publish_year,
                book[i].price);
    }

    fclose(fp);


    printf("\nBooks available in record system:\n");

    fp = fopen("input.txt", "r");

    while(fscanf(fp, "%d %s %s %d %f",
                 &book[0].id,
                 book[0].name,
                 book[0].author,
                 &book[0].publish_year,
                 &book[0].price) != EOF) {

        printf("ID: %d | Name: %s | Author: %s\n",
               book[0].id, book[0].name, book[0].author);
    }

    fclose(fp);


    fp = fopen("input.txt", "r");
    fp_dickens = fopen("charles_dickens.txt", "w");
    fp_other = fopen("other_authors.txt", "w");

    while(fscanf(fp, "%d %s %s %d %f",
                 &book[0].id,
                 book[0].name,
                 book[0].author,
                 &book[0].publish_year,
                 &book[0].price) != EOF) {

        if(strcmp(book[0].author, "Dickens") == 0 ||
           strcmp(book[0].author, "Charles_Dickens") == 0) {

            fprintf(fp_dickens, "%s\n", book[0].name);
        } else {
            fprintf(fp_other, "%s\n", book[0].name);
        }
    }

    fclose(fp);
    fclose(fp_dickens);
    fclose(fp_other);

    printf("\nFiles created successfully.\n");

    return 0;



}






