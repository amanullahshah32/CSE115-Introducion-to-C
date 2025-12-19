//answer 6
#include <stdio.h>
#include <string.h>

struct Book_info {
    char name[100];
    char author[100];
    int id;
    int year;
    float price;
};

int main() {
    struct Book_info books[100];
    int n;

    printf("How many books? ");
    scanf("%d", &n);


    for(int i=0; i<n; i++) {
        printf("Book %d:\n", i+1);
        printf("Name: ");
        getchar();
        gets(books[i].name);

        printf("Author: ");
        gets(books[i].author);

        printf("ID: ");
        scanf("%d", &books[i].id);

        printf("Publish year: ");
        scanf("%d", &books[i].year);

        printf("Price: ");
        scanf("%f", &books[i].price);
    }


    FILE *fp = fopen("input.txt", "w");
    for(int i=0; i<n; i++) {
        fprintf(fp, "%s\n%s\n%d\n%d\n%.2f\n",
                books[i].name,
                books[i].author,
                books[i].id,
                books[i].year,
                books[i].price);
    }
    fclose(fp);


    fp = fopen("input.txt", "r");
    struct Book_info temp;

    printf("\nBooks in system:\n");
    while(fscanf(fp, "%[^\n]\n%[^\n]\n%d\n%d\n%f\n",
                 temp.name, temp.author, &temp.id, &temp.year, &temp.price) != EOF) {
        printf("Name: %s | Author: %s | ID: %d\n",
               temp.name, temp.author, temp.id);
    }
    fclose(fp);


    fp = fopen("input.txt", "r");
    FILE *fp_dickens = fopen("dickens.txt", "w");

    while(fscanf(fp, "%[^\n]\n%[^\n]\n%d\n%d\n%f\n",
                 temp.name, temp.author, &temp.id, &temp.year, &temp.price) != EOF) {
        if(strcmp(temp.author, "Charles Dickens") == 0)
            fprintf(fp_dickens, "%s\n", temp.name);
    }

    fclose(fp);
    fclose(fp_dickens);


    fp = fopen("input.txt", "r");
    FILE *fp_other = fopen("others.txt", "w");

    while(fscanf(fp, "%[^\n]\n%[^\n]\n%d\n%d\n%f\n",
                 temp.name, temp.author, &temp.id, &temp.year, &temp.price) != EOF) {
        if(strcmp(temp.author, "Charles Dickens") != 0)
            fprintf(fp_other, "%s\n", temp.name);
    }

    fclose(fp);
    fclose(fp_other);

    return 0;
}
