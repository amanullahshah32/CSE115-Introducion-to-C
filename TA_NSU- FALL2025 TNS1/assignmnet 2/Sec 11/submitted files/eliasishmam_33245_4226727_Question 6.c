
#include <stdio.h>
#include <string.h>

struct Book_info {
    char name[100];
    int id;
    int year;
    char author[100];
    float price;
};

int main() {
    struct Book_info b[100];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("\nBook %d name: ", i+1);
        fflush(stdin);
        gets(b[i].name);

        printf("ID: ");
        scanf("%d", &b[i].id);

        printf("Publish year: ");
        scanf("%d", &b[i].year);

        printf("Author: ");
        fflush(stdin);
        gets(b[i].author);

        printf("Price: ");
        scanf("%f", &b[i].price);
    }

    FILE *fp = fopen("input.txt", "w");
    for(i=0; i<n; i++){
        fprintf(fp, "%s\n%d\n%d\n%s\n%.2f\n",
                b[i].name, b[i].id, b[i].year, b[i].author, b[i].price);
    }
    fclose(fp);

    printf("\nReading from file:\n");
    fp = fopen("input.txt", "r");
    char name[100], author[100];
    int id, year;
    float price;

    while(fgets(name, 100, fp)){
        name[strcspn(name, "\n")] = 0;
        fscanf(fp, "%d", &id);
        fscanf(fp, "%d", &year);
        fgetc(fp);
        fgets(author, 100, fp);
        author[strcspn(author, "\n")] = 0;
        fscanf(fp, "%f", &price);
        fgetc(fp);

        printf("Name: %s | Author: %s | ID: %d\n", name, author, id);
    }
    fclose(fp);

    fp = fopen("input.txt", "r");
    FILE *fp1 = fopen("dickens.txt", "w");
    FILE *fp2 = fopen("not_dickens.txt", "w");

    while(fgets(name, 100, fp)){
        name[strcspn(name, "\n")] = 0;
        fscanf(fp, "%d", &id);
        fscanf(fp, "%d", &year);
        fgetc(fp);
        fgets(author, 100, fp);
        author[strcspn(author, "\n")] = 0;
        fscanf(fp, "%f", &price);
        fgetc(fp);

        if(strcmp(author, "Charles Dickens") == 0)
            fprintf(fp1, "%s\n", name);
        else
            fprintf(fp2, "%s\n", name);
    }

    fclose(fp);
    fclose(fp1);
    fclose(fp2);

    return 0;
}
