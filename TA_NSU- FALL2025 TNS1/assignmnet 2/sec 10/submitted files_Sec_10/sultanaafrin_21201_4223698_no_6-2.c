#include <stdio.h>
#include <string.h>

struct Book_info {
    char name[50];
    int id;
    int year;
    char author[50];
    float price;
};

int main() {
    struct Book_info b;
    int n;

    FILE *fp = fopen("input.txt", "w");

    printf("How many books do you want to enter? ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("\nEnter details for Book %d:\n", i+1);

        printf("Book's Name : ");
        scanf("%s", b.name);

        printf("ID : ");
        scanf("%d", &b.id);

        printf("Publish Year: ");
        scanf("%d", &b.year);

        printf("Author Name: ");
        scanf("%s", b.author);

        printf("Price: ");
        scanf("%f", &b.price);

        fprintf(fp, "%s %d %d %s %.2f\n", b.name, b.id, b.year, b.author, b.price);
    }


    fclose(fp);
    printf("\n[Success] Data saved to input.txt\n");



    printf("\n--- Reading Data from Record System ---\n");


    fp = fopen("input.txt", "r");

    while(fscanf(fp, "%s %d %d %s %f", b.name, &b.id, &b.year, b.author, &b.price) != EOF) {
        printf("Book: %s | Author: %s | ID: %d\n", b.name, b.author, b.id);
    }
    fclose(fp);


    fp = fopen("input.txt", "r");


    FILE *charlesFile = fopen("charles.txt", "w");
    FILE *othersFile = fopen("others.txt", "w");

    while(fscanf(fp, "%s %d %d %s %f", b.name, &b.id, &b.year, b.author, &b.price) != EOF) {

        if(strcmp(b.author, "Charles_Dickens") == 0) {

            fprintf(charlesFile, "%s\n", b.name);
        } else {

            fprintf(othersFile, "%s\n", b.name);
        }
    }

    fclose(fp);
    fclose(charlesFile);
    fclose(othersFile);

    printf("\n[Success] Separated books into 'charles.txt' and 'others.txt'.\n");

    return 0;
}
