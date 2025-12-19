#include <stdio.h>
#include <string.h>

// structure for book info
struct Book_info {
    char name[50];
    char author[50];
    int id;
    int year;
    float price;
};

int main() {
    struct Book_info books[100];
    int n;

    // a) populate the record system
    printf("Enter number of books: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        printf("\nBook %d:\n", i+1);
        printf("Name: ");
        scanf(" %[^\n]", books[i].name); 
        printf("Author: ");
        scanf(" %[^\n]", books[i].author);
        printf("ID: ");
        scanf("%d", &books[i].id);
        printf("Publish Year: ");
        scanf("%d", &books[i].year);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    // b) save info in a file input.txt
    FILE *fp = fopen("input.txt", "w");
    for(int i=0; i<n; i++){
        fprintf(fp, "%s,%s,%d,%d,%.2f\n", books[i].name, books[i].author, books[i].id, books[i].year, books[i].price);
    }
    fclose(fp);

    // c) read info from file and display Name, Author, ID
    printf("\nBooks in the record system:\n");
    fp = fopen("input.txt","r");
    struct Book_info temp;
    while(fscanf(fp," %[^,],%[^,],%d,%d,%f", temp.name, temp.author, &temp.id, &temp.year, &temp.price) != EOF){
        printf("Name: %s | Author: %s | ID: %d\n", temp.name, temp.author, temp.id);
    }
    fclose(fp);

    // d) create new file with books by Charles Dickens
    fp = fopen("input.txt","r");
    FILE *fpDickens = fopen("dickens.txt","w");
    while(fscanf(fp," %[^,],%[^,],%d,%d,%f", temp.name, temp.author, &temp.id, &temp.year, &temp.price) != EOF){
        if(strcasecmp(temp.author,"Charles Dickens")==0){
            fprintf(fpDickens,"%s\n", temp.name);
        }
    }
    fclose(fp);
    fclose(fpDickens);

    // e) create new file with books NOT by Charles Dickens
    fp = fopen("input.txt","r");
    FILE *fpNotDickens = fopen("not_dickens.txt","w");
    while(fscanf(fp," %[^,],%[^,],%d,%d,%f", temp.name, temp.author, &temp.id, &temp.year, &temp.price) != EOF){
        if(strcasecmp(temp.author,"Charles Dickens")!=0){
            fprintf(fpNotDickens,"%s\n", temp.name);
        }
    }
    fclose(fp);
    fclose(fpNotDickens);

    printf("\nFiles created: dickens.txt and not_dickens.txt\n");

    return 0;
}