#include <stdio.h>
#include <string.h>
#include <strings.h>

struct Book_info {
    char name[50];
    int id;
    int pyear;
    char author[20];
    int price;
};

int main() {
    FILE* in;
    in = fopen("input.txt", "w");

    struct Book_info b[100];
    int n;

    printf("Enter number of books: ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);

        printf("Book Name: ");
        fgets(b[i].name, sizeof(b[i].name), stdin);
        b[i].name[strcspn(b[i].name, "\n")] = 0;

        printf("ID: ");
        scanf("%d", &b[i].id);

        printf("Publish Year: ");
        scanf("%d", &b[i].pyear);
        getchar();

        printf("Author Name: ");
        fgets(b[i].author, sizeof(b[i].author), stdin);
        b[i].author[strcspn(b[i].author, "\n")] = 0;

        printf("Price: ");
        scanf("%d", &b[i].price);
        getchar();

        fprintf(in, "%s,%d,%d,%s,%d\n",
                b[i].name, b[i].id, b[i].pyear, b[i].author, b[i].price);
    }
    fclose(in);
    in = fopen("input.txt", "r");

    printf("\nAll books from file:\n\n");

    int i = 0;
    while (fscanf(in, "%49[^,],%d,%d,%19[^,],%d\n",
                  b[i].name, &b[i].id, &b[i].pyear, b[i].author, &b[i].price) == 5) {

        printf("Name: %s\n", b[i].name);
        printf("ID: %d\n", b[i].id);
        printf("Author: %s\n\n", b[i].author);
        i++;
    }
    fclose(in);
    in = fopen("input.txt", "r");
    FILE* file1 = fopen("file1.txt", "w");

    printf("Books written by Charles Dickens:\n\n");

    int j = 0;
    while (fscanf(in, "%49[^,],%d,%d,%19[^,],%d\n",
                  b[j].name, &b[j].id, &b[j].pyear, b[j].author, &b[j].price) == 5) {

        if (strcasecmp(b[j].author, "Charles Dickens") == 0) {
            printf("Name: %s\n", b[j].name);
            fprintf(file1, "%s\n", b[j].name);
        }
        j++;
    }
    fclose(in);
    fclose(file1);
    in = fopen("input.txt", "r");
    FILE* file2 = fopen("file2.txt", "w");

    printf("\nBooks NOT written by Charles Dickens:\n\n");

    int k = 0;
    while (fscanf(in, "%49[^,],%d,%d,%19[^,],%d\n",
                  b[k].name, &b[k].id, &b[k].pyear, b[k].author, &b[k].price) == 5) {

        if (strcasecmp(b[k].author, "Charles Dickens") != 0) {
            printf("Name: %s\n", b[k].name);
            fprintf(file2, "%s\n", b[k].name);
        }
        k++;
    }

    fclose(in);
    fclose(file2);

    return 0;
}
