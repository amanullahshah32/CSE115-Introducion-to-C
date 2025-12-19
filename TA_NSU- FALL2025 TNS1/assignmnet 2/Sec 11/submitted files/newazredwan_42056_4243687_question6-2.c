#include <stdio.h>
#include <string.h>

struct Book_info {
    char name[100];
    int id;
    int publish_year;
    char author[100];
    float price;
};

int main() {
    struct Book_info library[100];
    int count = 0;
    int i;

    // Take input
    printf("Enter number of books to record (max 100): ");
    scanf("%d", &count);
    getchar(); // Consume newline

    // a) Populate the record system
    for(i = 0; i < count; i++) {
        printf("\nEnter details for Book %d:\n", i + 1);
        printf("Name: ");
        // Using fgets for safer string input (removes newline manually)
        fgets(library[i].name, 100, stdin);
        library[i].name[strcspn(library[i].name, "\n")] = 0;

        printf("ID: ");
        scanf("%d", &library[i].id);

        printf("Publish Year: ");
        scanf("%d", &library[i].publish_year);
        getchar(); // Consume newline

        printf("Author: ");
        fgets(library[i].author, 100, stdin);
        library[i].author[strcspn(library[i].author, "\n")] = 0;

        printf("Price: ");
        scanf("%f", &library[i].price);
        getchar(); // Consume newline
    }

    // b) Save to input.txt
    FILE *fp_out = fopen("input.txt", "w");
    if(fp_out == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp_out, "%d\n", count);
    for(i = 0; i < count; i++) {
        fprintf(fp_out, "%s\n%d\n%d\n%s\n%.2f\n",
                library[i].name, library[i].id, library[i].publish_year, library[i].author, library[i].price);
    }
    fclose(fp_out);

    // c, d, e) Read and Process
    FILE *fp_in = fopen("input.txt", "r");
    FILE *fp_dickens = fopen("charles_dickens.txt", "w");
    FILE *fp_others = fopen("others.txt", "w");

    struct Book_info temp_book;
    int file_count;
    char buffer[100];

    printf("\n--- Book List from File ---\n");
    fscanf(fp_in, "%d\n", &file_count);

    for(i = 0; i < file_count; i++) {
        // Read Name
        fgets(temp_book.name, 100, fp_in);
        temp_book.name[strcspn(temp_book.name, "\n")] = 0;

        // Read Numbers
        fscanf(fp_in, "%d\n", &temp_book.id);
        fscanf(fp_in, "%d\n", &temp_book.publish_year);

        // Read Author
        fgets(temp_book.author, 100, fp_in);
        temp_book.author[strcspn(temp_book.author, "\n")] = 0;

        // Read Price
        fscanf(fp_in, "%f\n", &temp_book.price);

        // c) Display
        printf("Book: %s | Author: %s | ID: %d\n", temp_book.name, temp_book.author, temp_book.id);

        // d & e) Filter
        if(strcmp(temp_book.author, "Charles Dickens") == 0) {
            fprintf(fp_dickens, "%s\n", temp_book.name);
        } else {
            fprintf(fp_others, "%s\n", temp_book.name);
        }
    }

    fclose(fp_in);
    fclose(fp_dickens);
    fclose(fp_others);

    printf("\nOutput files generated successfully.\n");
    return 0;
}

