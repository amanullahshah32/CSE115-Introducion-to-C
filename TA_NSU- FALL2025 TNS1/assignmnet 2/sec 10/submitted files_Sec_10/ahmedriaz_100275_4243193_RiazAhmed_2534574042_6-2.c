#include <stdio.h>
#include <string.h>

struct Book_info {
    char name[50];
    int id;
    int publishyear;
    char author[50];
    float price;
};

int main() {
    struct Book_info books[100];
    int n,i;

    FILE *f1, *f2, *f3;
    printf("Enter number of books <=100");
    scanf("%d", &n);

 
    for( i = 0; i < n; i++) {
        printf("\nBook %d details:\n", i + 1);

        printf("Name");
        gets(books[i].name);

        printf("ID");
        scanf("%d", &books[i].id);

        printf("Publish Year ");
        scanf("%d", &books[i].publishyear);

        printf("Author ");
        gets(books[i].author);

        printf("Price");
        scanf("%f", &books[i].price);
    }

    
    f1 = fopen("input.txt", "w");

    for(i = 0; i < n; i++) {
        fprintf(f1, "%s\n%d\n%d\n%s\n%.2f\n",
                books[i].name,
                books[i].id,
                books[i].publishyear,
                books[i].author,
                books[i].price);
    }

    fclose(f1);

 
    f1 = fopen("input.txt", "r");

    printf("\nBooks Available\n");
    for( i = 0; i < n; i++) {
        fscanf(f1, " %[^\n]", books[i].name);
        fscanf(f1, "%d", &books[i].id);
        fscanf(f1, "%d", &books[i].publishyear);
        fscanf(f1, " %s", books[i].author);
        fscanf(f1, "%f", &books[i].price);

        printf("Name: %s and Author: %s and ID: %d\n",
               books[i].name, books[i].author, books[i].id);
    }
    fclose(f1);

    
 
    f2 = fopen("charlesdickens.txt", "w");
    f3 = fopen("otherauthors.txt", "w");

    for( i = 0; i < n; i++) {
        if(strcmp(books[i].author, "Charles Dickens") == 0) {
            fprintf(f2, "%s\n", books[i].name);
        } else {
            fprintf(f3, "%s\n", books[i].name);
        }
    }

    fclose(f2);
    fclose(f3);

    return 0;
}