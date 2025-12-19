#include<stdio.h>
#include<string.h>

struct Book_info{
    int id;
    char name[50];
    char author[50];
    int publish_year;
    float price;
};

int main(){
    struct Book_info book[100];
    int n, i;

    FILE *fp, *fp1, *fp2;

    printf("Enter number of books: ");
    scanf("%d", &n);
    getchar();

    for(i = 0; i < n; i++){
        printf("\nEnter information for book %d:\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &book[i].id);
        getchar();

        printf("Book Name: ");
        gets(book[i].name);

        printf("Author Name: ");
        gets(book[i].author);

        printf("Publish Year: ");
        scanf("%d", &book[i].publish_year);

        printf("Price: ");
        scanf("%f", &book[i].price);
        getchar();
    }

    fp = fopen("input.txt", "w");

    for(i = 0; i < n; i++){
        fprintf(fp, "%d\n", book[i].id);
        fprintf(fp, "%s\n", book[i].name);
        fprintf(fp, "%s\n", book[i].author);
        fprintf(fp, "%d\n", book[i].publish_year);
        fprintf(fp, "%.2f\n", book[i].price);
    }

    fclose(fp);

    fp = fopen("input.txt", "r");

    printf("\nBooks available in record system:\n");
    for(i = 0; i < n; i++){
        fscanf(fp, "%d\n", &book[i].id);
        gets(book[i].name);
        gets(book[i].author);
        fscanf(fp, "%d\n", &book[i].publish_year);
        fscanf(fp, "%f\n", &book[i].price);

        printf("ID: %d, Name: %s, Author: %s\n",
               book[i].id, book[i].name, book[i].author);
    }

    fclose(fp);

    fp = fopen("input.txt", "r");
    fp1 = fopen("charles_dickens.txt", "w");
    fp2 = fopen("other_authors.txt", "w");

    for(i = 0; i < n; i++){
        fscanf(fp, "%d\n", &book[i].id);
        gets(book[i].name);
        gets(book[i].author);
        fscanf(fp, "%d\n", &book[i].publish_year);
        fscanf(fp, "%f\n", &book[i].price);

        if(strcmp(book[i].author, "Charles Dickens") == 0){
            fprintf(fp1, "%s\n", book[i].name);
        }else{
            fprintf(fp2, "%s\n", book[i].name);
        }
    }

    fclose(fp);
    fclose(fp1);
    fclose(fp2);

    printf("\nFiles created successfully.\n");

    return 0;
}
