//Sanzana Afrin Tonny
//2231370042
//section 11

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
    struct Book_info books[100];
    int n;

    printf("Enter number of books: ");
    scanf("%d", &n);
    getchar();


    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Book %d:\n", i + 1);

        printf("Name: ");

        fgets(books[i].name, 100, stdin);
        strtok(books[i].name, "\n");

        printf("Id: ");
        scanf("%d", &books[i].id);

        printf("Publish Year: ");
        scanf("%d", &books[i].year);
        getchar();

        printf("Author: ");

        fgets(books[i].author, 100, stdin);
        strtok(books[i].author, "\n");

        printf("Price: ");
        scanf("%f", &books[i].price);
        getchar();
    }


    FILE *fp = fopen("input.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "%d\n", n);
    for (int i = 0; i < n; i++) {
        fprintf(fp, "%s\n%d\n%d\n%s\n%.2f\n", books[i].name, books[i].id, books[i].year, books[i].author, books[i].price);
    }
    fclose(fp);

    fp = fopen("input.txt", "r");
    struct Book_info temp;
    int count;
    fscanf(fp, "%d", &count);
    fgetc(fp);

    printf("\nBooks in Record System:\n");

    for(int i=0; i<count; i++) {

        fgets(temp.name, 100, fp);
        strtok(temp.name, "\n");

        fscanf(fp, "%d", &temp.id);
        fscanf(fp, "%d", &temp.year);
        fgetc(fp);


        fgets(temp.author, 100, fp);
        strtok(temp.author, "\n");

        fscanf(fp, "%f", &temp.price);
        fgetc(fp);

        printf("Name: %s, Author: %s, ID: %d\n", temp.name, temp.author, temp.id);
    }
    fclose(fp);



    fp = fopen("input.txt", "r");
    FILE *f_fd = fopen("Fyodor_Dostoevsky.txt", "w");
    fscanf(fp, "%d", &count);
    fgetc(fp);

    for(int i=0; i<count; i++) {
        fgets(temp.name, 100, fp);
        strtok(temp.name, "\n");

        fscanf(fp, "%d", &temp.id);
        fscanf(fp, "%d", &temp.year);
        fgetc(fp);

        fgets(temp.author, 100, fp);
        strtok(temp.author, "\n");

        fscanf(fp, "%f", &temp.price);
        fgetc(fp);

        if(strstr(temp.author, "Fyodor Dostoevsky")) {
            fprintf(f_fd, "%s\n", temp.name);
        }
    }
    fclose(f_fd);
    fclose(fp);


    // --- 4. SEPARATE OTHERS ---
    fp = fopen("input.txt", "r");
    FILE *f_other = fopen("others.txt", "w");
    fscanf(fp, "%d", &count);
    fgetc(fp);

    for(int i=0; i<count; i++) {
        fgets(temp.name, 100, fp);
        strtok(temp.name, "\n");

        fscanf(fp, "%d", &temp.id);
        fscanf(fp, "%d", &temp.year);
        fgetc(fp);

        fgets(temp.author, 100, fp);
        strtok(temp.author, "\n");

        fscanf(fp, "%f", &temp.price);
        fgetc(fp);

        if(!strstr(temp.author, "Fyodor Dostoevsky")) {
            fprintf(f_other, "%s\n", temp.name);
        }
    }
    fclose(f_other);
    fclose(fp);

    printf("\nFiles generated successfully.\n");

    return 0;
}
