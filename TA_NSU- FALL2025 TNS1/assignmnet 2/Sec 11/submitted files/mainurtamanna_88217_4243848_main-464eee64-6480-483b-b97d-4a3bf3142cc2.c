#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct Book_info {
    char name[50];
    int id;
    int year;
    char author[50];
    float price;
};

int main() {
    struct Book_info b[100];
    int n, i;
    FILE *fp;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);
        scanf(" %[^\n]", b[i].name);
        scanf("%d", &b[i].id);
        scanf("%d", &b[i].year);
        scanf(" %[^\n]", b[i].author);
        scanf("%f", &b[i].price);
    }

    // Save to file
    fp = fopen("input.txt", "w");
    for(i = 0; i < n; i++) {
        fprintf(fp, "%s\n%d\n%d\n%s\n%f\n",
                b[i].name, b[i].id, b[i].year, b[i].author, b[i].price);
    }
    fclose(fp);

    // Read and display name, author, id
    fp = fopen("input.txt", "r");
    printf("\nBooks Available:\n");
    for(i = 0; i < n; i++) {
        fscanf(fp, " %[^\n]\n%d\n%d\n %[^\n]\n%f",
               b[i].name, &b[i].id, &b[i].year, b[i].author, &b[i].price);
        printf("%s %s %d\n", b[i].name, b[i].author, b[i].id);
    }
    fclose(fp);

    // Charles Dickens books
    fp = fopen("charles.txt", "w");
    for(i = 0; i < n; i++) {
        if(strcmp(b[i].author, "Charles Dickens") == 0) {
            fprintf(fp, "%s\n", b[i].name);
        }
    }
    fclose(fp);

    // Non Charles Dickens books
    fp = fopen("others.txt", "w");
    for(i = 0; i < n; i++) {
        if(strcmp(b[i].author, "Charles Dickens") != 0) {
            fprintf(fp, "%s\n", b[i].name);
        }
    }
    fclose(fp);

    return 0;
}
